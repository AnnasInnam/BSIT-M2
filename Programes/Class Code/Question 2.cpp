#include <iostream>
using namespace std;
int main()
{
    int arr[11],even[11],odd[11],evncnt=0,oddcnt=0,i;
    cout<<"Input numbers in the array"<<endl;
    for(i=0;i<11;i++)
        cin>>arr[i];
    for(i=0;i<11;i++)
    {
            if(arr[i]%2==0)
                even[evncnt++]=arr[i];
            else 
                odd[oddcnt++]=arr[i];
    }
    cout<<"The even numbers are: ";
    for(i=0;i<evncnt;i++)
        cout<<even[i]<<" ";
    cout<<"\nThe odd numbers are: ";
    for(i=0;i<oddcnt;i++)
        cout<<odd[i]<<" ";
        
}
