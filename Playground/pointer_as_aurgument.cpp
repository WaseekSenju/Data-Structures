#include <iostream>
using namespace std;
void array_as_arg(int a[] )
{
    a[0] = 5;
    
}
int main()
{
    
    int a [5] = {1,2,3,4,6};
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i];
    }
    array_as_arg(a);

    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i];
    }
}
