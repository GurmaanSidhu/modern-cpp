#include <iostream>
#include <memory>

using namespace std;

int main() {
    // unique_ptr (stores one pointer at a time, you can only transfer the ownership for it using move() method)
    // creating a single unique pointer
    unique_ptr<int> ptr1(new int(77));
    cout << *ptr1 << endl;

    //////////////////////// transfering using move() method
    unique_ptr<int> ptr2;
    ptr2 = move(ptr1);
    cout << *ptr2 << endl;
    cout << *ptr1; // it wouldn't be printed because the ownership has been transfered.
}