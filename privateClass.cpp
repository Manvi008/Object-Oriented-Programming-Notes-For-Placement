#include<iostream>
using namespace std;
class circle{
    private:
    double radius;
    public:
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
/*output
class.cpp:13:12: error: 'double circle::radius' is private within this context
     object.radius=1.5;
            ^~~~~~
class.cpp:5:12: note: declared private here
     double radius;
            ^~~~~~*/
