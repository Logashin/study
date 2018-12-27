/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:32:47 by tmann             #+#    #+#             */
/*   Updated: 2018/11/23 20:51:16 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int res;
	int *mall;
	int i;

	i = 0;
	res = max - min;
	mall = NULL;
	if (min < max)
	{
		mall = malloc(sizeof(int) * res);
		while (i < res)
		{
			mall[i] = min;
			min++;
			i++;
		}
	}
	return (mall);
}
