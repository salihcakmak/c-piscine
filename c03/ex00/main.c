/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:36:28 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/02 16:04:26 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	
	char *p = "denem";
	char *d = "deneme";
	printf("%d \n", ft_strcmp(p,d));
	printf("%d \n", strcmp(p,d));

	char s1[] = "Nada a ver";
	char s2[] = "Teste de Comparacao";
	char s3[] = "Teste";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1), strcmp(s2, s3), strcmp(s3, s2));
}
