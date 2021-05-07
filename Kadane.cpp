class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch national flag
        int mid=0,lo=0,hi=nums.size()-1;
        while(mid<=hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[lo],nums[mid]);
                        lo++;mid++;
                    break;
                     case 2:
                    swap(nums[hi],nums[mid]);
                        hi--;
                    break;
                case 1:
                        mid++;
                        
            }
        }
    }
};