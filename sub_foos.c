/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_foos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:06:56 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/14 10:10:35 by marihovh         ###   ########.fr       */
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
  ft_printf("sa\n");
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
  ft_printf("sb\n");
}

void ss(t_node **a, t_node **b)
{
  sa(a);
  sb(b);
  ft_printf("ss\n");
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
  ft_printf("pa\n");
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
  ft_printf("pb\n");
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
  ft_printf("ra\n");
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
  ft_printf("rb\n");
}

void rr(t_node **a, t_node **b)
{
  ra(a);
  rb(b);
  ft_printf("rr\n");
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
  ft_printf("rra\n");
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
  ft_printf("rrb\n");
}

void rrr(t_node **a, t_node **b)
{
  rra(a);
  rrb(b);
  ft_printf("rrr\n");
}