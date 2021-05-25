#include<bits/stdc++.h>

using std::cout;
using std::endl;
using std::cin;

class Shape{

public:
    virtual int number_of_sides() = 0;
};

class Triangle : public  Shape{
    public:
        int number_of_sides(){
            return 3;
        }
};

class Trapezoid: public Shape{
    public:
        int number_of_sides(){
            return 4;
        }
};  

class Hexagon : public Shape{
    public: 
        int number_of_sides(){
            return 6;
        }
};

int main(){
    Shape * ptr;
   
    Trapezoid t; Hexagon hex;
    Triangle tri;
    ptr = &tri;
    cout<<ptr->number_of_sides()<<"\n";
    ptr = &hex;
    cout<<ptr->number_of_sides()<<"\n";
    ptr = &t;
    cout<<ptr->number_of_sides()<<"\n";
    return 0;
}