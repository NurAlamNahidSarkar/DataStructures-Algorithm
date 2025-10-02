// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
// int arr[100],n,key;

//     cout<<"How many elements: ";
//     cin>>n;
//     cout<<"Input elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Before Search= ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     while (1)
//     {
//         cout<<endl;
//         cout<<"Which element do you want to find: ";
//         cin>>key;

//         int k =linearSearch(arr,n,key);
//         if (k == -1)
//         {
//             cout<<"Not Found";
//         }
//         else
//         {
//             cout<<"Found Index: "<<k<<endl;
//         }
//     }
// }






#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
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
    cout<<"Input Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before Search: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    while (1)
    {   cout<<endl;
        cout<<"Which element do you want to find: ";
        cin>>key;

        int k = linearSearch(arr, n, key);
        if (k==-1)
        {
            cout<<"Not Found";
        }
        else
        {
            cout<<"Found Index:"<<k<<endl;
        }
    }
}
