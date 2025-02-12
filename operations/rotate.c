/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 01:21:50 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 01:21:50 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	rotate(t_stack **stack)
{
	t_stack	*current;
	t_stack	*head;

	current = *stack;
	head = *stack;
	while (current->next)
		current = current->next;
	current->next = head;
	*stack = head->next;
	head->next = NULL;
	current->next = head;
	return (0);
}

int	rotate_a(t_stack **stack_a)
{
	int	result;

	if (!stack_a)
		return (1);
	result = rotate(stack_a);
	if (!result)
		ft_printf("ra\n");
	return (result);
}

int	rotate_b(t_stack **stack_b)
{
	int	result;

	if (!stack_b)
		return (1);
	result = rotate(stack_b);
	if (!result)
		ft_printf("rb\n");
	return (result);
}

int	rotate_rotate(t_stack **stack_a, t_stack **stack_b)
{
	int	result;

	if (!stack_b || !*stack_b)
		return (1);
	result = rotate(stack_a) + rotate(stack_b);
	if (!result)
		ft_printf("rr\n");
	return (result);
}
