/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:07:00 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 19:22:18 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[100] = "Hellodasssssss";
	char src[] = "rld!dsffffff";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}
