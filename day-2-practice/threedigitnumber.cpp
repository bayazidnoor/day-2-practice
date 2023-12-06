#include<iostream>
using namespace std;
int main(){

int n;
cout << "enter n:";
cin>>n;

if (n>99 and n<1000){
    cout<<"3 digit number";
}

if (n>0 and n<100){
    cout<<"2 digit number";
}

if (n>999 and n<10000){
    cout<<"4 digit number";
}

if (n>9999 and n<100000){
    cout<<"5 digit number";
}




}