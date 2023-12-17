/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:35:46 by bgoron            #+#    #+#             */
/*   Updated: 2023/12/17 19:51:52 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_stack
{
	int				nbr;
	struct s_stack	*next;
}				t_stack;

t_stack	*ft_lstnew(int nbr);
void	ft_lstadd_back(t_stack *list, int nbr);
void	ft_lstadd_front(t_stack *list, int nbr);
void	ft_lstprint(t_stack *list);
void	ft_lstfree(t_stack *list);

void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);

void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);

void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);

void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);

void	ft_sort(t_stack **a, t_stack **b);

#endif