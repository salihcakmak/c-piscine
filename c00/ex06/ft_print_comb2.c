/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:10:06 by scakmak           #+#    #+#             */
/*   Updated: 2021/10/24 10:28:06 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_combine(char v1, char v2, char v3, char v4)
{
	write(1, &v1, 1);
	write(1, &v2, 1);
	write(1, " ", 1);
	write(1, &v3, 1);
	write(1, &v4, 1);
	if (v1 != '9' || v2 != '8')
	{
		write(1, ", ", 2);
	}
}

void	get_99(char a, char b)
{
	char	ga;
	char	gb;

	ga = a;
	gb = b;
	b++;
	while (a <= '9')
	{
		while (b <= '9')
		{
			get_combine(ga, gb, a, b);
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			get_99(a, b);
			b++;
		}
		a++;
	}
}
