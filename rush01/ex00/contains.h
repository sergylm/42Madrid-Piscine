/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:12:25 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 20:20:31 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINS_H
# define CONTAINS_H

int	contains(int *nums, int size, int val);

int	row_contains(int **nums, int size, int val, int row);

int	col_contains(int **nums, int size, int val, int col);

int	col_row_contains(int **nums, int size, int val, int *col_row);

#endif