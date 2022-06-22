/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:04:26 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 23:08:33 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char d1[100] = "deneme icerik";
	char d2[100] = "bu bos icerik denemesi";

	unsigned int size = 15;
		
	printf("%d", ft_strlcat(d1,d2,size));
	printf("%s", d1);
	
}

