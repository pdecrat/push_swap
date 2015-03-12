/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 16:39:07 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 16:07:27 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrb(t_pile **b, char **res)
{
	ft_handle_result(res, "rrb");
	ft_rev_rotate(b);
}

void		ft_rb(t_pile **b, char **res)
{
	ft_handle_result(res, "rb");
	ft_rotate(b);
}

void		ft_sb(t_pile **b, char **res)
{
	ft_handle_result(res, "sb");
	ft_swap(b);
}

void		ft_pb(t_pile **a, t_pile **b, char **res)
{
	ft_handle_result(res, "pb");
	ft_push(b, a);
}
