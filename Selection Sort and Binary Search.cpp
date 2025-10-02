#include<iostream>
using namespace std;


void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j=i,k=i;
        while(j<n)
        {
            if(arr[j]>arr[k])
            {
                k=j;
            }
            j++;
        }
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
    cout<<"Selection Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int binarySearch(int arr[],int start, int end,int key)
{

    int mid;
    
    while (start<=end)
    {
        
        mid = (start + end)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
           start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}


int main()
{

    int arr[100],n,i,key;

    cout<<"How Many Elements : ";
    cin>>n;
    cout<<"Please Input Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before The Sorting :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n"<<endl;
    cout<<"## My Student ID's last digit is 6 (96) ##"<<endl;
    cout<<"After Mod by 3, the Result is 0"<<endl;
    cout<<"**My Sort is Selection Sort**"<<endl;


    cout<<endl; 

    selectionSort(arr, n);

    cout<<endl;

    cout<<"[[ Binary Search ]]";

    while (1)
    {
        cout<<endl;
        cout<<"Which Element Do You Want to Find : ";
        cin>>key;

        int k=binarySearch(arr,0,n-1,key);
        if(k==-1)
        {
        cout<<endl;
        cout<<"Sorry, Try Again."<<endl;
        }
        else
        {
        cout<<endl;
        cout<<"You have found the key value at Index : "<<k<<endl;
        }
    }
}


