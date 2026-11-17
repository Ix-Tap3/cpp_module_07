/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:47:56 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:28:19 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template <typename T1> void	displayElem( T1 &elem ) { std::cout << elem << std::endl; }
template <typename T1> void	doubleValue ( T1 &value ) { value *= 2; }
template <typename T1> void	tripleValue( T1 &value ) { value *= 3; }
