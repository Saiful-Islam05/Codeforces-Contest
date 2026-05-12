#include <iostream>
#include <string>

int main() {
    std::string str = "example";
    str.erase(0, 1); // erase the first character
    std::cout << str << '\n'; // outputs "xample"
    return 0;
}
