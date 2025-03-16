/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:33:28 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 15:37:11 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

template <typename T>
void	swap(T &a, T &b)
{
	T temp = b;
	b = a;
	a = temp;
}

template <typename T>
T	max(T &a, T &b)
{
	return (a > b) ? a : b;
}

template <typename T>
T	min(T &a, T &b)
{
	return (a < b) ? a : b;
}

#endif // __WHATEVER_H__
