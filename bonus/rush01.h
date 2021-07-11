/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:36:54 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 21:38:12 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

/*
** ft_utils.c
*/
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	*ft_calloc(size_t count, size_t size);
int		ft_interval(char c, char low, char up);
int		ft_error(void);

/*
** ft_utils2.c
*/
void	ft_init(int line_len, int **map, int **constraint);
void	ft_clean(int **map, int **constraint);

/*
** check.c
*/
int		count_skyscraper(int line_len, int *tab);
int		check_rowleft(int line_len, int rowleft, int *map, int y);
int		check_rowright(int line_len, int rowright, int *map, int y);
int		check_colup(int line_len, int colup, int *map, int x);
int		check_coldown(int line_len, int coldown, int *map, int x);

#endif
