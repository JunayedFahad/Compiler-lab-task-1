#include <iostream>
using namespace std;

int main()
{


    int a,n1;

    cout<<"Enter the first name size"<<endl;
    cin>>a;
    char arr[a];

        cout<<"Enter your first name alphabet by alphabet"<<endl;

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the last name size"<<endl;
    cin>>n1;
    char arr1[n1];
    cout<<"Enter your last name alphabet by alphabet"<<endl;

     for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
     }

    string full_name = string(arr, a) + " " + string(arr1, n1);

         cout<<"your name is ="<<full_name<<endl;

}

