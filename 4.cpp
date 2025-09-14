#include <iostream>

int main() {
    int n, first_min, second_min;
    std::cin >> n;
    int drones[1000];
    for (int i=0; i<n; i++) {
        std::cin >> drones[i];
    }
    if (drones[0]<drones[1]) {
        first_min = drones[0];
        second_min = drones[1];
    } else {
        first_min = drones[1];
        second_min = drones[0];
    }
    for (int i=2; i<n; i++) {
        if (drones[i]<first_min) {
            second_min = first_min;
            first_min = drones[i];
        } else if (first_min <= drones[i] && drones[i] < second_min) {
            second_min = drones[i];
        }
    }
    std::cout << first_min << " " << second_min;
    return 0;
}