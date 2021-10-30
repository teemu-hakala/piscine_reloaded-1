/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:41:27 by thakala           #+#    #+#             */
/*   Updated: 2021/10/30 12:26:14 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# include <fcntl.h>
# include <unistd.h>
# define FT_FILE_H
# define BUF_SIZE 4096

int		ft_strlen(char *s);
void	ft_putstr_channel(char *str, int ch);
int		ft_filename_missing_error(void);
int		ft_too_many_arguments_error(void);
int		ft_file_open_error(void);
int		ft_file_read_error(void);
int		ft_open_file(char *filename);
int		ft_display_file(int fd);

#endif
