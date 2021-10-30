/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:46:31 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 11:16:07 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"

void	ft_putstr_channel(char *str, int ch)
{
	int		len;

	len = ft_strlen(str);
	write(ch, str, len);
}

int	ft_display_file(int fd)
{
	int		b;
	char	buf[BUF_SIZE + 1];

	while (1)
	{
		b = read(fd, buf, BUF_SIZE);
		if (b == -1 || b == 0)
			return (b);
		buf[b] = '\0';
		ft_putstr_channel(buf, 1);
	}
}
