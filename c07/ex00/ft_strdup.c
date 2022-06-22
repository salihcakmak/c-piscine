/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:23:48 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/11 20:31:30 by scakmak          ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*a;
	char	*d;

	i = 0;
	len = ft_strlen(src);
	a = (char *)malloc(sizeof(char) * (len + 1));
	d = a;
	if (!d)
		return (0);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*
#include <stdio.h>
int	main()
{
	char *a = "abcd";
	printf("%s\n", ft_strdup(a));
}*/
