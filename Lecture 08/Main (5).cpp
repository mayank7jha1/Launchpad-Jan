#include <iostream>
using namespace std;

int main() 
{
   int n;
   cin>>n;//Size of the array
   int a[n];
   
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   
   //Implement the bubble sort algorithm
   for(int i=0;i<n-1;i++){
     for(int j=0;j<n-i-1;j++){
       if(a[j]>a[j+1]){
         //Swap a[j] with a[j+1]
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
     }
   }
   
   //Print the array
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
   }
   
   
   
    return 0;
}