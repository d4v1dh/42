/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:58:00 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/08 15:01:59 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print(char a, char b, char d, char e)
{
	if (a < d || (a == d && b < e))
	{
		ft_putchar(a + 48);
		ft_putchar(b + 48);
		ft_putchar(' ');
		ft_putchar(d + 48);
		ft_putchar(e + 48);
		if (a < 9 || b < 8)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void		ft_loop(char a, char b, char d, char e)
{
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			d = 0;
			while (d <= 9)
			{
				e = 0;
				while (e <= 9)
				{
					ft_print(a, b, d, e);
					e++;
				}
				d++;
			}
			b++;
		}
		a++;
	}
}

void		ft_print_comb2(void)
{
	ft_loop(0, 0, 0, 0);
}
