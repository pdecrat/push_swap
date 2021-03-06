/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 12:47:17 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/03 12:47:20 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_nbrlen(int nbr)
{
	unsigned int	res;

	res = 0;
	if (!nbr)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		++res;
	}
	return (res);
}
