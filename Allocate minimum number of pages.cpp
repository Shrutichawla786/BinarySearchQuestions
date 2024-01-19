link->https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
Q.Allocate minimum number of pages
code-->
  
    bool isposible(int arr[], int n, int m , int mid){
        int studentCount= 1;
        int pageSum =0;
        for(int i =0;i<n;i++){
            if(pageSum+arr[i]<=mid){
                pageSum=pageSum+arr[i];
            }
            else{
                studentCount++;
                if(studentCount>m||arr[i]>mid){
                    return false;
                }
                pageSum=arr[i];
            }
        }
        return true;
        
    }
    int findPages(int A[], int N, int M) {

        //code here
        if(M>N){
            return -1;
        }
        int s=0;
        int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
        }
        int ans=-1;
        int e=sum;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isposible(A , N ,M , mid)){
                ans = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(1)
