class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int n=len/3;
        if(len%3!=0)
        {
            return vector<vector<int>>();
        }

        vector<vector<int>>ans(n,vector<int>(3));
        int index=0;

        for(int i=0;i<len;i+=3)
        {
            if(i+2<len && nums[i+2]-nums[i]<=k)
            {
                ans[index]={nums[i],nums[i+1],nums[i+2]};
                index++;
            }
            else{
                return vector<vector<int>>();
            }
        }

        return ans;
    }
};
