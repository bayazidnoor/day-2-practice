//if the ages of ram,shyam,ajay, are input through the keyboard, write a program to determinate the youngest of three
#include<iostream>
using namespace std;
int main(){


int ram,shyam,ajay;
cout<<"ram age:";
cin>>ram; 


cout<<"shyam age:";
cin>>shyam; 

cout<<"ajay age:";
cin>>ajay;

if(ram<shyam and ram<ajay){
    cout<<ram<<"is lowest";
}

else if(shyam<ram and shyam<ajay){
    cout<<shyam<<"is lowest";
}

else {
cout<<ajay<<"is lowest";

}


}




