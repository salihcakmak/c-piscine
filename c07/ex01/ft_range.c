/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:33:48 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/11 20:38:42 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*a;
	int	*d;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	a = (int *)malloc(sizeof(int) * len);
	d = a;
	if (!d)
		return (0);
	while (i < len)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>

int	main()
{
	int min = 0;
	int max = 1;
	int i = 0;
	int *a;
	a = ft_range(min, max);
	while (i < (max - min))
		printf("%d, ",a[i++]);
	printf("\n"); 
}*/
