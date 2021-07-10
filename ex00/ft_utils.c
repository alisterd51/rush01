/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:57:06 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 18:40:29 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	ret;

	if (!str)
		return (-1);
	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}

void	ft_putchar(char c)
{
	ssize_t	ret;

	ret = write(1, &c, 1);
	(void)ret;
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}

int	ft_interval(char c, char low, char up)
{
	return (low <= c && c <= up);
}

int	ft_error(void)
{
	ssize_t	ret;

	ret = write(1, "Error\n", 6);
	(void)ret;
	return (1);
}
