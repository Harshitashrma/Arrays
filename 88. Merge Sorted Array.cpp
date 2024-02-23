class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=m;
       int size=m+n;
       int j=0;
       while(i<size){
           nums1[i]=nums2[j];
           i++;
           j++;
       }
       sort(nums1.begin(),nums1.end());
    }
};
