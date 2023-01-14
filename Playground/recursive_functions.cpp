#include <iostream>
using namespace std;
int zeros = 0;
int ones = 0;
void foo()
{
    ones++;
}

void soo()
{
    zeros++;
}

void zoo()
{
    foo();
    soo();
}

void koo()
{
    foo();
    soo();
    zoo();
}

void loo()
{
    foo();
    foo();
    soo();
}

int main()
{
    zoo();
    loo();
    soo();
    zoo();
    soo();
    loo();
    loo();
    zoo();
    foo();

    cout<<"Number of zeros"<<zeros;cout<<"\n";
    cout<<"Numbe of ones"<<ones;

}
