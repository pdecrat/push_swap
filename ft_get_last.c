/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 15:05:11 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 15:06:14 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile		*ft_get_last(t_pile *pile)
{
	t_pile	*cursor;

	cursor = pile;
	while (cursor->prev)
		cursor = cursor->prev;
	return (cursor);
}
