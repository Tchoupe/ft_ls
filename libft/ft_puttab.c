/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 00:45:05 by viforget          #+#    #+#             */
/*   Updated: 2019/06/02 18:53:55 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab, size_t n)
{
	size_t x;

	if (!(tab) || !(*tab) || n == 0)
		return ;
	x = 0;
	while (x < n)
	{
		if (tab[x][0] != '\0')
			ft_putendl(tab[x]);
		x++;
	}
}