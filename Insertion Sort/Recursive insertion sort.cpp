#include<iostream>
using namespace std;

void print_array(long long int arr[100000],long long int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}

void Insertion_sort(long long int arr[100000],long long int n){
    if(n<=1)
        return ;
    
    Insertion_sort(arr,n-1);

    int last  = arr[n-1];
    int j = n-2;

        while(j>=0 && arr[j]>last){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = last;
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