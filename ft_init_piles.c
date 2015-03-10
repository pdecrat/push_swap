/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_piles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 18:28:38 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/09 17:08:44 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile		*ft_init_pile(char **av, t_pile *a)
{
	int		i;

	i = 0;
	while (av[i])
	{
		if (!a)
			a = ft_pile_new(ft_atoi(av[i]));
		else
			ft_pile_add(a, ft_pile_new(ft_atoi(av[i])));
		++i;
	}
	return (a);
}
