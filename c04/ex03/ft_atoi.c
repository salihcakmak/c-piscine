/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saozcan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:25:58 by saozcan           #+#    #+#             */
/*   Updated: 2021/11/02 19:39:56 by saozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchanger(char *str, int i, int nc)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * nc);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nc;

	nc = 1;
	i = 0;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nc *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		return (ft_strchanger(str, i, nc));
		i++;
	}
	return (0);
}
