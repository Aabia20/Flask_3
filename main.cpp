#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int arr[2];
    
    for(int i = 0; i <= 10; i++) {
        arr[i] = i * 5;
    }

    int *ptr = new int[100];
    ptr[0] = 500;

    char source[] = "This string is way too long for the buffer";
    char buffer[5];
    strcpy(buffer, source);

    int a = 10;
    int b = 0;
    int c = a / b;

    int unusedVariable = 100;

    cout << "Task Completed" << endl;

    return 0;
}
