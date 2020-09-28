#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    string str, temp;
    int x;
    vector<int> v1;
    getline(cin, str);
    stringstream ss(str);
    while(getline(ss, temp, ',')){
        if(stringstream(temp)>>x)v1.push_back(x);
    }
    for(const auto& c : v1)cout<<c<<endl;

    return 0;

}
