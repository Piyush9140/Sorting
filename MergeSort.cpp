#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void merge(int a[], int beg, int mid, int end){
    int n1 = mid - beg + 1, n2 = end - mid, LeftArray[n1], RightArray[n2];
    for (int i = 0; i < n1; i++) LeftArray[i] = a[beg + i];
    for (int j = 0; j < n2; j++) RightArray[j] = a[mid + 1 + j];

    int i=0, j=0, k=beg;
    while (i < n1 && j < n2){
        if(LeftArray[i] <= RightArray[j]){
            a[k] = LeftArray[i];
            i++;
        }
        else{
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j<n2){
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end){
    if (beg < end){
        int mid = (beg + end)/2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
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
    mergeSort(arr,0,n-1);
    clock_t end_time=clock();

    cout<<end_time-start_time<<"secs"<<endl;

    cout<<"Press 0 TO EXIT else press 1 :";
    cin>>m;

   }
    return 0;
}
