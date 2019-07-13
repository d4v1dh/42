/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_fts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrlemai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:18:44 by cyrlemai          #+#    #+#             */
/*   Updated: 2019/06/23 18:38:03 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

void		ft_print_with_particle(char *name, char *particle)
{
	if (particle != NULL)
		ft_putstr(particle);
	ft_putstr(name);
}

int			ft_strindex(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	return (-1);
}
