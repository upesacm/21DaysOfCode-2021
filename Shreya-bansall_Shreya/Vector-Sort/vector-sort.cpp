#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{   
    std::size_t n{};
    std::cin >> n;
    
    std::vector<int> vect(n);
    for (std::size_t i{}; i < n; ++i)
        std::cin >> vect[i];
    
    std::sort(vect.begin(), vect.end());
    for (auto const i : vect)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}