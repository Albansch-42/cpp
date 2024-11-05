#include <iostream>
#include <string>
#include <cctype>
#include <queue>

int main(int ac, char **argv) {
    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    std::cout << "Queue size: " << q.size() << std::endl;
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    std::cout << "Pop front" << std::endl;
    q.pop();
    std::cout << "Queue size: " << q.size() << std::endl;

}