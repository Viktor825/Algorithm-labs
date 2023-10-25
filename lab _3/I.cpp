#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    double sum = 1.0;
    double peremennaya = 1.0;
    for (int i = 1; i <= N; i++) {
        peremennaya /= i;
        sum += peremennaya;
    }
    cout << sum << endl;
    return 0;
}