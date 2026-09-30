class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for(int i = nums.size()-2;i>=0;i--)
        {
           
           if(nums[i]<nums[i+1])
           {
            pivot = i;
            break;
           }
           
        }
        if(pivot==-1)
        {
           int left = 0;
           int right = nums.size()-1;
           while(left < right)
           {
            swap(nums[left],nums[right]);
            left++;
            right--;
           }
        }
        else
        {
        int pivot2;
        for(int j = nums.size()-1;j>pivot;j--)
        {
            if(nums[j]>nums[pivot])
            {
                pivot2 = j;
                break;
            }
            
        }
        swap(nums[pivot],nums[pivot2]);
        
        int right = nums.size() -1;
        int left = pivot + 1;
        while(left<right)
         {
            swap(nums[left],nums[right]);
            left++;
            right--;
         }
        }
        
                   

        
        
        



        
        
        
    
    }
};