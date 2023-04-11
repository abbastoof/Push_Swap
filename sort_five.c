/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:09 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:31:10 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		smallest_index;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	smallest_index = search_for_smallest_index(stack_a);
	if (smallest_index == 1 || smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 3)
	{
		rra(&tmp_a);
		rra(&tmp_a);
	}
	if (smallest_index == 4)
		rra(&tmp_a);
	pb(&tmp_a, &tmp_b);
	sort_four(&tmp_a, &tmp_b);
	pa(&tmp_a, &tmp_b);
	*stack_a = tmp_a;
}
