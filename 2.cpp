#include <iostream>

int main() {
    int n, x, dist_to_x, ans=0, best_dist=2001;
    std::cin >> n;
    int darkstores[1000];
    for (int i = 0; i<n; i++) {
        std::cin >> darkstores[i];
    }
    std::cin >> x;
    for (int i = 0; i<n; i++) {
        dist_to_x = x-darkstores[i];
        if (dist_to_x < 0) {
            dist_to_x = -1 * dist_to_x;
        }
        if (dist_to_x < best_dist) {
            ans = darkstores[i];
            best_dist = dist_to_x;
        }
    }
    std::cout << ans;
    return 0;
}