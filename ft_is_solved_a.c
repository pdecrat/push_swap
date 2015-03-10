/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_solved.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 17:00:44 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:21:28 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_is_solved_a(t_pile *a)
{
	t_pile	*cursor;

	cursor = a;
	while (cursor && cursor->prev && cursor->value < cursor->prev->value)
		cursor = cursor->prev;
	if (!cursor->prev)
		return (1);
	return (0);
}
