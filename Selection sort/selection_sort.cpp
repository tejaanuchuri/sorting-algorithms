#include<iostream>
using namespace std;
void selection_sort(long long int arr[100000],long long int n){
    for(int i=0;i<n-1;i++){
        
        int min_idx = i; 
        
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr,n);
    cout<<endl<<"after sorting:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}