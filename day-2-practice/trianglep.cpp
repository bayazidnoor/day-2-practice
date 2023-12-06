#include<iostream>
using namespace std;
int main(){

//take 3 numbers input and tell if they cab be this sides of a trangle
//ত্রিভজের ২ টা বাহু  অপর বাহু অপেক্ষা বড়

int a,b,c;
cout<<"enter 1st side:";
cin>>a; 


cout<<"enter 2nd side:";
cin>>b; 


cout<<"enter 3rd side:";
cin>>c;

if ((a+b)>c and (b+c)>a and (c+a)>b  ){
    cout<<"valid trangle";
}
else{
    cout <<"invalid triangle";
}

}
