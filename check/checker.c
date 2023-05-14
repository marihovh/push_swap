/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:01:55 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/14 10:08:07 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void	implement(char *str, t_node **a, t_node **b)
{
	if (ft_strncmp("sa\n", str, 3) == 0)
		sa(a);
	else if (ft_strncmp("sb\n", str, 3) == 0)
		sb(b);
	else if (ft_strncmp("ss\n", str, 3) == 0)
		ss(a, b);
	else if (ft_strncmp("pa\n", str, 3) == 0)
		pa(a, b);
	else if (ft_strncmp("pb\n", str, 3) == 0)
		pb(a, b);
	else if (ft_strncmp("ra\n", str, 3) == 0)
		ra(a);
	else if (ft_strncmp("rb\n", str, 3) == 0)
		rb(b);
	else if (ft_strncmp("rr\n", str, 3) == 0)
		rr(a, b);
	else if (ft_strncmp("rra\n", str, 4) == 0)
		rra(a);
	else if (ft_strncmp("rrb\n", str, 4) == 0)
		rrb(a);
	else if (ft_strncmp("rrr\n", str, 4) == 0)
		rrr(a, b);
	else
		error_msg("Error!\n");
}


int main (int args, char *argv[])
{
	t_all   *data;
    t_node *stack_a;
    t_node *stack_b;
	char *str;

    data = malloc(sizeof(t_all));
    stack_a = malloc(sizeof(t_node));
    stack_b = malloc(sizeof(t_node));
	stack_b = NULL;
	if (args > 1)
	{
    	data->count = args;
    	if (!data)
        	return (0);
		parse(data, argv);
		init_stack_a(&stack_a, data);
		if (!stack_a)
			return (0);	
		str = get_next_line(0);
		while (str != NULL)
		{
			implement(str, &stack_a, &stack_b);
			str = get_next_line(0);
		}
		if (sorted(stack_a) == 1)
			printf("OK\n");
		else 
			printf("KO\n");
	}
	return (0);
}

