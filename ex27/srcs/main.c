/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:43:10 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 12:25:33 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
		return (ft_filename_missing_error());
	else if (argc > 2)
		return (ft_too_many_arguments_error());
	fd = ft_open_file(argv[1]);
	if (fd == -1)
		return (1);
	if (ft_display_file(fd) == -1)
		return (ft_file_read_error());
}
