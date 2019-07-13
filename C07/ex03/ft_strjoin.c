/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 05:59:52 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/27 22:09:01 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			ft_strctn(char *str1, char *str2, int at)
{
	int		len;
	int		i;

	len = ft_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (++i < size)
			len += seplen;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (j < size)
	{
		i = ft_strctn(str, strs[j++], i);
		if (j != size)
			i = ft_strctn(str, sep, i);
	}
	return (str);
}
