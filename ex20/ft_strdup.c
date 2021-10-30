/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:57:59 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 04:27:12 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int		l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc(sizeof(*copy) * len);
	if (!copy)
	{
		errno = ENOMEM;
		return (0);
	}
	while (--len >= 0)
		*(copy + len) = *(src + len);
	return (copy);
}
