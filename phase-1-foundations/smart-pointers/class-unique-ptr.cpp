#include <iostream>
#include <memory>

using namespace std;

class Area {
    int height, width;
    
    public:
        Area(int h, int w) : height(h), width(w) {}
        int area() {return height * width;}
};

int main() {
    unique_ptr<Area> ptr(new Area(10, 20));
    cout << ptr->area() << endl;


    /////// transfering the ownership
    unique_ptr<Area> ptr2;
    ptr2 = move(ptr);
    cout << ptr2->area();

    return 0;
}
