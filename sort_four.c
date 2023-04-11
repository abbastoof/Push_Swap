/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:02 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:31:04 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int		min_value;
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	min_value = search_for_smallest_index(stack_a);
	if (min_value == 1)
		ra(&tmp_a);
	else if (min_value == 2)
	{
		rra(&tmp_a);
		rra(&tmp_a);
	}
	else if (min_value == 3)
		rra(&tmp_a);
	pb(&tmp_a, &tmp_b);
	sort_three(&tmp_a);
	pa(&tmp_a, &tmp_b);
	*stack_a = tmp_a;
}
