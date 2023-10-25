#include <iostream>
using namespace std;

int main() {
    int kX,kY,aX,aY;
    cin>>kX>>kY>>aX>>aY;
    int dx = abs(kX - aX);
    int dy = abs(kY - aY);
    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}

