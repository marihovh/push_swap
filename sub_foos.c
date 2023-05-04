/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_foos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:06:56 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/04 23:23:55 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_node **a)
{
  t_node *tmp;

  if (!(*a) || !(*a)->next)
    return ;
  tmp = *a;
  (*a) = (*a)->next;
  (*a)->next = tmp;
}

void sb(t_node **b)
{
  t_node *tmp;

  if (!(*b) || !(*b)->next)
    return ;
  tmp = *b;
  (*b) = (*b)->next;
  (*b)->next = tmp;
}

void ss(t_node **a, t_node **b)
{
  sa(a);
  sb(b);
}

void pa(t_node **a, t_node **b)
{
  t_node *tmp;

  if (!(*b))
    return ;
  tmp = *b;
	tmp->next = *a;
	*a = tmp;
}

void pb(t_node **a, t_node **b)
{
  t_node *tmp;

  if (!(*a))
    return ;
  tmp = *a;
	tmp->next = *b;
	*b = tmp;
}

void ra(t_node **a)
{
  t_node *tmp;

  tmp = *a;
  if (!(*a))
    return ;
  
}
