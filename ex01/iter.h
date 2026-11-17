/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:32:15 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:28:39 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T1, typename T2>	void iter( T1 arr[], unsigned int const size, T2 (*f)(T1 &elem))
{
	for (unsigned int i = 0; i < size; i++)
		f(arr[i]);
}
