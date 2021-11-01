#include<iostream>
using namespace std;
int main()
{
    int n,z=0;;
    cin>>n;
    char arr[50],rev[50];
    cout<<"Enter a string\n";
    //for(int i=0;i<n;i++)
    //{
        cin>>arr;
    //}
    for(int i=n-1;i>=0;i--)
    {
        rev[n-i-1]=arr[i];
    }
    while(rev[z]==arr[z] && z<=n)
    {
       if(rev[z]!=arr[z])
       {
           break;
       }
       //cout<<"\n"<<z;
       z++;
    }
    if(z-1==n)
    {
        cout<<arr <<" Palindrome\n";
    }
    else
    {
        cout<<rev <<" Not palindrome\n"<<z;
    }
}