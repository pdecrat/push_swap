/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extremities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:55:01 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 15:57:01 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_highest(t_pile *a)
{
	int	tmp;
	t_pile	*cursor;

	tmp = a->value;
	cursor = a;
	while (cursor)
	{
		if (cursor->value > tmp)
			return (0);
		cursor = cursor->prev;
	}
	return (1);
}

int	ft_is_lowest(t_pile *b)
{
	int	tmp;
	t_pile	*cursor;

	tmp = b->value;
	cursor = b;
	while (cursor)
	{
		if (cursor->value < tmp)
			return (0);
		cursor = cursor->prev;
	}
	return (1);
}
