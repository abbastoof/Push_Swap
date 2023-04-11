/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:32:10 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:32:10 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_pos(char **argv, int limit, int last, t_node **stack)
{
	int	state;
	int	content;
	int	position;
	int	j;

	state = last;
	while (last >= limit)
	{
		content = ft_atoi(argv[last]);
		position = 0;
		j = state;
		while (j >= limit)
		{
			if (content <= ft_atoi(argv[j]))
				j--;
			else
			{
				position++;
				j--;
			}
		}
		push(position, stack);
		last--;
	}
}

void	ft_init(int argc, char **argv, t_node **stack)
{
	int	i;

	if (argc > 2)
	{
		i = argc - 1;
		ft_find_pos(argv, 1, i, stack);
	}
	else
	{
		i = 0;
		while (argv[i] != NULL)
			i++;
		i--;
		ft_find_pos(argv, 0, i, stack);
	}
}
