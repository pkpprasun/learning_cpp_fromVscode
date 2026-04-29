#include<iostream>
using namespace std;
int main(){

    //left shift and right shift.
    int val=0;
    string s="100";
    int n=s.size();
    // int size = s.size();
    int pow=0;
    for(int i =n-1;i>=0;i--){
        if(s[i]=='1'){
            val += (1<<pow);
            
        }
        pow++;

    }
     
    cout<< val<<endl;
}