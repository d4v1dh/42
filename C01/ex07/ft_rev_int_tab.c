/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:03:58 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/21 11:15:14 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int *ptr;

	i = 0;
	*ptr = *tab;
	while (ptr[i] != '\0' && size >= 0)
	{
		tab[size] = ptr[i];
		size--;
		i++;
	}
}

int			main(void)
{
	int *tab = "1234";
	int size = 5;
	ft_rev_int_tab(tab, size);
}
