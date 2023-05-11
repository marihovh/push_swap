/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:28:34 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/11 10:22:44 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int args, char *argv[])
{
    t_all   *data;
    t_node *stack_a;
    t_node *stack_b;

    data = malloc(sizeof(t_all));
    stack_a = malloc(sizeof(t_node));
    stack_b = malloc(sizeof(t_node));
    data->count = args;
    if (!data)
        return (0);
    if (args > 1)
    {
        parse(data, argv);
        init_stack_a(&stack_a, data);
        stack_b = NULL;
        numeric(data, &stack_a, &stack_b);
        printf("before\n\n");
        printList(stack_a, stack_b);
        printf("\n\nafter\n\n");
        but_b(data, &stack_a, &stack_b);
        to_a(data, &stack_a, &stack_b);
        printList(stack_a, stack_b);
        printf("\n\n\nbooo data->step %i\n\n\n\n", data->step);
    }
    return (0);
}

