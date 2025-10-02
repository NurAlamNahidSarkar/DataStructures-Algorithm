#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i-1;
        while (j >= 0 & arr[j]>x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
    cout<<"Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    cout<<"Bubble Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void selectionSort(int arr[], int n)
{

}

int main()
{


    int n,arr[100],x,input;

    while (1)
    {
    
        cout<<endl;
        cout<<"How many elements: ";
        cin>>n;
        cout<<"Input Elements: ";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<"Which Sort do you want to do ?"<<endl;

        cout<<"1. Insertion Sort"<<endl<<"2. Bubble Sort"<<endl<<"3. Selection Sort"<<endl<<"4. End"<<endl;
        cin>>input;
        
        if(input==1)
        {
            insertionSort(arr,n);
        }
        else if(input==2)
        {
            bubbleSort(arr,n);
        }
        else if(input==3)
        {
            selectionSort(arr,n);
        }
        else
        {
            break;
        }
        cout<<endl;
    }
}