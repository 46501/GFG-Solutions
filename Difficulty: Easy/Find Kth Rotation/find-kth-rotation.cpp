class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int st=0, end=n-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[end]){
                st=mid+1;
            }else{
                end=mid;
            }
        }
        return st;
    }
};
