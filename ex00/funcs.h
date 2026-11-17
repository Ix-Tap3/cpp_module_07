/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:14:21 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:24:38 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename Type>	void swap( Type &a, Type &b )
{
	Type	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename Type>	Type min( Type a, Type b ) { return ((a < b) ? a : b); }
template <typename Type>	Type max( Type a, Type b ) { return ((a > b) ? a : b); }
