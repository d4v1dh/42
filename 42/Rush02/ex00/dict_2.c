/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 16:55:03 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/23 22:08:12 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush02.h"

t_dict_entry		*ft_fill_dict(char *path, t_dict_entry *dict)
{
	char			buffer[BUFFER_SIZE];
	char			readbuffer[BUFFER_SIZE];
	int				inc[3];
	int				line_no;
	int				fd;

	line_no = -1;
	inc[1] = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	inc[2] = read(fd, buffer, BUFFER_SIZE);
	while (inc[1] < inc[2])
	{
		inc[0] = 0;
		while (buffer[inc[1]] != '\n')
			readbuffer[inc[0]++] = buffer[inc[1]++];
		line_no++;
		readbuffer[inc[0]] = buffer[inc[1]++];
		create_entry(readbuffer, dict + line_no);
	}
	close(fd);
	return (dict);
}
