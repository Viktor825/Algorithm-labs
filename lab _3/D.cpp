#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int C_kn = 1;
    for (int i = 1; i <= k; i++) {
        C_kn *= (n - i + 1);
        C_kn /= i;
    }
    cout << C_kn << endl;
    return 0;
}