/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:33:34 by bgoron            #+#    #+#             */
/*   Updated: 2024/01/06 19:02:30 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*tab;
	int		i;

	tab = NULL;
	if (argc == 2)
		tab = ft_one_arg(argv);
	else if (argc > 2)
		tab = ft_many_arg(argc, argv);
	if (!tab)
		return (0);
	i = 0;
	a = ft_lstnew(tab[i]);
	b = NULL;
	while (tab[++i])
		ft_lstadd_back(a, tab[i]);
	ft_set_nbr_to_index(a);
	ft_a_to_b(&a, &b);
	ft_b_to_a(&a, &b);
	ft_lstfree(a);
	free(tab);
	return (0);
}
