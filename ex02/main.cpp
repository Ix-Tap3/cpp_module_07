/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:57:33 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:29:37 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>	test(3);

	test.display();
	try
	{
		test[0] = 1;
		test[1] = 2;
		test[2] = 3;
		test[5] = 6;
	} catch ( std::exception &e ) { std::cerr << e.what() << std::endl; }
	test.display();
}
