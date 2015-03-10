/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 16:14:07 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/10 16:48:04 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_check_int(char *av)
{
	char	*tmp;

	tmp = ft_itoa(ft_atoi(av));
	if (ft_strcmp(tmp, av) != 0)
		ft_perror("Error", 1);
	return (0);
}

static void		ft_check_arg(char **av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i])
	{
		j = (av[i][0] == '-') ? 1 : 0;
		if (ft_check_int(av[i]))
			ft_perror("Error", 1);
		while (av[i][j])
			if (av[i][j] < '0' || av[i][j++] > '9')
				ft_perror("Error", 1);
		j = 1;
		while (av[i + j])
		{
			if (!(ft_strcmp(av[i], av[i + j])))
				ft_perror("Error", 1);
			++j;
		}
		++i;
	}
	return ;
}

int			main(int ac, char **av)
{
	t_pile		*a;
	t_pile		*b;

	b = NULL;
	a = NULL;
	if (ac < 2)
		ft_perror("Error", 1);
	ft_check_arg(&av[1]);
	a = ft_init_pile(&av[1], a);
	ft_solve(&a, &b, ac - 1);
	ft_put_pile(a);
	ft_putchar('\n');
	ft_put_pile(b);
	return (0);
}
