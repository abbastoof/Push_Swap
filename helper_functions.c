/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:32:03 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:32:03 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_str_array(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	str_array = NULL;
	return ;
}

int	is_sorted(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->data < tmp->next->data)
			tmp = tmp->next;
		else
			return (-1);
	}
	return (1);
}

int	search_for_smallest_index(t_node **stack_a)
{
	t_node	*tmp;
	int		smallest;
	int		index;
	int		i;

	smallest = INT_MAX;
	index = 0;
	i = 0;
	tmp = *stack_a;
	while (tmp != NULL)
	{
		if (tmp->data < smallest)
		{
			smallest = tmp->data;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

int	ft_lstsize(t_node *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

int	get_max_value(t_node *stack)
{
	int	max_value;

	max_value = stack->data;
	while (stack != NULL)
	{
		if (stack->data > max_value)
			max_value = stack->data;
		stack = stack->next;
	}
	return (max_value);
}
