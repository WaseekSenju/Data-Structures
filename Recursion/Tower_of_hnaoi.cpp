#include <iostream>

using namespace std;

TOH(int n , int A ,int B, int C){
    if(n==1){
    cout<<"from "<<A<<"to "<<C<<"\n";
    }
    else{
    TOH(n-1 , A , C ,B );
    cout<<"from "<<A<<"to "<<C<<"\n";
    TOH(n-1,B,A,C);
    }
    
}
int main(){
    TOH(2,1,2,3);
}