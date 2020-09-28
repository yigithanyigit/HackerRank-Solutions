#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;



int main() {
    int n, q;
    string temp;
    size_t found;
    cin >> n >> q;
    vector<string> hrml,queries,tag;
    cin.ignore();
    while(n--){
        getline(cin, temp);
        hrml.push_back(temp);
    }
    while (q--){
        getline(cin, temp);
        queries.push_back(temp);
    }
    for(int q = hrml.size() - 1;q >= 0; q--){
        temp = hrml[q];
        temp.erase(remove(temp.begin(), temp.end(), '\"'),temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'),temp.end());
        if(temp.substr(0,2)=="</")tag.pop_back();
        else{
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1,p1,v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            cout << ch << t1 << p1 << ch << v1;


        }


    }


    return 0;
}