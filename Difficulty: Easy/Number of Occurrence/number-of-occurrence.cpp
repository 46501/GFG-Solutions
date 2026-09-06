class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        int first=-1, last=-1;
        
        int st=0, end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            } else if(nums[mid]<target){
                
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        
        st=0, end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(nums[mid]==target){
                last=mid;
                st=mid+1;
            } else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        if(first==-1) return 0;
        count = last-first+1;
        return count;
        
        
    }
};
