#include <iostream>
using namespace std;

int main() {
    int v,s,t;
    cin >> v >> t;
    s = ((v * t) % 109 + 109) % 109;
    cout<<s;
}

