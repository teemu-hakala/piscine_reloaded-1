/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:01:38 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 14:51:20 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		first;
	int		middle;
	int		last;
	int		div;
	int		mod;

	first = 1;
	last = nb;
	while (first <= last)
	{
		middle = (first + last) / 2;
		if (middle == 0)
			return (0);
		div = nb / middle;
		mod = nb % middle;
		if (mod == 0 && div == middle)
			return (middle);
		else if (div < middle)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return (0);
}
