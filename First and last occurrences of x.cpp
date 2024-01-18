link-->https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
Q.First and last occurrences of x
code-->
  void rightOcuurence(int arr[] , int n , int x , vector<int>&v){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                ans = mid;
                start=mid+1;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        v.push_back(ans);
    }
    void leftOcuurence(int arr[] , int n , int x , vector<int>&v){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                ans = mid;
                end=mid-1;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        v.push_back(ans);
        
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>v;
        leftOcuurence(arr , n ,x,v);
        rightOcuurence(arr , n ,x, v);
        return v;
    }
Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).
