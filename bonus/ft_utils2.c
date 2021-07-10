/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:57:06 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 21:08:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"

void	ft_init(int line_len, int **map, int **constraint)
{
	*map = (int *)ft_calloc(line_len * line_len, sizeof(int));
	*constraint = (int *)ft_calloc(line_len * line_len, sizeof(int));
}

void	ft_clean(int **map, int **constraint)
{
	free(*map);
	*map = NULL;
	free(*constraint);
	*constraint = NULL;
}
