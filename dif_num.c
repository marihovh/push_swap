/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dif_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:01:04 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/14 09:58:26 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void two(t_node **a)
{
    sa(a);
}

int sorted(t_node *a)
{
    while (a->next != NULL)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next;
    }
    return (1);
}

void tree(t_node **a)
{
	if ((*a)->content == 0)
	{
		rra(a);
		sa(a);
		return ;
	}
	if ((*a)->content == 1)
	{
		if ((*a)->next->content == 0)
			sa(a);
		else
			rra(a);
		return ;
	}
	if ((*a)->content == 2)
	{
		if ((*a)->next->content == 0)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
		return ;
	}
}

void four(t_node **a, t_node **b)
{
    init_id(a);
    int min = find_min(a);
    while ((*a)->id != min)
    {
        rra(a);
    }
    pb(a, b);
    tree(a);
    pa(a, b);
}

void five(t_node **a, t_node **b)
{
    int i = 0;
    init_id(a);
    int min = find_min(a);
    if (min <= 3)
    {
        while (min-- > 0)
            ra(a);
    }
    else
    {
        i = 5 - min;
        while (i-- > 0)
            rra(a);
    }
    pb(a, b);
    four(a, b);
    pa(a, b);
}

int find_min(t_node **a)
{
    t_node *min;
    t_node *tmp;

    tmp = *a;
    min = (*a);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        if (tmp->content <= min->content)
           min = tmp;
    }
    return (min->id);
}

void roto(char *str)
{
    ft_printf(str);
    return ;
}

void numeric(t_all *data, t_node **a, t_node **b)
{
    if (data->count == 2)
        two(a);
    else if (data->count == 3)
        tree(a);
    else if (data->count == 4)
        four(a, b);
    else 
        five(a, b);
}