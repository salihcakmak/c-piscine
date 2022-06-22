/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:23:13 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 19:10:40 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*p = "abcdadd";
	char	*d = "2bcddasdsada";
	unsigned int	n = 1;

	printf("%d \n", strncmp(p, d, n));
	printf("%d \n", ft_strncmp(p, d, n));
}
