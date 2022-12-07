#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot, i, elem, j, found=0;

    cout<< "Enter the size of an array : ";
    cin>>tot;
    cout<<"Enter Array Elements: "<<endl;
    for(i=0; i<tot; i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }

    cout<<endl<<"Enter Element to Delete: ";
    cin>>elem;

    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<endl<<"Element doesn't found in the Array!";
    else
        cout<<endl<<"Element Deleted Successfully!";
    cout<<endl;
    return 0;
}
