/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 02:52:25 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/27 05:42:35 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((tab = (int *)malloc((max - min) * sizeof(int))) == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
