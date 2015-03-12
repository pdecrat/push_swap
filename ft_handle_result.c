/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_result.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 16:02:01 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 16:08:24 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_handle_result(char **res, char *to_write)
{
	if (!*res)
		*res = ft_strdup(to_write);
	else
	{
		*res = ft_strjoin(*res, " ");
		*res = ft_strjoin(*res, to_write);
	}
}
