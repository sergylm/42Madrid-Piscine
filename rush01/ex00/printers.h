/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorsanc2 <jorsanc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:40:38 by jorsanc2          #+#    #+#             */
/*   Updated: 2023/11/19 19:32:12 by jorsanc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTERS_H
# define PRINTERS_H

void	printch(char ch);

void	print(char *str);

void	print_full_square(int **square, int **observers, int size);

void	print_square(int **square, int size);

int		error_message(void);

#endif