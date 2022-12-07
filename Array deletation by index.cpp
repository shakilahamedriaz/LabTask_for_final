#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){

int a[10],i,newindex,n;

cout<< "Enter the array size less than 10 : ";
cin>>n;

cout<< "Enter the array elements : ";

for(i=0; i<n; i++){

    cin>>a[i];
}

cout<< "Array elements are : ";
 for(i=0; i<n; i++){

    cout<<a[i]<< " ";
 }

 cout<< endl<<"Enter the index of one specific data that you want to delete : ";
 cin>>newindex;


 for(i=newindex; i<n-1; i++)

        a[i]=a[i+1];

 cout<< "After deletion elements of the array are : ";
 for(i=0; i<n-1; i++){

    cout<<a[i]<< " ";
 }
cout<<endl<<endl;


return 0;

}
