/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 16:18:38 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:45:16 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_order_b(t_pile **b)
{
	while (!ft_is_solved_b(*b))
	{
		if (ft_is_lowest(*b))
			ft_rb(b);
		else if (BVAL < BPVAL)
			ft_sb(b);
		else
			ft_rb(b);
	}
}

static void		ft_order_a(t_pile **a)
{
	while (!ft_is_solved_a(*a))
	{
		if (ft_is_lowest(*a))
			ft_ra(a);
		if (AVAL > APVAL)
			ft_sa(a);
		else
			ft_ra(a);
	}
}

static void		ft_order_both(t_pile **a, t_pile **b)
{
	while (!ft_is_solved_a(*a) && !ft_is_solved_b(*b))
	{
		if (ft_is_lowest(*b) && ft_is_highest(*a))
			ft_rr(a, b);
		if (ft_is_lowest(*b))
			ft_rb(b);
		if (ft_is_highest(*a))
			ft_rb(a);
		else if (AVAL > APVAL && BVAL < BPVAL)
		{
			ft_ss(a, b);
			ft_rr(a, b);
		}
		else if (AVAL > APVAL && BVAL > BPVAL)
		{
			ft_rb(b);
			ft_sa(a);
		}
		else if (AVAL < APVAL && BVAL < BPVAL)
		{
			ft_ra(a);
			ft_sb(b);
		}
		else if (AVAL < APVAL && BVAL > BPVAL)
			ft_rr(a, b);
	}
}

void			ft_order(t_pile **a, t_pile **b)
{
	if (!ft_is_solved_a(*a) && !ft_is_solved_b(*b))
		ft_order_both(a, b);
	if (!ft_is_solved_a(*a))
		ft_order_a(a);
	if (!ft_is_solved_b(*b))
		ft_order_b(b);
}
