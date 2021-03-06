/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_solved.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 17:00:44 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:33:28 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_is_solved_b(t_pile *b)
{
	t_pile	*cursor;

	cursor = b;
	while (cursor && cursor->prev && cursor->value > cursor->prev->value)
		cursor = cursor->prev;
	if (!cursor->prev)
		return (1);
	return (0);
}
