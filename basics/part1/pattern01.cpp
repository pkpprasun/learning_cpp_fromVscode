#include<iostream>
using namespace std;

void printRightTriangle(int n) {
        // code here
        for(int i = 1; i <= n;i++){
            for(int j =1 ;j<=i ;j++)
            {
                cout<<j<<" "<<endl;
            }

    
        }
        
    }

    int main(){
        printRightTriangle(4);
        return 0;

    }


