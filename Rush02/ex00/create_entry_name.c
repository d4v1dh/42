/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_entry_name.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrlemai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 21:44:23 by cyrlemai          #+#    #+#             */
/*   Updated: 2019/06/23 21:44:25 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

void	fill_entry_name(char *entry_name, char *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		entry_name[j] = s[i];
		if (s[i] == ' ')
			while (s[i] == ' ')
				i++;
		else
			i++;
		j++;
	}
}

char	*create_entry_name(char *s)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		len++;
		if (s[i] == ' ')
			while (s[i] == ' ')
				i++;
		else
			i++;
	}
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	fill_entry_name(res, s);
	return (res);
}
