#include <iostream>
using namespace std;
int NumberOfZeroes(int n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;  // Получаем последнюю цифру числа
        if (digit == 0) {
            count++;
        }
        n /= 10;  // Убираем последнюю цифру числа
    }
    return count;
}
int main() {
    int N;
    cout << "Введите натуральное число N: ";
    cin >> N;
    int zerosCount = NumberOfZeroes(N);
    cout << "Количество нулей среди цифр числа N: " << zerosCount << endl;
    return 0;
}