#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        int root1 = (-b + sqrt(discriminant)) / (2 * a);
        int root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<root1<<" "<<root2;
    } else if (discriminant == 0) {
        int root = -b / (2 * a);
        cout<<root;
    }
}

