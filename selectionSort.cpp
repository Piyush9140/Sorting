#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

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

    for(int i=0 ; i<=n-2 ; i++){
    	int min=i;
        for(int j=i+1 ; j<=n-1 ; j++){
			if(arr[min]>arr[j]){
				min=j;}
			if(min!=i){
				int temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
			
		}
    }

    clock_t end_time=clock();

    cout<<end_time-start_time<<"secs"<<endl;

    cout<<"Press 0 TO EXIT else press 1 :";
    cin>>m;

    }
    return 0;
}
