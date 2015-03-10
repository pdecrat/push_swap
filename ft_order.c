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

}

static void		ft_order_a(t_pile **a)
{

}

static void		ft_order_both(t_pile **a, t_pile **b)
{

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
