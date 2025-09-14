#include <iostream>

int main() {
    int n, ans=0;
    std::cin >> n;
    int orders[101];
    for (int i = 0; i<n; i++) {
        std::cin >> orders[i];
    }
    for (int i = 1; i<n-1; i++) {
        if (orders[i]>orders[i-1] && orders[i]>orders[i+1]) {
            ans = ans + 1;
        }
    }
    std::cout << ans;
}
