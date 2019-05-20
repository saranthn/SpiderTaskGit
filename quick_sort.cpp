#include<iostream> 

using namespace std;
   
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
//taking the last element as pivot, we sort the array on either side by placing the numbers greater than the pivot after it and the ones lesser than it before the pivot

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot is selected as the last element 
    int i = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 

        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
	//in order to sort the array before and after the pivot
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    for(int i=0; i<size; i++)
    { cout<<arr[i]<<" ";
    }
} 

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    { cin>>arr[i];
    }
    quickSort(arr, 0, n-1); 
    cout<<"Sorted Array"<<endl; 
    printArray(arr, n); 
    return 0; 
} 

