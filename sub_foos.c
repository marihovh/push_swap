/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_foos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:06:56 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/11 10:17:17 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_node **a)
{
  t_node *tmp;

  if (!(*a) || !(*a)->next)
    return ;
  tmp = (*a)->next;
  (*a)->next= tmp->next;
  tmp->next = (*a);
  (*a) = tmp;
}

void sb(t_node **b)
{
  t_node *tmp;

  if (!(*b) || !(*b)->next)
    return ;
  tmp = (*b)->next;
  (*b)->next= tmp->next;
  tmp->next = (*b);
  (*b) = tmp;
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
  (*b) = (*b)->next;
  tmp->next = (*a);
  (*a) = tmp;
}

void pb(t_node **a, t_node **b)
{
  t_node *tmp;

  if (!(*a))
    return ;
  tmp = *a;
  (*a) = (*a)->next;
  tmp->next = (*b);
  (*b) = tmp;
}

void ra(t_node **a)
{
  t_node *first;
  t_node *last;

  if (!(*a))
    return ;
  first = *a;
  last = *a;
  while (last->next != NULL)
    last = last->next;
  *a = first->next;
  first->next = NULL;
  last->next = first;
}

void rb(t_node **b)
{
  t_node *first;
  t_node *last;

  if (!(*b))
    return ;
  first = *b;
  last = *b;
  while (last->next != NULL)
    last = last->next;
  *b = first->next;
  first->next = NULL;
  last->next = first;
}

void rr(t_node **a, t_node **b)
{
  ra(a);
  rb(b);
}

void rra(t_node **a)
{
  t_node *tmp;
  t_node *last;

  tmp = (*a);
  while(tmp->next->next != NULL)
    tmp = tmp->next;
  last = tmp->next;
  tmp->next = NULL;
  last->next = (*a);
  (*a) = last;
}

void rrb(t_node **b)
{
  t_node *tmp;
  t_node *last;

  tmp = (*b);
  while(tmp->next->next != NULL)
    tmp = tmp->next;
  last = tmp->next;
  tmp->next = NULL;
  last->next = (*b);
  (*b) = last;
}

void rrr(t_node **a, t_node **b)
{
  rra(a);
  rrb(b);
}