
#include <bits/stdc++.h>

using namespace std;

int arr[] = {1,2,3,4,5};

int main()
{

    int len = sizeof(arr)/sizeof(arr[0]);


    // First Insertion

    int posi;
    cout<<"insert Position: ";
    cin>>posi;

    for (int i = len+1; i > posi ; --i)
    {
        arr[i] = arr[i-1];
    }
    len++;

    cout<<"Insert Number : ";
    cin>>arr[posi];



    cout<<"Afer Insertion array : ";

    for(int i=0; i < len; ++i){
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    // Second Insertion


    cout<<"insert Position: ";
    cin>>posi;

    for (int i = len+1; i > posi ; --i)
    {
        arr[i] = arr[i-1];
    }
    len++;

    cout<<"Insert Number : ";
    cin>>arr[posi];


    cout<<"Afer Insertion array : ";

    for(int i=0; i < len; ++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
