#include<iostream>
using namespace std;
void bubble_sort(long long int arr[100000],long long int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return ;
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