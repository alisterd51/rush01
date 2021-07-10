/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:57:06 by anclarma          #+#    #+#             */
/*   Updated: 2021/07/10 21:21:36 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			len;
	unsigned char	*dst;

	len = count * size;
	dst = malloc(len);
	if (!dst)
		return (NULL);
	i = -1;
	while (++i < len)
		dst[i] = 0;
	return ((void *)dst);
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
