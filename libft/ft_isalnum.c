/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboujna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:18:53 by kaboujna          #+#    #+#             */
/*   Updated: 2018/11/09 12:56:42 by kaboujna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A')
				&& (c <= 'Z')) || ((c >= '0') && (c <= '9')))
		return (1);
	return (0);
}
