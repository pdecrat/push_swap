/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 16:40:17 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 16:14:04 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrr(t_pile **a, t_pile **b, char **res)
{
	ft_handle_result(res, "rrr");
	ft_rev_rotate(a);
	ft_rev_rotate(b);
}

void		ft_rr(t_pile **a, t_pile **b, char **res)
{
	ft_handle_result(res, "rr");
	ft_rotate(a);
	ft_rotate(b);
}

void		ft_ss(t_pile **a, t_pile **b, char **res)
{
	ft_handle_result(res, "ss");
	ft_swap(a);
	ft_swap(b);
}
