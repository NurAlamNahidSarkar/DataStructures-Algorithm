//Linear,BinaryIterative,BinaryRecursive
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


int BSIterative(int arr[],int low, int high, int key)
{
    int mid;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            return high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

int BSRecursive(int arr[],int low, int high, int key)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(low>=high)
    {
        return -1;
    }
    if(arr[mid]>key)
    {
        return BSRecursive(arr,low,mid-1,key);
    }
        return BSRecursive(arr,mid+1,high,key);

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


    int k1=BSIterative(arr,0,n-1,key);
    if(k1==-1)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found at Index: "<<k1<<endl;
    }


    int k2=BSRecursive(arr,0,n-1,key);
    if(k2==-1)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found at Index: "<<k2<<endl;
    }

    }

}