#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[100], search, i,n;
cout<< "Enter number of elements in array : ";
cin>>n;

cout<< "Enter "<<n<< " integer in array : ";
for(i=0; i<n; i++){

    cin>>arr[i];
}

cout<< "Enter number to search ";
cin>>search;

for(i=0; i<n; i++){

  if(arr[i]==search)
  {
      cout<<search<< " is present at position "<<i+1<<endl;
      cout<<search<< " is present at index no "<<i<<endl;
      break;
  }
}

if(i==n)
    cout<<search<< "is n't preset in the array "<<endl;

return 0;
}
