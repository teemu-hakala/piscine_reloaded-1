/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:23:14 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 15:24:48 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"

int	ft_filename_missing_error(void)
{
	ft_putstr_channel("File name missing.\n", 2);
	return (1);
}

int	ft_too_many_arguments_error(void)
{
	ft_putstr_channel("Too many arguments.\n", 2);
	return (1);
}

int	ft_file_open_error(void)
{
	ft_putstr_channel("File open error.\n", 2);
	return (-1);
}

int	ft_file_read_error(void)
{
	ft_putstr_channel("File read error.\n", 2);
	return (1);
}
