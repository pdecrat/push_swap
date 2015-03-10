/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 15:05:51 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 18:49:17 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rotate(t_pile **pile)
{
	t_pile	*tmp;
	t_pile	*cursor;

	if (*pile && (*pile)->prev)
	{
		tmp = *pile;
		*pile = (*pile)->prev;
		cursor = *pile;
		while (cursor->prev)
			 cursor = cursor->prev;
		cursor->prev = tmp;
		tmp->prev = NULL;
	}
}
