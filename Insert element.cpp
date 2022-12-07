#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[6], i,element;
cout<< "Enter 5 arry Elements : ";

for( i=0; i<5; i++){

    cin>>arr[i];
}


cout<< " Enter element to insert : ";

cin>>element;
arr[i]= element;

 cout<< "Enter new array : ";

 for( i=0; i<sizeof(arr)/sizeof(int); i++){

    cout<< arr[i]<< " ";
 }





return 0;
}
