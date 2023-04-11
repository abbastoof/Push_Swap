/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:30:54 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:30:54 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	t_node	*tmp_a;
	int		first;
	int		second;
	int		third;

	tmp_a = *stack_a;
	while (is_sorted(&tmp_a) != 1)
	{
		first = tmp_a->data;
		second = tmp_a->next->data;
		third = tmp_a->next->next->data;
		if (first > second && first > third)
			ra(&tmp_a);
		else if (first > second && first < third)
			sa(&tmp_a);
		else if (first < second && second > third)
			rra(&tmp_a);
	}
	*stack_a = tmp_a;
}
