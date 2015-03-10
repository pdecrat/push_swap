/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 14:41:12 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 18:50:35 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_put_pile(t_pile *p)
{
	if (p)
	{
		if (p->prev)
			ft_put_pile(p->prev);
		ft_putnbr(p->value);
		ft_putchar(' ');
	}
}
