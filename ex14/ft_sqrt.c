/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:12:38 by tmann             #+#    #+#             */
/*   Updated: 2018/11/23 20:07:41 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (nb >= i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
