/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:27:18 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/12 03:33:48 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n > 9)
	{
		ft_putint(n / 10);
		ft_putint(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putint(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	struct s_stock_str *ab = ft_strs_to_tab(ac, av);

	ft_show_tab(ab);
}*/
