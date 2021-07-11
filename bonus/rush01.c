/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:57:06 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 21:37:20 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "rush01.h"

int	precheck_colup(int line_len, int colup, int *map, int x)
{
	int	tab[9];
	int	count;
	int	i;

	i = 0;
	while (i < line_len)
	{
		tab[i] = map[i * line_len + x];
		i++;
	}
	if (colup == 1 && tab[0] != line_len)
		return (1);
	i = line_len;
	count = count_skyscraper(line_len, tab);
	while (i > 1)
	{
		if (colup == i && count > i)
			return (1);
		i--;
	}
	return (0);
}

int	precheck_rowleft(int line_len, int rowleft, int *map, int y)
{
	int	tab[9];
	int	count;
	int	i;

	i = 0;
	while (i < line_len)
	{
		tab[i] = map[y * line_len + i];
		i++;
	}
	if (rowleft == 1 && tab[0] != line_len)
		return (1);
	i = line_len;
	count = count_skyscraper(line_len, tab);
	while (i > 1)
	{
		if (rowleft == i && count > i)
			return (1);
		i--;
	}
	return (0);
}

static int	check(int line_len, int *map, int *constraint, int depth)
{
	int	x;
	int	y;
	int	res;

	x = depth % line_len;
	y = depth / line_len;
	res = map[depth];
	while (x-- > 0)
		if (res == map[y * line_len + x])
			return (0);
	x = depth % line_len;
	while (y-- > 0)
		if (res == map[y * line_len + x])
			return (0);
	y = depth / line_len;
	if (precheck_colup(line_len, constraint[x], map, x)
		|| precheck_rowleft(line_len, constraint[line_len * 2 + y], map, y))
		return (0);
	if (x == 0 && constraint[line_len * 2 + y] == 1 && res != line_len)
		return (0);
	if (y == 0 && constraint[x] == 1 && res != line_len)
		return (0);
	if (res == line_len
		&& (check_colup(line_len, constraint[x], map, x)
			|| check_rowleft(line_len, constraint[line_len * 2 + y], map, y)))
		return (0);
	if (x == line_len - 1
		&& (check_rowleft(line_len, constraint[line_len * 2 + y], map, y)
			|| check_rowright(line_len, constraint[line_len * 3 + y], map, y)))
		return (0);
	if (y == line_len - 1 && (check_colup(line_len, constraint[x], map, x)
			|| check_coldown(line_len, constraint[line_len + x], map, x)))
		return (0);
	return (1);
}

static void	print_solution(int line_len, int *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < line_len)
	{
		j = 0;
		while (j < line_len)
		{
			ft_putchar(map[i * line_len + j] + '0');
			if (j < line_len - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

static int	solve(int line_len, int *map, int *constraint, int depth)
{
	int	i;

	if (depth == line_len * line_len)
		return (1);
	i = 1;
	while (i <= line_len)
	{
		map[depth] = i;
		if (check(line_len, map, constraint, depth))
			if (solve(line_len, map, constraint, depth + 1))
				return (1);
		i++;
	}
	map[depth] = 0;
	return (0);
}

static int
	parse_constraint(int line_len, int *constraint, int nb_arg, char *arg)
{
	int		i;
	int		j;
	char	c;

	if (nb_arg != 1 || line_len > 9 || ft_strlen(arg) != line_len * 8 - 1)
		return (1);
	i = 0;
	j = 0;
	c = arg[0];
	while (c)
	{
		if (i % 2 == 0)
		{
			if (!ft_interval(c, '1', '0' + line_len))
				return (1);
			constraint[j++] = c - '0';
		}
		else if (c != ' ')
			return (1);
		i++;
		c = arg[i];
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	*map;
	int	*constraint;
	int	line_len;

	map = NULL;
	constraint = NULL;
	line_len = (ft_strlen(av[1]) + 1) / 8;
	ft_init(line_len, &map, &constraint);
	if (!map || !constraint)
	{
		ft_clean(&map, &constraint);
		return (ft_error());
	}
	if (parse_constraint(line_len, constraint, ac - 1, av[1]))
	{
		ft_clean(&map, &constraint);
		return (ft_error());
	}
	if (!solve(line_len, map, constraint, 0))
	{
		ft_clean(&map, &constraint);
		return (ft_error());
	}
	print_solution(line_len, map);
	ft_clean(&map, &constraint);
	return (0);
}
