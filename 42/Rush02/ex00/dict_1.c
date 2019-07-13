/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 16:55:03 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/23 22:04:36 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush02.h"

int					create_entry(char *str, t_dict_entry *arrx)
{
	int				len;
	int				i;

	len = 0;
	while (str[len] != ' ' && str[len] != ':')
		len++;
	if (!(arrx->digits = (char*)malloc((len + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (++i < len)
		arrx->digits[i] = str[i];
	arrx->digits[i] = '\0';
	while (str[len] == ' ' || str[len] == ':')
		len++;
	i = len;
	arrx->name = create_entry_name(&str[len]);
	if (arrx->name == NULL)
		return (0);
	return (1);
}

t_dict_entry		*ft_create_dict(t_dict_entry **dict, char *path)
{
	char			buffer[BUFFER_SIZE];
	int				read_bytes;
	int				res;
	int				i;
	int				fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return ((*dict = NULL));
	res = 0;
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		i = -1;
		while (++i < BUFFER_SIZE)
			if (buffer[i] == '\n')
				res++;
		read_bytes = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	if (!(*dict = (t_dict_entry *)malloc(sizeof(**dict) * (res + 1))))
		return (NULL);
	(*dict)[res].digits = NULL;
	(*dict)[res].name = NULL;
	return (*dict);
}

char				*get_dict(char *digits, t_dict_entry *dict)
{
	int				i;

	i = 0;
	while (dict[i].digits != NULL)
	{
		if (ft_strcmp(digits, dict[i].digits) == 0)
			return (dict[i].name);
		i++;
	}
	return (NULL);
}

t_dict_entry		*new_dict(char *path)
{
	int				i;
	t_dict_entry	*dict;

	i = 0;
	dict = NULL;
	ft_create_dict(&dict, path);
	if (dict == NULL)
		return (NULL);
	dict = ft_fill_dict(path, dict);
	return (dict);
}

void				del_dict(t_dict_entry *dict)
{
	int				i;

	i = 0;
	while (dict[i].digits != NULL)
	{
		free(dict[i].digits);
		free(dict[i].name);
		i++;
	}
	free(dict);
}
