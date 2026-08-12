/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:46:26 by pcaplat           #+#    #+#             */
/*   Updated: 2026/08/12 20:29:20 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.h"
#include "funcs.hpp"

int	main ( void )
{
	char			letters[] = { 'z', 'b', 'c' };
	int				test[] = { 1, 2, 3 };
	const double	numbers[] = { 8.6, 12345.12345, 18.4 };

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
