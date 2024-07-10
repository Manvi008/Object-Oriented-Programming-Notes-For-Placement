#include<iostream>
using namespace std;
class  circle {
    private:
    double radius;
    public:
    void computeArea(double r){
        radius=r;
        double area= 3.14*radius*radius;
        cout<<"the radius of the circle is "<<radius<<endl;
        cout<<"the area of the circle is "<<area;

    }

};
int main(){
    circle object;
    object.computeArea(1.5);
    return 0;
}

/*output
the radius of the circle is 1.5
the area of the circle is 7.065*/
