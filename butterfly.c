/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:21:57 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/05 04:11:46 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_new(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	return (new_node);
}

void    init_stack_a(t_node **stack_a, t_all *data)
{
    int i;
    
    i = -1;

    while (++i < data->count)
    {
        (*stack_a) = ft_new(data->unsorted[i]);
        printf("%i\n", (*stack_a)->content);
        stack_a = &(*stack_a)->next;
    }
    
}
