#include <iostream>
#include <string>

int main() {
    std::string name;

    do{
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        if (name.empty()) {
            std::cout << "Name cannot be empty. Please try again.\n";
        }
    }
    while(name.empty());

    std::cout << "Hi, " << name << "!\n";

    return 0;
}