/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:32:10 by lduheron          #+#    #+#             */
/*   Updated: 2023/03/07 16:07:51 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

t_list	*ft_lstprint(t_list *stack_a)
{
	t_list	*tmp;

	tmp = NULL;
	if (!(stack_a))
		return (NULL);
	tmp = stack_a;
	printf("entree ft lst print\n");
	while (tmp->next != NULL)
	{
		write(1, &tmp, 1);
		printf("Entree boucle while\n");
		tmp = tmp->next;
	}
	return (tmp);
}

// t_list	ft_fill_stack_a(int argc, char **argv)
// {
// 	t_list	*stack;
// 	int		i;

// 	i = 1;
// 	printf("search segfault");
// 	stack = malloc (sizeof(t_list));
// 	// if (!stack)
// 	// 	return (NULL);
// 	while (i + 1 < argc)
// 	{
// 		stack->content = &argv[i];
// 		//printf("argv %i %i : %d\n", i, argv[i], stack);
// 		stack->next = NULL;
// 	//	stack = stack->next;
// 		i++;
// 	}
// 	printf("ENTREE FT_FIlL STACK A\n");
// 	//ft_lstprint(stack);
// 	//printf("SEARCH SEGFAULT\n");
// 	return (*stack);
// }

// 		// stack_a->content = argv[i];
// 		// stack_a->next = NULL;
// 		// tmp = stack_a -> content;
// 		// write(1, tmp, 1);
// 		// // printf("argv %i %i : %d\n", i, argv[i], stack_a);
// 		// // stack_a = stack_a->next;


// creer une variable ou ranger la head de ma liste chainee pour ne pas la perdre

int	main(int argc, char **argv)
{
	struct t_list	**stack_a = NULL;
	t_list	*tmp = NULL;
	int	i;
	// t_list	*stack_b = NULL;

	i = 1;
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		printf("%s", argv[1]);
		return (0);
	}
	**stack_a = (t_list **)malloc(sizeof(t_list*));
	if (!stack_a)
		return (0);
	stack_a->content = ft_atoi(argv[i]);
	stack_a->next = NULL;
	while (i <= argc)
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[1])));
		stack_a = &(*stack_a)->next;
		i++;
	}
	tmp = *stack_a;
	while (tmp != NULL)
	{
		printf("%d", tmp->content);
		tmp = tmp->next;
	}
	return (1);
}
