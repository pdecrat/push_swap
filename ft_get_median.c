/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 17:36:19 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 18:47:54 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_get_min_max(t_median *e, t_pile *pile)
{
	t_pile		*cursor;

	e->min = 0;
	e->max = 0;
	cursor = pile;
	while (cursor)
	{
		if (cursor->value < e->min)
			e->min = cursor->value;
		if (cursor->value > e->max)
			e->max = cursor->value;
		cursor = cursor->prev;
	}
}

static void		ft_init_median(t_pile **cursor, t_median *e, t_pile *pile)
{
	*cursor = pile;
	e->guess = (e->min + e->max) / 2;
	e->less = 0;
	e->greater = 0;
	e->equal = 0;
	e->maxltguess = e->min;
	e->mingtguess = e->max;
}

static void		ft_do_stuff(int value, t_median *e)
{
	if (value < e->guess)
	{
		++e->less;
		if (value > e->maxltguess)
			e->maxltguess = value;
	}
	else if (value > e->guess)
	{
		++e->greater;
		if (value < e->mingtguess)
			e->mingtguess = value;
	}
	else
		++e->equal;
}

int				ft_get_median(t_pile *pile, int size)
{
	t_median	e;
	t_pile		*cursor;

	ft_get_min_max(&e, pile);
	while (1)
	{
		ft_init_median(&cursor, &e, pile);
		while (cursor)
		{
			ft_do_stuff(cursor->value, &e);
			cursor = cursor->prev;
		}
		if (e.less <= (size + 1) / 2 && e.greater <= (size + 1) / 2)
			break ;
		else if (e.less > e.greater)
			e.max = e.maxltguess;
		else
			e.min = e.mingtguess;
	}
	if (e.less >= (size + 1) / 2)
		return (e.maxltguess);
	else if (e.less + e.equal >= (size + 1) / 2)
		return (e.guess);
	else
		return (e.mingtguess);
}
