#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char h[6] = "hello";
    char* p = 0;
    cout << p;
    cout << endl;
    p = h;
    cout << *p << endl;
    cout << p;
}
