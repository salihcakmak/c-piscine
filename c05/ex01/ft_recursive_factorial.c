/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:00:23 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/06 00:11:18 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*
int main()
{
	printf("%d",	ft_recursive_factorial(5));
}
*/
