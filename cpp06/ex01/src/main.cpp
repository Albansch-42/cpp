#include "Serializer.hpp"

int main()
{
    Data ptr;
    ptr.name = "jean";
    ptr.age = 3;

    uintptr_t rtp = Serializer::serialize(&ptr);

    std::cout << "serialiser = " << rtp << std::endl;

    Data *test = Serializer::deserialize(rtp);

    std::cout << test->name << ": " << test->age   << std::endl;

    return 0;
}