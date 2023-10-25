#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int* arr = new int[N]; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}