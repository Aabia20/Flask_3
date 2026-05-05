#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i <= 5; i++) {  // error: out of bounds
        arr[i] = i * 2;
    }

    int *ptr = new int;
    // memory leak (delete nahi kiya)

    cout << "Done" << endl;
    return 0;
}