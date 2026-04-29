#include<iostream>
using namespace std;
int main(){


float op;
cin>>op;//-1.3
int z = (int)op;//-1
if(z<0) z=z-1;
float ok = (float)z;//1.00
cout<<(op-ok)<<endl;//-1.3-1.0 =-0.3


}