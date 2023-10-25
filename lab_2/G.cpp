#include<iostream>
using namespace std;

int main(){
    int rX,rY,aX,aY;
    cin>>rX>>rY>>aX>>aY;
    
    if(rX==aX || rY==aY){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}

