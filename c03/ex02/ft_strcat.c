/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:06:32 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/03 13:08:34 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	l;

	l = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[l] = *src;
		l++;
		src++;
	}
	dest[l] = '\0';
	return (dest);
}
