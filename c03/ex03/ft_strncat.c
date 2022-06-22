/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:27:09 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/03 13:10:46 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dl;
	unsigned int	i;

	i = 0;
	dl = get_len(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dl] = src[i];
		i++;
		dl++;
	}
	dest[dl] = '\0';
	return (dest);
}
