/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:12:04 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 20:13:16 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

int		get_size(char *str);

int		**get_inputs(char *str, int size);

void	generate_all(int **square, int **inputs, int size, int *pos);

void	find_answer(int **square, int **inputs, int size);

#endif