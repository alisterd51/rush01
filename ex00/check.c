/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:15:47 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 20:12:07 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_skyscraper(const int *tab)
{
	int	ret;
	int	max;
	int	i;

	ret = 0;
	max = 0;
	i = 0;
	while (max < 4 && i < 4)
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

int	check_rowleft(int rowleft, int *map, int y)
{
	const int	tab[4] = {map[y * 4 + 0], map[y * 4 + 1],
							map[y * 4 + 2], map[y * 4 + 3]};
	int			count;

	count = count_skyscraper(tab);
	if ((rowleft == 1 && tab[0] != 4)
		|| (rowleft == 2 && count != 2)
		|| (rowleft == 3 && count != 3)
		|| (rowleft == 4 && count != 4))
		return (1);
	return (0);
}

int	check_rowright(int rowright, int *map, int y)
{
	const int	tab[4] = {map[y * 4 + 3], map[y * 4 + 2],
							map[y * 4 + 1], map[y * 4 + 0]};
	int			count;

	count = count_skyscraper(tab);
	if ((rowright == 1 && tab[0] != 4)
		|| (rowright == 2 && count != 2)
		|| (rowright == 3 && count != 3)
		|| (rowright == 4 && count != 4))
		return (1);
	return (0);
}

int	check_colup(int colup, int *map, int x)
{
	const int	tab[4] = {map[0 * 4 + x], map[1 * 4 + x],
							map[2 * 4 + x], map[3 * 4 + x]};
	int			count;

	count = count_skyscraper(tab);
	if ((colup == 1 && tab[0] != 4)
		|| (colup == 2 && count != 2)
		|| (colup == 3 && count != 3)
		|| (colup == 4 && count != 4))
		return (1);
	return (0);
}

int	check_coldown(int coldown, int *map, int x)
{
	const int	tab[4] = {map[3 * 4 + x], map[2 * 4 + x],
							map[1 * 4 + x], map[0 * 4 + x]};
	int			count;

	count = count_skyscraper(tab);
	if ((coldown == 1 && tab[0] != 4)
		|| (coldown == 2 && count != 2)
		|| (coldown == 3 && count != 3)
		|| (coldown == 4 && count != 4))
		return (1);
	return (0);
}
