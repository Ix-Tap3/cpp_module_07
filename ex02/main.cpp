/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:57:33 by pcaplat           #+#    #+#             */
/*   Updated: 2026/08/15 08:44:10 by pcaplat          ###   ########.fr       */
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
