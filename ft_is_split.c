/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 14:37:56 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 14:43:56 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_split(t_pile *a, int med)
{
	int		is_split;
	t_pile	*cursor;

	is_split = 0;
	cursor = a;
	while (cursor)
	{
		if (cursor->value <= med)
			++is_split;
		cursor = cursor->prev;
	}
	return (is_split);
}
