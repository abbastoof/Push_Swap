/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:28 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:31:28 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1 && argv[1][0] != '\0')
	{
		if (ft_check(argc, argv, &stack_a) == -1)
			return (-1);
		if (is_sorted(&stack_a) == -1)
		{
			size = ft_lstsize(stack_a);
			sort_stack(&stack_a, &stack_b, size);
		}
		if (stack_a != NULL)
		{
			while (stack_a->next != NULL)
				pop(&stack_a);
			free(stack_a);
		}
	}
	return (0);
}
