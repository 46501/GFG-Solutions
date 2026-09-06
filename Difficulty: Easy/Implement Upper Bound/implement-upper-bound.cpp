class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int st=0, end=arr.size()-1;
        int ans=arr.size();
        
        while
        (st<=end){
            int mid=st+(end-st)/2;
            
            if(arr[mid]>target){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        
        return ans;
    }
};
