#pragma once
#include <iostream>
#include <vector>

auto print(std::vector<int> &print_vec) {
    for(const auto& current : print_vec) {
        std::cout << current << " ";
    }
}