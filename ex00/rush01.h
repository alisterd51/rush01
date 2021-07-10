/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:36:54 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 18:15:20 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

/*
** ft_utils.c
*/
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
int		ft_interval(char c, char low, char up);
int		ft_error(void);

/*
** check.c
*/
int		check_rowleft(int rowleft, int *map, int y);
int		check_rowright(int rowright, int *map, int y);
int		check_colup(int colup, int *map, int x);
int		check_coldown(int coldown, int *map, int x);

#endif
