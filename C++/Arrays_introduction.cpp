#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int x, inp;
    cin >> x;
    int arr[x];
    while (x > 0)
    {
        cin >> inp;
        arr[x - 1] = inp;
        x--;
    };
    for(auto c : arr)cout << c << " ";
    return 0;

}