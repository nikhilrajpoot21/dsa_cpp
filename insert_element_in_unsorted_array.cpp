#include<iostream>
using namespace std;
int main(){
    int arr[100]={4,9,3,7,6};
    int position,num;
    cout<<"enter your position and number"<<endl;
    cin>>position>>num;
    for(int i=4;i>=position;i--){
        arr[i+1]=arr[i];
        arr[position]=num;
    }
    cout<<"the new array is:"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
}