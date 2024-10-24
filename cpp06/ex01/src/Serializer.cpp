#include "Serializer.hpp"

Serializer::Serializer()
{
	// std::cout << "Default constructor called" << std::endl;
}
Serializer::~Serializer()
{
	// std::cout << "Destructor called" << std::endl;
}
Serializer::Serializer(const Serializer&other)
{
	(void)other;
	// std::cout << "Recopy constructor called" << std::endl;
}
Serializer& Serializer::operator=(const Serializer &other)
{
	(void)other;
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}