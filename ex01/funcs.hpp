/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:47:56 by pcaplat           #+#    #+#             */
/*   Updated: 2026/08/12 20:14:47 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template <typename T1> void	displayElem( T1 &elem ) { std::cout << elem << std::endl; }
template <typename T1> void	doubleValue ( T1 &value ) { value *= 2; }
template <typename T1> void	tripleValue( T1 &value ) { value *= 3; }
