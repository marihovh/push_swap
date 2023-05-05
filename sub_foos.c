/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_foos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:06:56 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/05 05:02:44 by marihovh         ###   ########.fr       */
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
  // t_node *tmp;
  // t_node *first;
  
  // if (!(*a))
  //   return ;
  // tmp = (*a);
  // first = (*a);
  // while ((*a)->next != NULL)
	// {
	// 	(*a) = (*a)->next;
	// }
  // (*a)->next = tmp;
  // tmp->next = NULL;
  // first = tmp;
  // // tmp = (*a);

  t_node *first;
  t_node *last;

  first = *a;
  last = *a;
  while (last->next != NULL)
    last = last->next;
  *a = first->next;
  first->next = NULL;
  last->next = first;
  printf("ra\n");
}

void rra(t_node )