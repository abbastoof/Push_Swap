/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:48:11 by pooria            #+#    #+#             */
/*   Updated: 2023/04/11 17:30:37 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_node **stack_a, t_node **stack_b)
{
	int	max_num;
	int	i;
	int	stack_size;
	int	max_bit;
	int	j;

	i = -1;
	max_bit = 0;
	stack_size = ft_lstsize(*stack_a);
	max_num = get_max_value(*stack_a);
	while (max_num >> max_bit != 0)
		max_bit++;
	while (++i < max_bit)
	{
		j = -1;
		while (++j < stack_size)
		{
			if ((((*stack_a)->data >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
	}
}
