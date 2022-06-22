/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:38:22 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/05 23:52:31 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	fibo = 0;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}
/*
int main()
{
	printf("%d", ft_fibonacci(5));
}*/
