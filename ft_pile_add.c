/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pile_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 14:22:00 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 16:24:50 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_pile_add(t_pile *head, t_pile *new)
{
	t_pile	*cursor;

	cursor = head;
	while (cursor->prev)
		cursor = cursor->prev;
	cursor->prev = new;
}
