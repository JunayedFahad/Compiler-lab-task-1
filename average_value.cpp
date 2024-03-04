#include <iostream>
using namespace std;

int main()
{


    int a,b,c,x;
    float sum;
    sum=0;
    cout<<"Please enter array size"<<endl;
    cin>>x;
    int arr[x];
    cout<<"Please enter the elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    float avg=sum/x;
    cout<<"the Avg is :"<<avg<<endl;

}
