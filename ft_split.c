/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 14:26:08 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 15:50:26 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_split(t_pile **a, t_pile **b, int size)
{
	int		i;
	int		med;
	t_pile	*tmp;

	i = 0;
	med = ft_get_median(*a, size);
	while (ft_is_split(*a, med))
	{
		tmp = ft_get_last(*a);
		if (AVAL <= med)
		{
			if ((*a)->prev && APVAL < AVAL && APVAL <= med && tmp->value <= med
					&& tmp->value > APVAL)
				ft_sa(a);
			if ((*a)->prev && APVAL < AVAL && APVAL <= med && tmp->value <= med
					&& tmp->value < APVAL && tmp->value < AVAL)
				ft_ra(a);
			ft_pb(a, b);
		}
		else
			ft_ra(a);
		++i;
	}
}
