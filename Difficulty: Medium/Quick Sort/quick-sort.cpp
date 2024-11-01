//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    void qs(int arr[],int low,int high){
        if(low<high){
            int pindex=partition(arr,low,high);
            qs(arr,low,pindex-1);
            qs(arr,pindex+1,high);
        }
    }
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        
          int size =high+1;
       
       qs(arr,0,size-1);
       
     
    }
    
    public:
    int partition(int arr[], int low, int high)
    {
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
            swap(arr[low],arr[j]);
        
        return j;
       // Your code here
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends