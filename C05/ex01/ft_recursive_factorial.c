/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 23:31:18 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/25 03:05:42 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
