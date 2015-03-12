/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 15:59:37 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 16:18:19 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_easy_solve(t_pile **a, char **res)
{
	int	is_solved;

	is_solved = 0;
	ft_rotate(a);
	((is_solved = ft_is_solved_a(*a))) ? ft_handle_result(res, "ra")
		: ft_rev_rotate(a);
	if (!is_solved)
	{
		ft_rev_rotate(a);
		((is_solved = ft_is_solved_a(*a))) ? ft_handle_result(res, "rra")
			: ft_rotate(a);
	}
	if (!is_solved)
	{
		ft_swap(a);
		((is_solved = ft_is_solved_a(*a))) ? ft_handle_result(res, "sa")
			: ft_swap(a);
	}
	return (is_solved);
}

void		ft_solve(t_pile **a, t_pile **b, int size, char **res)
{
	if (!ft_is_solved_a(*a) && !ft_easy_solve(a, res))
	{
		
	}
}
