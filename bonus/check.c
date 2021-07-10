/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:15:47 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 22:10:59 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_skyscraper(int line_len, int *tab)
{
	int	ret;
	int	max;
	int	i;

	ret = 0;
	max = 0;
	i = 0;
	while (max < line_len && i < line_len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			ret++;
		}
		i++;
	}
	return (ret);
}

int	check_rowleft(int line_len, int rowleft, int *map, int y)
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
		if (rowleft == i && count != i)
			return (1);
		i--;
	}
	return (0);
}

int	check_rowright(int line_len, int rowright, int *map, int y)
{
	int	tab[9];
	int	count;
	int	i;

	i = 0;
	while (line_len - 1 - i >= 0)
	{
		tab[i] = map[y * line_len + (line_len - 1 - i)];
		i++;
	}
	if (rowright == 1 && tab[0] != line_len)
		return (1);
	i = line_len;
	count = count_skyscraper(line_len, tab);
	while (i > 1)
	{
		if (rowright == i && count != i)
			return (1);
		i--;
	}
	return (0);
}

int	check_colup(int line_len, int colup, int *map, int x)
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
		if (colup == i && count != i)
			return (1);
		i--;
	}
	return (0);
}

int	check_coldown(int line_len, int coldown, int *map, int x)
{
	int	tab[9];
	int	count;
	int	i;

	i = 0;
	while (line_len - 1 - i >= 0)
	{
		tab[i] = map[(line_len - 1 - i) * line_len + x];
		i++;
	}
	if (coldown == 1 && tab[0] != line_len)
		return (1);
	i = line_len;
	count = count_skyscraper(line_len, tab);
	while (i > 1)
	{
		if (coldown == i && count != i)
			return (1);
		i--;
	}
	return (0);
}
