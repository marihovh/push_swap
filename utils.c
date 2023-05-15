/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:28:41 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/15 04:33:21 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long 	ft_long_atoi(const char *str)
{
	int	i;
	int	minus;
	long long	num;

	i = 0;
	minus = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		num = (num * 10) + (str[i++] - 48);
	return (num * minus);
}

void printList(t_node *stack_a, t_node *stack_b)
{
	while (stack_a != NULL || stack_b != NULL)
	{
		if (!stack_a && stack_b)
		{
			printf("       %i\n", stack_b->content);
			stack_b = stack_b->next;
		}
		else if(stack_a && !stack_b)
		{
			printf("%i       \n", stack_a->content);
			stack_a = stack_a->next;
		}
		else
		{
			printf("%i       %i\n", stack_a->content, stack_b->content);
			stack_a = stack_a->next;
			stack_b = stack_b->next;
		}
	}
	printf("_       _\na       b\n");
}

void error_msg(char *str)
{
	if (str)
		ft_putstr_fd(str, 2);
	exit (1);
}