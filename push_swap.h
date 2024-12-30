/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:15:30 by fimazouz          #+#    #+#             */
/*   Updated: 2024/05/28 13:40:50 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

void				init_stack_a(t_node **a, char **argv);
char				**ft_split(char *s, char c);

// INIT
void				init_nodes_a(t_node *a, t_node *b);
void				init_nodes_b(t_node *a, t_node *b);
void				current_index(t_node *stack);
void				set_cheapest(t_node *stack);
t_node				*get_cheapest(t_node *stack);
void				prep_for_push(t_node **s, t_node *n, char c);

// OPERATIONS
void				sa(t_node **a, bool print);
void				sb(t_node **b, bool print);
void				ss(t_node **a, t_node **b, bool print);
void				ra(t_node **a, bool print);
void				rb(t_node **b, bool print);
void				rr(t_node **a, t_node **b, bool print);
void				rra(t_node **a, bool print);
void				rrb(t_node **b, bool print);
void				rrr(t_node **a, t_node **b, bool print);
void				pa(t_node **a, t_node **b, bool print);
void				pb(t_node **b, t_node **a, bool print);

// UTILS
int					stack_len(t_node *stack);
t_node				*find_last(t_node *stack);
bool				stack_sorted(t_node *stack);
t_node				*find_min(t_node *stack);
t_node				*find_max(t_node *stack);
int					ft_isdigit(int c);
void				min_on_top(t_node **a);
void				move_b_to_a(t_node **a, t_node **b);
void				move_a_to_b(t_node **a, t_node **b);

// ALGO
void				sort_three(t_node **a);
void				sort_stacks(t_node **a, t_node **b);

// ERRORS
int					error_syntax(char *str_n);
int					error_duplicate(t_node *a, int n);
void				free_stack(t_node **stack);
void				free_errors(t_node **a);

#endif