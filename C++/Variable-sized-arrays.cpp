#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n,q,x,c;
    vector<vector<int>> allvec;
    vector<int> v1;
    cin >> n >> q;
    while(n--){
        cin >> x;
        while(x--){
            cin >> c;
            v1.push_back(c);
        }
        allvec.push_back(v1);
        v1.clear();
    }

    while (q--){
        cin >> x >> c;
        cout << allvec[x][c] << endl;
    }
    return 0;

}