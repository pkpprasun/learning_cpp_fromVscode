/*
 method 2 with maths 

 catch : when both the numbers are even or both the numbers are odd 
 then the sum will always be equal to even.

1 
0 1 
1 0 1 
0 1 0 1 
hint : use extra variable
*/

#include<iostream>
using namespace std;
int main(){
int n;
int val=5;
cout<<"enter a number "<<endl;
// cin>>n;
n=5;

for(int i = 1; i<=n; i++){
    for(int j =1 ;j<=i;j++){

        if((i==j) || ((i+j)%2==0)){
            cout<<1<<" ";
        }else cout<< 0<<" ";
    }

    cout<<endl;
}


return 0;

}