#include<bits/stdc++.h>
using namespace std;
int manish(){
    //for key
    int k,size;
    cin>>k;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];

    }
    reverse(arr,arr+size);
    cout<<"Reversed array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    


return 0;
}