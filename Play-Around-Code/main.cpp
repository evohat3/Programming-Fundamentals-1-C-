#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = ++x * --x;
    cout << "increment y: " << y << endl;

    return 0;
}