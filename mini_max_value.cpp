#include <iostream>
using namespace std;

int main()
{
    int a,b,x,max,min;


    cout<<"Please enter array size"<<endl;
    cin>>x;
    int arr[x];
    cout<<"Please enter the elements"<<endl;


        for(int i=0;i<x;i++)
     {
        cin>>arr[i];
     }
      min=arr[0];
     max=arr[0];
    for(int i=0;i<x;i++)
    {

        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"maximum is "<<max<<endl;
    cout<<"minimum is "<<min<<endl;

}
