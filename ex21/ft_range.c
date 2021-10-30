/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 04:51:50 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 05:22:33 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
