/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:46:26 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:28:27 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.h"
#include "funcs.hpp"

int	main ( void )
{
	char			letters[] = { 'z', 'b', 'c' };
	int				test[] = { 1, 2, 3 };
	double	numbers[] = { 8.6, 12345.12345, 18.4 };

	std::cout << "Test array values: " << std::endl;
	iter( test, 3, displayElem<int> );
	std::cout << "Letters array values: " << std::endl;
	iter( letters, 3, displayElem<char> );
	std::cout << "numbers array values: " << std::endl;
	iter( numbers, 3, displayElem<double> );
	std::cout << std::endl;

	iter( test, 3, doubleValue<int> );
	iter( letters, 3, tripleValue<char> );

	std::cout << "Test array values: " << std::endl;
	iter( test, 3, displayElem<int> );
	std::cout << "Letters array values: " << std::endl;
	iter( letters, 3, displayElem<char> );
}
