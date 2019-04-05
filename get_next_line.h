/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboujna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 02:51:36 by kaboujna          #+#    #+#             */
/*   Updated: 2018/11/20 20:43:38 by kaboujna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"
# define BUFF_SIZE 32

int					get_next_line(const int fd, char **line);

typedef struct		s_fd
{
	int				fd;
	int				ret;
	char			*s;
	char			*tmp;
	struct s_fd		*next;
	struct s_fd		*prev;
}					t_fd;

#endif
