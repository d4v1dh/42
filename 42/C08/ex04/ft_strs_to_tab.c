/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 21:30:45 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/27 22:44:46 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_strdup(char *src)
{
	int			i;
	int			len;
	char		*dst;

	i = 0;
	len = ft_strlen(src);
	if (!(dst = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

t_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dst;

	if (!(dst = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dst[i].str = *av;
		dst[i].copy = ft_strdup(*av);
		dst[i].size = ft_strlen(*av);
		i++;
		av++;
	}
	dst[i].str = 0;
	return (dst);
}
