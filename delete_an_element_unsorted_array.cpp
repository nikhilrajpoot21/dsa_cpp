#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:"<<endl;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
int position;
    cout<<"enter your position"<<endl;
    cin>>position;
    for(int i=position;i<n;i++){
        arr[i]=arr[i+1];
       }
       n--;
       cout<<"new array is:";
    for(int i=0;i<=5;i++){
        cout<<arr[i];
         }
         cout<<endl;
         return 0;
    
}