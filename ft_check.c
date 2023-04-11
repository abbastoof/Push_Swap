/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:32:43 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:32:43 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_dup(char **args, int index)
{
	int		i;
	int		j;
	long	number;

	i = index;
	while (args[i])
	{
		number = ft_atol(args[i]);
		if (number > 2147483647 || number < -2147483648)
			return (-1);
		j = i + 1;
		while (args[j])
		{
			if (ft_atol(args[j]) == number)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_check_digit(char **args, int index)
{
	int	j;
	int	i;

	i = index;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
		{
			j++;
			if (args[i][j] == '\0')
				return (-1);
		}
		while (args[i][j])
		{
			if (ft_isdigit(args[i][j]) == 1)
				j++;
			else
				return (-1);
		}
		i++;
	}
	return (ft_check_dup(args, index));
}

int	ft_check_args_chr(int ac, char **argv, t_node **stack)
{
	if (ft_check_digit(argv, 1) == 1 && ft_check_dup(argv, 1) == 1)
		ft_init(ac, argv, stack);
	else
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	return (1);
}

int	ft_check(int argc, char **argv, t_node **stack)
{
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!*args)
			exit(0);
		if (ft_check_digit(args, 0) == 1 && ft_check_dup(args, 0) == 1)
		{
			ft_init(argc, args, stack);
			ft_free_str_array(args);
		}
		else
		{
			ft_free_str_array(args);
			write(2, "Error\n", 6);
			return (-1);
		}
	}
	else
		return (ft_check_args_chr(argc, argv, stack));
	return (1);
}
