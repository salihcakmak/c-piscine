/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scakmak <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:01:00 by scakmak           #+#    #+#             */
/*   Updated: 2021/10/28 16:44:38 by scakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	endi;
	int	swap;

	i = 0;
	endi = size - 1;
	while (i < endi)
	{
		swap = tab[i];
		tab[i] = tab[endi];
		tab[endi] = swap;
		i++;
		endi--;
	}
}
