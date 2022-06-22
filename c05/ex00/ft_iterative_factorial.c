/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:20:38 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/06 00:09:52 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));
}*/
