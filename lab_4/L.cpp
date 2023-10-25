#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N; 
    int* heights = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> heights[i]; 
    }
    int PetyaHeight;
    cin >> PetyaHeight; 
    int position_Petya = 1; 
    for (int i = 0; i < N; i++) {
        if (PetyaHeight <= heights[i]) {
            position_Petya = i + 1;
            break; 
        }
    }
    cout << position_Petya << endl;
    delete[] heights;
    return 0;
}