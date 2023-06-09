/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:21:57 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/15 04:19:58 by marihovh         ###   ########.fr       */
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
    new_node -> next = NULL;
	return (new_node);
}

void    init_stack_a(t_node **stack_a, t_all *data)
{
    int i;
    
    i = -1;

    // system("leaks push_swap");
    while (++i < data->count)
    {
        (*stack_a) = ft_new(data->unsorted[i]);
        stack_a = &(*stack_a)->next;
    }
}

int init_n(t_all *data)
{
    int num = 0;

    if (data->count >= 6 && data->count <= 50)
        num = data->count / 4;
    else if (data->count >= 100 && data->count < 500)
        num = data->count / 8;
    else if (data->count >= 500)
        num = data->count / 16;
    return (num);
}

void but_b(t_all *data, t_node **a, t_node **b)
{
    int n;
    int i;
    data->step = 0;

    i = 0;
    n = init_n(data);
    while ((*a) != NULL)
    {
        if ((*a)->content <= i)
        {
            pb(a, b);
            rb(b);
            i++;
        }
        else if((*a)->content <= i + n)
        {
            pb(a, b);
            i++;
        }
        else
            ra(a);
    }
    init_id(b);
}

void init_id(t_node **b)
{
    int i;
    t_node *tmp;

    tmp = (*b);
    i = -1;
    while (tmp)
    {
        tmp->id = ++i;
        tmp = tmp->next;
    }
}

int find_max(t_node **b)
{
    t_node *max;
    t_node *tmp;

    tmp = *b;
    max = *b;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        if (tmp->content >= max->content)
           max = tmp;
    }
    return (max->id);
}


void to_a(t_all *data, t_node **a, t_node **b)
{
    int max_id;
    int i;
    
    int count = data->count;
    while ((*b) != NULL)
    {
        init_id(b);
        max_id = find_max(b);
        if (max_id <= count / 2)
        {
            while (max_id-- > 0)
                rb(b);
        }
        else
        {
            i = count - max_id;
            while (i-- > 0)
                rrb(b);
        }
        pa(a, b);
        count--;
    }
}
