/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pile_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 14:19:49 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 14:36:29 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile		*ft_pile_new(int value)
{
	t_pile		*new;

	if (!(new = (t_pile *)ft_memalloc(sizeof(t_pile *))))
		return (NULL);
//	if (!(*new = (t_pile)ft_memalloc(sizeof(t_pile))))
//		return (NULL);
	new->value = value;
	new->prev = NULL;
	return (new);
}
