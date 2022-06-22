/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:42:13 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/11 21:24:09 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	last_i;

	last_i = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[last_i + i] = src[i];
		i++;
	}
	dest[last_i + i] = '\0';
	return (dest);
}

char	*ft_sum_strings(char *a, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(a, strs[i]);
		if (i + 1 < size)
			ft_strcat(a, sep);
		i++;
	}
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*a;
	char	*d;

	i = 0;
	len = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	a = (char *)malloc(sizeof(char) * (len + 1));
	d = a;
	if (!d)
		return (0);
	ft_sum_strings(a, strs, sep, size);
	a[len + 1] = '\0';
	return (a);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char *a;

	a = ft_strjoin(ac - 1, av + 1, "x");
	printf("%s\n", a);
}*/
