/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 20:08:32 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/25 03:07:17 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}
