class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        
        sort(nums.begin(), nums.end());
        int k = 1;
        for(int i = 1 ; i < nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            nums[k++] = nums[i];
        }
        return k;
        
    }
};