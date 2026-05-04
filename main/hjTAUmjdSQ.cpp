#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility {
public:
    static int sum(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers) {
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static void printVector(const std::vector<int>& numbers) {
        for (const int& num : numbers) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
    static std::vector<int> sorted(const std::vector<int>& numbers) {
        std::vector<int> sortedNumbers = numbers;
        std::sort(sortedNumbers.begin(), sortedNumbers.end());
        return sortedNumbers;
    }
    static int max(const std::vector<int>& numbers) {
        return *std::max_element(numbers.begin(), numbers.end());
    }
    static int min(const std::vector<int>& numbers) {
        return *std::min_element(numbers.begin(), numbers.end());
    }
};
int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    Utility::printVector(numbers);
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    std::cout << "Max: " << Utility::max(numbers) << std::endl;
    std::cout << "Min: " << Utility::min(numbers) << std::endl;
    std::vector<int> sortedNumbers = Utility::sorted(numbers);
    Utility::printVector(sortedNumbers);
    return 0;
}
