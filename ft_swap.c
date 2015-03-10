/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pile_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 14:46:33 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 16:54:18 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_swap(t_pile **pile)
{
	t_pile	*cursor;

	if (*pile && (*pile)->prev)
	{
		cursor = (*pile)->prev;
		(*pile)->prev = cursor->prev;
		cursor->prev = *pile;
		*pile = cursor;
	}
}
