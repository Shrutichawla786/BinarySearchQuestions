Link-->https://www.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1
Q.Search an element in sorted and rotated array
Code-->
  int pivot(vector<int>v){
    int s= 0;
    int e = v.size()-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(v[mid]>=v[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }
    return s;
}
int binarySearch(vector<int> v, int s , int e , int k){
    int start= s;
    int end= e;
    while(start<=e){
        int mid = start+(e-start)/2;
        if(v[mid]==k){
            return mid;
        }
        else if(v[mid]>k){
            e=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
    
}
int Search(vector<int> vec, int k) {
    //code here'
    int p =pivot(vec);
    int s=0;
    int e = vec.size()-1;
    int ans=0;
    if(vec[p]<=k && k<=vec[vec.size()-1]){
        return binarySearch(vec , p , e , k);;
    }
    else{
        return binarySearch(vec , s , p-1 , k);
    }
    
}
Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
