#include <iostream>
#include <string>

void printCell(const std::string& content) {
    std::string truncated_content = "";
    if (content.length() > (10))
        truncated_content =  content.substr(0, 10 - 1) + '.';
    else
        truncated_content =  content;
    std::cout << std::right;
    std::cout.width(10);
    std::cout << truncated_content << " | ";
}

int main() {
    std::string names[] = {"John Doe", "Jane Smith", "Alice", "Bob Johnson"};
    std::string ages[] = {"30", "25", "40", "35"};

    std::cout << "Name       | Age        |" << std::endl;

    for (int i = 0; i < 4; ++i) {
        printCell(names[i]);
        printCell(ages[i]);
        std::cout << std::endl;
    }

    return 0;
}
