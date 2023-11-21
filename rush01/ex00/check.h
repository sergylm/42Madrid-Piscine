/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:21:56 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:34:21 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int	check_row(int **square, int size, int row, int *limits);

int	check_col(int **square, int size, int col, int *limits);

int	check(int **square, int size, int **inputs);

#endif