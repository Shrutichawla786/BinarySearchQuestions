link-->https://www.geeksforgeeks.org/problems/peak-element/1
Q.Peak element
code-->
  int peakElement(int arr[], int n)
    {
       // Your code here
       int s= 0;
       int e=n-1;
       while(s<e){
           int mid= s+(e-s)/2;
           if(arr[mid]<arr[mid+1]){
               s=mid+1;
           }
           else{
               e=mid;
           }
       }
       return e;
    }
Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)
