#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
private :
    int lenght;
    int breadth;
    int height;
public:
    Box() : lenght(0), breadth(0), height(0) {};
    Box(int l, int b, int h){
        lenght = l;
        breadth = b;
        height = h;
    };
    Box(const Box &B){
        lenght = B.lenght;
        breadth = B.breadth;
        height = B.height;

    };
    int getLength() {return lenght;}
    int getBreadth() {return breadth;}
    int getHeight() {return height;}
    long long CalculateVolume() {return(long long)(lenght) * breadth * height;}
    bool operator<(const Box &B){
        if(lenght < B.lenght){
            return true;
        } else if (lenght == B.lenght){
            if (height < B.height and breadth == B.breadth){
                return true;
            } else if (breadth < B.breadth){
                return true;
            }
            return false;
        }
        return false;
    };
};
ostream &operator<<(ostream &out, Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};
int main(){
    cout << "a";
    return 0;
};