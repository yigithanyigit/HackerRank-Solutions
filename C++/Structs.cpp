#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

struct person {
    int age;
    string firstname;
    string lastname;
    int standart;
};

int main() {
    person p1;
    cin >> p1.age;
    cin >> p1.firstname;
    cin >> p1.lastname;
    cin >> p1.standart;
    cout << p1.age << " " << p1.firstname << " " << p1.lastname << " " << p1.standart;

    return 0;
}
