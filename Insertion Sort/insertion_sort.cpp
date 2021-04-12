#include<iostream>
using namespace std;

void print_array(long long int arr[100000],long long int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}

void Insertion_sort(long long int arr[100000],long long int n){
    
    for(int i=1;i<n;i++){
        
        int key = arr[i];
        int j=i-1; 

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
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
    print_array(arr,n);
    Insertion_sort(arr,n);
    cout<<endl<<"after sorting:"<<endl;
    print_array(arr,n);

    return 0;
}