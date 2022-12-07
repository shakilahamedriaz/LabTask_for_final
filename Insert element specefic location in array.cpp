#include<bits/stdc++.h>
using namespace std;

int main(){


int arr[50],i,element,pos,tot;
cout<< "Enter the size of Array  : ";
cin>>tot;

cout<< "Enter "<<tot<< " Array elements : ";

for(i=0; i<tot; i++){

    cin>>arr[i];
}

cout<<"Enter element to insert: ";
cin>>element;
cout<< "what position : ?";
cin>>pos;

for(i= tot; i>=pos; i--)

    arr[i]= arr[i-1];
    arr[i]=element;
    tot++;





cout<< "The new array is  : "<<endl;

  for(i=0; i<tot; i++){

    cout<<arr[i]<< " "<<endl;

  }


return 0;
}
