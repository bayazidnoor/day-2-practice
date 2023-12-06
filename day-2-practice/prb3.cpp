//given a point (x,y) write a prgram to find out if it lies in the 1st quradant, 2nd qurant,3rd qurant,4th qurand,on the x-axis, y-axis at the origin viz(o,0)
// ++,+_,__,_+

#include<iostream>
using namespace std;
int main(){

int a,b;
cin>>a>>b;
if(a>0 and b>0){
    cout<<"1st ordinate";
}

else if (a<0 and b>0) {
    cout<<"2nd ordinate";
}
else if (a<0 and b<0){
    cout<<"3rd ordinate";

}

else{
    cout<<"4th ordinate";
}


}


