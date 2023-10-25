#include<iostream>
using namespace std;

int main(){
    int qX,qY,aX,aY;
    cin>>qX>>qY>>aX>>aY;
    if (qX==aX || qY==aY || abs(qX-aX) == abs(qY-aY)){
            cout <<"YES";
        } else {
            cout <<"NO";
        }
}
