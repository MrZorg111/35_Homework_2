#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <memory>
#include "function.h"

auto base_key = [](std::vector<int>& number) {
    std::unordered_set<int> num;
    std::vector<int> result;
    for(const auto& current : number) {
        if (num.insert(current).second) {
            result.push_back(current);
        }
    }
    std::unique_ptr<std::vector<int>> ptr = std::make_unique<std::vector<int>> (result.begin(), result.end());
    return *ptr;
};

int main() {
    std::vector<int> vec{1, 7, 1, 3, 7, 4, 6, 2, 1, 1};
    std::cout << "Unfiltered: ";
    print(vec);

    vec = base_key(vec);
    
    std::cout << "\nFiltered: ";
    print(vec);
    return 0;
}
