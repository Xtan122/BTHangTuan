#include <iostream>

void printArray(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n+i; j++) {
            std::cout << (j-1) % n + 1 << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printArray(n);

    return 0;
}
