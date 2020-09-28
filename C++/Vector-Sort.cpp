#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>


//using namespace std;

int main() {
    int x,y;
    std::vector<int> v1;
    std::cin >> x;
    while (x--){
        std::cin >> y;
        v1.push_back(y);

    };
    std::sort(v1.begin(),v1.end());
    for(const auto &c : v1)std::cout << c << " ";

    return 0;
}