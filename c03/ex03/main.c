/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:27:16 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 19:38:17 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[100] = "bu bir metin";
	char src[] = "onemli değil";
	printf("%s",ft_strncat(dest,src,6));
}
