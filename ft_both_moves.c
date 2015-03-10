/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 16:40:17 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:42:14 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrr(t_pile **a, t_pile **b)
{
	ft_putstr("rrr ");
	ft_rev_rotate(a);
	ft_rev_rotate(b);
}

void		ft_rr(t_pile **a, t_pile **b)
{
	ft_putstr("rr ");
	ft_rotate(a);
	ft_rotate(b);
}

void		ft_ss(t_pile **a, t_pile **b)
{
	ft_putstr("ss ");
	ft_swap(a);
	ft_swap(b);
}
