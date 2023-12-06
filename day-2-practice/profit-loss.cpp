#include<iostream>
using namespace std;
int main(){

int cp; //cp means =cost price
cout<<"enter cost price:";
cin>>cp;

int sp; //sp means =sell price
cout<<"enter seling price:";
cin >>sp;


if (sp>cp ){
cout <<"profit is:"<< sp-cp;
}

else if (sp<cp) {
cout <<"loss is: "<<cp-sp;

}


}