/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:43:31 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 20:42:43 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char dizi[] ="deneme metni";
	char d2[] = "e";

	printf("%s",ft_strstr(dizi, d2));
}
