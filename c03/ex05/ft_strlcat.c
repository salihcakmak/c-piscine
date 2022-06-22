/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:43:11 by scakmak           #+#    #+#             */
/*   Updated: 2021/11/03 13:35:36 by scakmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	get_len(char *d)
{
	int	i;

	i = 0;
	while (d[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;

	dl = get_len(dest);
	sl = get_len(src);
	if (size <= dl)
		return (size + sl);
	i = 0;
	while (src[i] != '\0' && i < size - dl - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
