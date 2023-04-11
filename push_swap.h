/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:31:19 by atoof             #+#    #+#             */
/*   Updated: 2023/04/11 17:31:19 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <sys/types.h>

typedef unsigned char	t_bool;
# define FALSE 0
# define TRUE 1
# define ERROR -1

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}				t_node;

void		sa(t_node **stack_a);
void		ra(t_node **stack_a);
void		rra(t_node **stack_a);
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);
t_node		*create_node(int data);
void		ft_init(int ac, char **argv, t_node **stack);
void		push(int data, t_node **stack);
int			pop(t_node **stack);
int			ft_lstsize(t_node *stack);
long		ft_atol(const char *str);
int			is_sorted(t_node **stack_a);
int			get_max_value(t_node *stack);
void		ft_free_str_array(char **str_array);
int			search_for_smallest_index(t_node **stack_a);
int			ft_check(int argc, char **argv, t_node **stack);
void		sort_stack(t_node **stack_a, t_node **stack_b, size_t size);
void		sort_three(t_node **stack_a);
void		sort_four(t_node **stack_a, t_node **stack_b);
void		sort_five(t_node **stack_a, t_node **stack_b);
void		sort_big_stack(t_node **stack_a, t_node **stack_b);

#endif
