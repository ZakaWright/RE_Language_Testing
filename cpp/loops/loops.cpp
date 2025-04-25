#include <iostream>
#include <vector>

int main() {
    const int arr_len = 4;
    int arr[arr_len] = {0, 1, 2, 3};
    std::cout << "For loop (arr):\n";
    for (int i = 0; i < arr_len; i++ ) {
        std::cout << "\t" << arr[i] << "\n";
    }

    std::cout << "\nFor loop (vector):\n";
    std::vector<int> vec = {4, 5, 6, 7};
    for (int j = 0; j < vec.size(); j++) {
        std::cout << "\t" << vec[j] << "\n";
    }

    std::cout << "\nWhile loop:\n";
    // while loop
    int j = 0;
    while (j < 4) {
        std::cout << "\t" << j << "\n";
        j++;
    }

    std::cout << "\nDo while loop:\n";
    int k = 0;
    do {
        std::cout << "\t" << k << "\n";
        k++;
    } while (k < 4);
    return 0;
}