/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:40:47 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/05 15:26:31 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str2, char *str1)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && (str1[i] == str2[i]))
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{	
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) < 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
}
