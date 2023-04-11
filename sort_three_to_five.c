/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:09 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:54:01 by atoof            ###   ########.fr       */
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
