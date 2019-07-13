/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 03:31:55 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/27 22:10:16 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *r;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((r = (int *)malloc((max - min) * sizeof(int))) == NULL)
		return (0);
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
