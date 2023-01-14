#include<iostream>
using namespace std;
int itt = 0 ;
void longRunningFunction(int array[] , int length)
{
    for (int i = 0; i < length; i++)
    {
        int idx = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[idx] > array[j])
            {
                itt++;
                idx = j;
            }
        }
        swap(array[i], array[idx]);
    }
}
int main(){
    int arrray [ 5] = {0,4,9,13,19};
    cout<<itt;
    longRunningFunction(arrray,5);
    cout<<"\n"<<itt;
}
