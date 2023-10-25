#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;  
    sum = (n*(n + 1) * (2*n + 1)) / 6;
	cout << sum << endl;
    return 0;
}