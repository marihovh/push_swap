/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:05:02 by marihovh          #+#    #+#             */
/*   Updated: 2023/05/04 05:39:38 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *space(char *str)
{
    char *ret;
    int len;
    int i;

    len = ft_strlen(str);
    i = 0;
    ret = malloc((len + 2) * sizeof(char));
    while (str[i])
    {
        ret[i] = str[i];
        i++;
    }
    ret[i++] = ' ';
    ret[i] = '\0';
    return (ret);
}

void    cpy_array(t_all *data)
{
    int i;

    i = -1;
    data->sorted = malloc(sizeof(int) * data->count);
    while (++i < data->count)
        data->sorted[i] = data->unsorted[i];
}

int parse(t_all *data, char **argv)
{
    int i;
    char *str;

    str = NULL;
    i = 0;
    while (++i < data->count)
    {
        argv[i] = space(argv[i]);
        str = ft_strjoin(str, argv[i]);
    }
    i = -1;
    while (str[++i])
    {
        if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+') && !(str[i] == ' '))
                return (0);
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i - 1] != ' ' && i != 0)
                return (0);
            if (str[i + 1] == '-' || str[i + 1] == '+' || !str[i + 1] || str[i + 1] == ' ')
                return (0);
        }
    }
    if (!create_array(data, str) || !dublicate(data) || ft_sorted(data))
        return (0);
    cpy_array(data);
    quicksort(data->sorted, 0, data->count - 1);
    add_idx(data);
    return (1);
}

int ft_sorted(t_all *data)
{
    int i;

    i = -1;
    while (++i < data->count - 1)
        if (data->unsorted[i] > data->unsorted[i + 1])
            return (0);
    return (1);
}

void    add_idx(t_all *data)
{
    int i;
    int j;

    i = -1;
    while (++i <= data->count)
    {
        j = -1;
        while (++j <= data->count)
            if (data->unsorted[i] == data->sorted[j])
            {
                data->unsorted[i] = j;
                break ;
            }
    }
}
int create_array(t_all *data, char *str)
{
    long     i; 
    char    **splited;
    long int num;

    i = 0;
    data->count = ft_word_cnt(str, ' ');
    data->unsorted = malloc(sizeof(int) * data->count);
    splited = ft_split(str, ' ');
    while(splited[i])
    {
        num = ft_long_atoi(splited[i]);
        if (num >= -2147483648 && num <= 2147483647)
            data->unsorted[i] = (int)num;
        else
            return (0);
        i++;
    }
    free(splited);
    return (1);
}

int dublicate(t_all *data)
{
    int i;
    int j;

    i = 1;
    // printf ("%i",data->count);
    while (i < data->count)
    {
        j = 0;
        while (j < i)
        {
            if (data->unsorted[i] == data->unsorted[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int quick_help(int arr[], int min, int max) {
    int pivot = arr[max];  
    int i = (min - 1);
    int j = min;
    
    while (j <= max - 1) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
        j++;
    }
    swap(&arr[i + 1], &arr[max]);
    return (i + 1);
}

void quicksort(int arr[], int min, int max) {
    if (min < max) {
        int pi = quick_help(arr, min, max);

        quicksort(arr, min, pi - 1);
        quicksort(arr, pi + 1, max);
    }
}