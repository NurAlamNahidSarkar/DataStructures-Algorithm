#include<iostream>

using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }

    }
    return -1;
}


int main()
{
    int arr[100],n,key;
    cout<<"How many elements: ";
    cin>>n;
    cout<<"Input the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Search: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    while(1){
    cout<<endl;
    cout<<"Which element you want to find: ";
    cin>>key;
    int k=linearsearch(arr,n,key);
    if(k==-1)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found at Index: "<<k<<endl;
    }
    }
}