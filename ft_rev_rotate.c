/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 15:33:34 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 15:53:59 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rev_rotate(t_pile **pile)
{
	t_pile		*tmp;
	t_pile		*cursor;

	if (*pile && (*pile)->prev)
	{
		cursor = *pile;
		while (cursor->prev && cursor->prev->prev)
			cursor = cursor->prev;
		tmp = cursor->prev;
		cursor->prev = NULL;
		tmp->prev = *pile;
		*pile = tmp;
	}
}
