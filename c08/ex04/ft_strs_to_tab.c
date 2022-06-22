/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:33:08 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/12 00:24:51 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
	int		src_len;
	char	*dest;
	char	*check;

	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	check = dest;
	if (!check)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;
	struct s_stock_str	*check;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	check = array;
	if (!check)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	struct s_stock_str *ab = ft_strs_to_tab(ac, av);

	int i = 0;

	while (i < ac + 1)
	{
		printf("Bu %d. Argüman \n",i);
		printf("Size : %d\n", ab[i].size);
		printf("Str  : %s\n", ab[i].str);
		printf("Copy : %s\n -----\n", ab[i].copy);
		i++;
	}
	
}*/
