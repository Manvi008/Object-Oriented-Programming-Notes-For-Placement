#include<iostream>
using namespace std;
class circle{
    public:
    double radius;
    double compute_area(){
        return 3.14*radius*radius;
    }
};
int main(){
    circle object;
    object.radius=1.5;
    cout<<"the area of the circle is"<<object.compute_area();
    return 0;
}
/* OUTPUT
the area of the circle is7.065*/
