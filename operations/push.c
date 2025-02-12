/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 01:22:01 by rafael            #+#    #+#             */
/*   Updated: 2025/02/11 01:22:01 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (!src || !*src)
		return (1);
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
	return (0);
}

int	push_a(t_stack **stack_a, t_stack **stack_b)
{
	int	result;

	result = push(stack_b, stack_a);
	if (!result)
		ft_printf("pa\n");
	return (result);
}

int	push_b(t_stack **stack_a, t_stack **stack_b)
{
	int	result;

	result = push(stack_a, stack_b);
	if (!result)
		ft_printf("pb\n");
	return (result);
}
