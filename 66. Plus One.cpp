class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    
    int n = digits.size() - 1;
    vector<int> ans;
    int carry = 1;

    for (int i = n; i >= 0; i--) {
        int sum = digits[i] + carry;
        carry = sum / 10;
        digits[i] = sum % 10;
        ans.push_back(digits[i]);
    }

    if (carry > 0) {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end()); // Reverse the ans vector to get the correct order

    return ans;

   
    }
};
