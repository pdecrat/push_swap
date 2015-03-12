/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 17:49:25 by pdecrat           #+#    #+#             */
/*   Updated: 2015/03/12 16:18:20 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define AVAL (*a)->value
# define BVAL (*b)->value
# define APVAL (*a)->prev->value
# define BPVAL (*b)->prev->value

typedef struct		s_pile
{
	int				value;
	struct s_pile	*prev;
}					t_pile;

typedef struct		s_median
{
	int				less;
	int				greater;
	int				equal;
	int				min;
	int				max;
	int				guess;
	int				maxltguess;
	int				mingtguess;
}					t_median;

t_pile				*ft_init_pile(char **av, t_pile *a);
t_pile				*ft_pile_new(int value);
void				ft_pile_add(t_pile *head, t_pile *new);
void				ft_swap(t_pile **pile);
void				ft_push(t_pile **dst, t_pile **src);
void				ft_rotate(t_pile **pile);
void				ft_rev_rotate(t_pile **pile);
void				ft_solve(t_pile **a, t_pile **b, int size, char **res);
int					ft_is_solved_a(t_pile *a);
int					ft_is_solved_b(t_pile *b);
int					ft_get_median(t_pile *pile, int size);
void				ft_split(t_pile **a, t_pile **b, int size);
int					ft_is_split(t_pile *a, int med);
t_pile				*ft_get_last(t_pile *pile);
void				ft_order(t_pile **a, t_pile **b);
void				ft_sa(t_pile **a, char **res);
void				ft_pa(t_pile **a, t_pile **b, char **res);
void				ft_ra(t_pile **a, char **res);
void				ft_sb(t_pile **b, char **res);
void				ft_pb(t_pile **a, t_pile **b, char **res);
void				ft_rb(t_pile **b, char **res);
void				ft_rra(t_pile **a, char **res);
void				ft_rrb(t_pile **b, char **res);
void				ft_ss(t_pile **a, t_pile **b, char **res);
void				ft_rr(t_pile **a, t_pile **b, char **res);
void				ft_rrr(t_pile **a, t_pile **b, char **res);
int				ft_is_lowest(t_pile *b);
int				ft_is_highest(t_pile *a);
void			ft_handle_result(char **res, char *to_write);

void				ft_put_pile(t_pile *p);

#endif
