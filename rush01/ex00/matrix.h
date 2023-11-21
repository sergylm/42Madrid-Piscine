/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:22:19 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:33:47 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

int	*get_col(int **matrix, int size, int col);

int	*get_row(int **matrix, int size, int row);

int	*get_reverse_col(int **matrix, int size, int col);

int	*get_reverse_row(int **matrix, int size, int row);

int	**init_matrix(int size);

#endif