#include<iostream>
using namespace std;

struct student
{
    int id;
    string dept;
    string name;
};






int main()
{

    struct student st[2];
    // st[0].id=1;
    // st[0].name="Nahid";
    // st[0].dept="CSE";
    // st[1].id=2;
    // st[1].name="Ahsan";
    // st[1].dept="CSE";

for (int i = 0; i < 2; i++)
{
    cout<<"Input= ";
    cin>>st[i].id;
    cin>>st[i].name;
    cin>>st[i].dept;
}



for (int i = 0; i < 2; i++)
{
    cout<<st[i].id<<" "<<st[i].name<<" "<<st[i].dept<<endl;
}



// int a;

// struct student s={1,2220,"Sakib"};

// cout<<s.id<<endl;
// cout<<s.name<<endl;
// cout<<s.code<<endl;




    // int a=10,c;
    // float d;
    // double b=5.5;

    // cout<<"A="<<a<<endl<<"B="<<b<<endl;
    // cout<<"B="<<b;
    // cin>>c;
    // cout<<"C="<<c<<endl;
    // cin>>d;
    // cout<<"D="<<d<<endl;

    // int i;
    // char a[100] = {'N','A','H','I','D'};
    // for (i = 0; i < 5; i++)
    // {
    //     cout<<a[i];
    // }

    // char a = 'Nahid Ahsan';

    // string s = "Nahid Ahsan";

    // cout<<a<<endl;
    // cout<<s<<endl;
    
}