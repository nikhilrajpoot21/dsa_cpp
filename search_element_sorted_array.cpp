#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enters elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    cout<<" New sorted array is:"<<"  ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"enter the key:"<<"  ";
    cin>>key;
     cout<<"your key is at index:"<<" "<<linearsearch(arr,n,key)<<endl;
    return 0;
}