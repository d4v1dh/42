/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:04:59 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/21 11:05:11 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putchar_three(char o, char d, char e)
{
	write(1, &o, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void		ft_spaces_commas(int i)
{
	if (i != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb(void)
{
	int i;
	int n;
	int h;

	i = '0';
	n = '1';
	h = '2';
	while (i <= '7')
	{
		n = i + 1;
		while (n <= '8')
		{
			h = n + 1;
			while (h <= '9')
			{
				ft_putchar_three(i, n, h);
				ft_spaces_commas(i);
				h++;
			}
			n++;
		}
		i++;
	}
}
