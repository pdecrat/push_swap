/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 16:39:07 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:50:24 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rra(t_pile **a)
{
	ft_putstr("rra ");
	ft_rev_rotate(a);
}

void		ft_ra(t_pile **a)
{
	ft_putstr("ra ");
	ft_rotate(a);
}

void		ft_sa(t_pile **a)
{
	ft_putstr("sa ");
	ft_swap(a);
}

void		ft_pa(t_pile **a, t_pile **b)
{
	ft_putstr("pa ");
	ft_push(a, b);
}
