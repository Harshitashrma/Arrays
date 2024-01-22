class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int actual_sum=n*(n+1)/2;
        unordered_set<int>s(nums.begin(),nums.end());
        int arraySum=0;
        int setSum=0;

        for(int a:nums)
        {
            arraySum+=a;
        }

        for(int a:s)
        {
            setSum+=a;
        }

        int missingNumber = actual_sum-setSum;
        int duplicate = arraySum-setSum;

        return {duplicate,missingNumber};
    }
};
