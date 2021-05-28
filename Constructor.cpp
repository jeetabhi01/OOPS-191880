#include<bits/stdc++.h>

using std::cout;
using std::endl;
using std::cin;


class XYZ{
    public:
    double x;
    double y;
    double z;
};
class Vector{
    private:
        double x, y, z;
    public:
        //Default Constructor
        Vector():x(0),y(0),z(0){
            return;
        }
        //Copy constructor
        Vector(const Vector &v){
            this->x = v.x;
            this->y = v.y;
            this->z = v.z;
            return;
        }
        //Parametrized Constructor
        Vector(double x, double y, double z):x(x),y(y),z(z){
            return;
        }

        // Accessor Functions
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double getZ(){
            return z;
        }
        XYZ getXYZ(){
          XYZ a;
          a.x = this->x;
          a.y = this->y;  
          a.z = this->z;
          return a;
        }
};

int main(){
    Vector a;
    Vector b(1.2, 4,3);
    Vector c(b);
    cout<<b.getY()<<endl;
    
    auto output = a.getXYZ();
    cout<<output.x<<" "<<output.y<<" "<<output.z<<endl;
    
    output = b.getXYZ();
    cout<<output.x<<" "<<output.y<<" "<<output.z<<endl;
    
    output = c.getXYZ();
    cout<<output.x<<" "<<output.y<<" "<<output.z<<endl;
    
    return 0;
    
}