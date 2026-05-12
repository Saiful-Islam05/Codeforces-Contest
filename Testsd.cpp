#include <iostream>
#include <algorithm>

int main() {
    int my_array[] = {3, 6, 1, 89, 2, 10};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    int max_value = *std::max_element(my_array, my_array + n);
    std::cout << "The maximum value is: " << max_value << std::endl;

    return 0;
}
