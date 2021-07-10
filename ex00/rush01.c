/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:57:06 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 19:49:04 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "rush01.h"

static int	check(int *map, int *constraint, int depth)
{
	int	x;
	int	y;
	int	res;

	x = depth % 4;
	y = depth / 4;
	res = map[depth];
	while (x-- > 0)
		if (res == map[y * 4 + x])
			return (0);
	x = depth % 4;
	while (y-- > 0)
		if (res == map[y * 4 + x])
			return (0);
	y = depth / 4;
	if (x == 3 && (check_rowleft(constraint[8 + y], map, y)
			|| check_rowright(constraint[12 + y], map, y)))
		return (0);
	if (y == 3 && (check_colup(constraint[0 + x], map, x)
			|| check_coldown(constraint[4 + x], map, x)))
		return (0);
	return (1);
}

static void	print_solution(int *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(map[i * 4 + j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

static int	solve(int *map, int *constraint, int depth)
{
	int	i;

	if (depth == 16)
		return (1);
	i = 1;
	while (i <= 4)
	{
		map[depth] = i;
		if (check(map, constraint, depth))
			if (solve(map, constraint, depth + 1))
				return (1);
		i++;
	}
	map[depth] = 0;
	return (0);
}

static int	parse_constraint(int *constraint, int nb_arg, char *arg)
{
	int		i;
	int		j;
	char	c;

	if (nb_arg != 1 || ft_strlen(arg) != 31)
		return (1);
	i = 0;
	j = 0;
	c = arg[0];
	while (c)
	{
		if (i % 2 == 0)
		{
			if (!ft_interval(c, '1', '4'))
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
	int	map[16];
	int	constraint[16];
	int	err;

	err = parse_constraint(constraint, ac - 1, av[1]);
	if (err)
		return (ft_error());
	ft_bzero(map, sizeof(int) * 16);
	err = !solve(map, constraint, 0);
	if (err)
		return (ft_error());
	print_solution(map);
	return (0);
}
