/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 20:42:25 by pcaplat           #+#    #+#             */
/*   Updated: 2026/11/17 17:37:57 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <cstdlib>
# include <iostream>
# include <exception>

template <typename T> class Array
{
private:
	T				*_arr;
	unsigned int	_size;

public:
	Array	( void ) : _arr(NULL), _size(0) { }
	Array	( unsigned int size ) : _arr( new T[size]), _size(size)
	{
		for (unsigned int i = 0; i < size; i++)
			this->_arr[i] = T(0);
	}
	Array	( const Array &other )
	{
		if (this != &other)
		{
			if (this->_arr)
			{
				delete [] this->_arr;
				this->_arr = NULL;
			}
			*this = other;
		}
	}
	~Array	( void ) { delete [] this->_arr; };

	Array	&operator=	( const Array &other )
	{
		if (this != &other)
		{
			this->_size = other._size;
			if (this->_arr)
				delete [] this->_arr;
			this->_arr = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->_arr[i] = other._arr[i];
		}
		return *this;
	}
	T		&operator[]	(unsigned int idx ) 
	{
		if (idx >= _size)
			throw OutOfBoundException();
		return this->_arr[idx];
	}
	T const	&operator[]	( unsigned int idx ) const
	{
		if (idx >= _size)
			throw OutOfBoundException();
		return this->_arr[idx];
	}

	void	display( void ) const
	{
		for (unsigned int i = 0; i < this->_size; i++)
		{
			std::cout << this->_arr[i];
			if (i < this->_size - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
	}
	unsigned int	size( void ) const { return this->_size; }

	class OutOfBoundException:	public std::exception
	{
	public:
		const char	*what( void ) const throw()
		{
			return "Error: Invalid out of bound index";
		}
	};
};
