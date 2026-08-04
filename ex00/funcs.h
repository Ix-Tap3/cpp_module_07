/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:14:21 by pcaplat           #+#    #+#             */
/*   Updated: 2026/08/04 20:26:37 by pcaplat          ###   ########.fr       */
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
