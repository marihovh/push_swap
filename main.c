/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:28:34 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/04 23:08:37 by marihovh         ###   ########.fr       */
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
    if (!data)
        return (0);
    if (args > 1)
    {
    /*-------------------------pharse + sort-------------------------------*/
        data->count = args;
        if (!parse(data, argv))
        {
            printf("Wrong form of arguments!\n");
            free(data);
            return (0);
        }
        /*-------------------------lists-------------------------------*/
        // printf("ewrt");
        init_stack_a(&stack_a, data);
        // sa(&stack_a);
        stack_b->content = 7;
        stack_b->next = NULL;
        sa(&stack_a);
        // printf("es stacki mej verjinn  em%i\n", (stack_a)->next->content);
        // printf("es stacki topn em%i\n", (stack_a)->content);
        // (stack_a) = (stack_a)->next;
        // printf("es stacki top + 1n em %i\n", (stack_a)->content);

    }
    else
        printf ("error\n"); 
    return (0);
}