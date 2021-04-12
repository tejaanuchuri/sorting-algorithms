#include<iostream>
using namespace std;
void merge(long long int arr[100000],long long int l,long long int m,long long int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1];
    int R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[i+l];
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[m+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }

    while(i<n1){
        arr[k++] = L[i++];
    }

    while(j<n2){
        arr[k++] = R[j++];
    }
    return ;
}
void merge_sort(long long int arr[100000],long long int l,long long int r){
    if(l>=r)
        return ;

    int m = l+(r-l)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
}
int main(){
    long long int i,n;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}