/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 01:26:25 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 01:26:25 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_args_stacks(int ac, char **args, t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		free(args[i]);
		i++;
	}
	free(args);
	print_error(a, b);
	return (0);
}

int	free_args(int ac, char **args)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (0);
}

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next_node;

	current = *stack;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*stack = NULL;
}

void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}
