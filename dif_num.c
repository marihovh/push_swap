/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dif_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:01:04 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/11 10:26:05 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void two(t_node **a)
{
    sa(a);
}
int sorted(t_node **a)
{
    
    while ((*a) != NULL)
        if (data-> > data->unsorted[i + 1])
            return (0);
    return (1);
}

void tree(t_node **a)
{
    rra(a);
    if (sorted(*a))
    {
        ft_printf("rra\n");
        exit (0);
    }
    rra(a);
    if (sorted(*a))
    {
        ft_printf("ra\n");
        exit (0);
    }
    sa(a);
    if (sorted(*a))
    {
        ft_printf("sa\n");
        exit (0);
    }
    tree(a);
}

void numeric(t_all *data, t_node **a, t_node **b)
{
    (void)data;
    (void)b;
    two(a);
    tree(a);
    // four();
    // five();
}