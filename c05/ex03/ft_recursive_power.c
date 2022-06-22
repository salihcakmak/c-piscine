/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:20:26 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/05 23:49:59 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
int main()
{
	printf("%d",ft_recursive_power(0,0));
}*/
