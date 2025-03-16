/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:45:42 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 15:48:42 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template <typename T, typename F>
void iter(T *array, size_t length, F func)
{
	if (!array || length == 0)
		return;
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}


#endif // __ITER_H__
