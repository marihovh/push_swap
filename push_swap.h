/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:28:52 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/05 01:14:33 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib/libft.h"
#include <limits.h>

typedef struct s_all    t_all;
typedef struct s_node   t_node;

struct s_node
{
    int     content;
    struct  s_node *next;
};

struct s_all
{
    int *unsorted;
    int *sorted;
    int count;
};

void        ra(t_node **a);
void        sa(t_node **a);
void        sb(t_node **b);
void        add_idx(t_all *data);
void        swap(int* a, int* b);
int         dublicate(t_all *data);
int         ft_sorted(t_all *data);
void        cpy_array(t_all *data);
void        ss(t_node **a, t_node **b);
void        pa(t_node **a, t_node **b);
void        pb(t_node **a, t_node **b);
long long 	ft_long_atoi(const char *str);
void        printArray(int *arr, int count);
int         parse(t_all *data, char **argv);
int         create_array(t_all *data, char *str);
void        quicksort(int *arr, int min, int max);
int         quick_help(int *arr, int min, int max);
void        array_cpy(int *dst, int *src, int size);
int         quick_help(int arr[], int min, int max);
void        add_index(int *idx, int *sorted, int size);
void        init_stack_a(t_node **stack_a, t_all *data);

#endif