#include<iostream>
using namespace std;

int main()
{
    int i, arr[5], max,min;
    cout<<"Enter elements of array: ";
    for(i=0; i<5; i++)
        cin>>arr[i];

    cout<<"array is: ";
    for(i=0;i<5;i++)
        cout<<arr[i]<<" ";

    max=arr[0];
    min=arr[0];

    for(i=0; i<5;i++)
        if(max<arr[i])
        max=arr[i];
    else if(min>arr[i])

        min=arr[i];
    cout<<" Maximum Elements "<<max;
    cout<<" Minimum Elements "<<min;

    return 0;

}
