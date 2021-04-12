#include<iostream>
using namespace std;
void bubble_sort(long long int arr[100000],long long int n){
    if(n==1)
        return ;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    bubble_sort(arr,n-1);
}
int main(){
    long long int n,i;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"before sorting:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubble_sort(arr,n);

    cout<<endl<<"after sorting:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}