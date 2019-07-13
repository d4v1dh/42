/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 15:23:22 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/23 22:05:24 by cyrlemai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

int			ft_checknbr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (i > 0);
}

int			ft_error(int err_code)
{
	if (err_code != 0)
		write(1, "Error\n", 6);
	return (err_code);
}

int			main(int argc, char **argv)
{
	int				success;
	t_dict_entry	*dict;

	if (argc != 2)
		return (ft_error(-1));
	if (argv[1][0] == '+')
		argv[1]++;
	while (argv[1][0] == '0' && argv[1][1] != '\0')
		argv[1]++;
	if (ft_checknbr(argv[1]) == 0)
		return (ft_error(-2));
	dict = new_dict(DICT_PATH);
	if (dict == NULL)
		return (ft_error(-4));
	if (argv[1][0] == '0')
		success = ft_print_zero(dict);
	else
		success = ft_printnbr(argv[1], "", dict);
	del_dict(dict);
	if (success == 0)
		return (ft_error(-5));
	write(1, "\n", 1);
	return (0);
}
