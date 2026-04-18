#include <iostream>
#include <memory>

using namespace std;

int main() {
    
    // creating a single unique pointer. not the recommended way in modern Cpp.
    unique_ptr<int> ptr1(new int(77));
    cout << *ptr1 << endl;

    // other way to create. Recommended as it would also work with multiple allocations in one line.
    unique_ptr<int> ptr2 = make_unique<int>(10);
    cout << *ptr2 << endl;

    // transfering using move() method
    unique_ptr<int> ptr3;
    ptr2 = move(ptr1);
    cout << *ptr3 << endl;
    cout << *ptr1; // it wouldn't be printed because the ownership has been transfered.
}