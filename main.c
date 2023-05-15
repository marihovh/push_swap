/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:28:34 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/15 04:31:52 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int args, char *argv[])
{
    t_all   *data;
    t_node *stack_a;
    t_node *stack_b;

    data = malloc(sizeof(t_all));
    stack_a = NULL;
    stack_b = NULL;
    data->count = args;
    if (!data)
        return (0);
    if (args > 1)
    {
		// (void)argv;
        parse(data, argv);
        init_stack_a(&stack_a, data);
        stack_b = NULL;
        if (args >= 3 && args <= 6)
		{
            numeric(data, &stack_a, &stack_b);
		}
        else
        {
            but_b(data, &stack_a, &stack_b);
            to_a(data, &stack_a, &stack_b);
        }
		// free(data);
		// free(stack_a);
		// free(stack_b);
		// printf("%i\n", data->step);
        	// system("leaks push_swap");
			// pause();
    }
    return (0);
}

