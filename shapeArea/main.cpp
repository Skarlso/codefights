#include <iostream>

int shapeArea(int n) {
    if (n == 1) {
        return 1;
    }

    int increaseBy = 4;
    int area = 1;
    for (int i = 1; i < n; ++i) {
        area += increaseBy;
        increaseBy += 4;
    }
    return area;
}

int main() {
    std::cout << shapeArea(3) << std::endl;
}
