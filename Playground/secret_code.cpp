#include <iostream>
using namespace std;
int foo(int a){
   cout<<a;
   if(a<22){
    foo(foo(foo(++a)));
   }
   return a;
    
}
int main()
{
    foo(20);
    //cout<<foo(20);
}
