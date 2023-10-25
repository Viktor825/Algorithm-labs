#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N; 
    int* arr = new int[N]; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int max_num = 0; 
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[i - 1]) {
            max_num++;
        }
    }
    cout << max_num << endl;
    delete[] arr;
    return 0;
}