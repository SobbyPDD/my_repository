#include <iostream>

int main() {
    char y='a';
    char letters[101];
    std::cin >> letters;
    for (int i = 0; letters[i] != '\0'; i++) {
        if (letters[i] > y) {
            y = letters[i];
        }
    }
    std::cout << y;
    return 0;
}
