class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int n=arr.size();
        int ans=-1;
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(arr[mid]>=x){
                ans=mid;
                end=mid-1;
            } else{
                st=mid+1;
            }
        }
        return ans;
    }
};