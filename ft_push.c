/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 14:53:21 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 15:27:36 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push(t_pile **dst, t_pile **src)
{
	t_pile		*tmp;

	if (*src && (*src)->prev)
	{
		tmp = *src;
		*src = (*src)->prev;
		tmp->prev = *dst;
		*dst = tmp;
	}
}
