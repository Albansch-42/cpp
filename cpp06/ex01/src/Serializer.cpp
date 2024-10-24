#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructor called" << std::endl;
}
Serializer::~Serializer()
{
	std::cout << "Destructor called" << std::endl;
}
Serializer::Serializer(const Serializer&other)
{
	std::cout << "Recopy constructor called" << std::endl;
}
Serializer& Serializer::operator=(const Serializer &other)
{
	std::cout << "Assignment operator called" << std::endl;
}
