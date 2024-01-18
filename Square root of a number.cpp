link-->https://www.geeksforgeeks.org/problems/square-root/1
Q.Square root of a number
code-->
  long long int floorSqrt(long long int x) 
    {
        // Your code goes here
       long long int s=0;
        long long int e= x;
        long long int  ans=-1;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            if((mid*mid)==x){
                return mid;
            }
            if((mid*mid)>x){
                e=mid-1;
            }
            else if(mid* mid<x){
                ans= mid;
                s=mid+1;
            }
        }
        return ans;
    }
Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)
