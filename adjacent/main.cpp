#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray) {
    int max = inputArray[0] * inputArray[1];
    for(int i = 0; i < inputArray.size(); ++i) {
        if (i + 1 < inputArray.size()) {
            if (inputArray[i] * inputArray[i+1] > max) {
                max = inputArray[i] * inputArray[i+1];
            }
        }
    }
    return max;
}

int main() {
    std::vector<int> test = {-23, 4, -3, 8, -12};
    std::cout << adjacentElementsProduct(test) << std::endl;
}
