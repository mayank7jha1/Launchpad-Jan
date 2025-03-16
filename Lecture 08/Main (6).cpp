#include <iostream>
using namespace std;

int main() 
{
   int n;
    cin>>n;
    
    int a[n]{0};
    
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
    //Implement Insertion sort:
    for(int i=1;i<n;i++){
      //This is to store the current element as
      //we will lost it while shifting.
      int key=a[i];
      int j;//I will need this j outside the for loop.
      
      for(j=i-1;j>=0 and a[j]>key;j--){
        //You need to perform shifting
        a[j+1]=a[j];
      }
      
      //Put the key at its correct position.
      //Correct Position of key is j+1.
      a[j+1]=key;
      
    }
    
      //Print the array
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
   }
   
    
    
    
    return 0;
}