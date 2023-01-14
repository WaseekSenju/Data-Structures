#include <iostream>
using namespace std;
struct Node {
    Node * next;
    int data;
    Node(int x) {
        data = x;
    }
     Node() {
        data = 0;
    }
};
void foo(Node &a)
{

 cout<<a.data;   
 a.data = 19;
    
}
void foo2(int &a)
{
    a[0]
cout<<(&a+1);
}
    


int main()
{

    Node * head = new Node();
    int * array = new int[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    
      
    
    foo2((*int)(array));

    //cout<<head->data; 
    //foo(*(head));
    //cout<<head->data;


    
}


