/*Suppose you have an array with some elements. Now Find out two elements and delete
them if they exist. If not exist any one or both of them, then print "This element can not be
deleted as it does not exist"
*/
#include <bits/stdc++.h>

using namespace std;

int arr[] = {1,2,3,4,5};

int main()
{
    int len = sizeof(arr)/sizeof(arr[0]);
    int find;

    cout<<"Find first element : ";
    cin>>find;

    int t = 0;
    for(int i=0; i <len; ++i){
        if(arr[i] == find){
            ++t;
            for (int j = i; j < len-1; ++j)
            {
                arr[j] = arr[j+1];
            }
        }
    }

    if(t > 0) cout<<"This element can be deleted as it exist"<<endl;
    else cout<<"This element can not be deleted as it does not exist"<<endl;

    t = 0;
    --len;


    cout<<"Find second element : ";
    cin>>find;


    for(int i=0; i <len; ++i){
        if(arr[i] == find){
            for (int j = i; j < len-1; ++j)
            {
                arr[j] = arr[j+1];
            }
        }
    }

    if(t > 0) cout<<"This element can be deleted as it exist"<<endl;
    else cout<<"This element can not be deleted as it does not exist"<<endl;

    --len;

    cout<<"Afer Insertion array : ";

    for(int i=0; i < len; ++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
