#include<iostream>
#include<ctime>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
inline void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high){
        int pivot=arr[low];
        int left =low+1;
        int right=high;
        while(left<=right){
          while(left<=high&&arr[left]<=pivot)
          left=left+1;
          while(arr[right]>pivot)
            right=right-1;
          
          if(left<right)
           swap(&arr[left],&arr[right]);
        }
        swap(&arr[right],&arr[low]);
        return right;
}
void quick(int arr[],int low,int high){
    if(low<high){
    int loc_pivot=partition(arr,low,high);
    quick(arr,low,loc_pivot-1);
    quick(arr,loc_pivot+1,high);
    }
 
}

int main()
{
    int m=1;
    while(m==1){

    int n;
    cout<<"Enter the no of INPUTS : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        arr[i]=rand();
    }

    clock_t start_time=clock();
    quick(arr,0,n-1);
    clock_t end_time=clock();

    cout<<end_time-start_time<<"secs"<<endl;

    cout<<"Press 0 TO EXIT else press 1 :";
    cin>>m;

    }
    return 0;
}
