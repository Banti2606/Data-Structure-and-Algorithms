class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            int x = nums[i];

            int a = x;
            int b = x * maxProd;
            int c = x * minProd;

            maxProd = max({a, b, c});
            minProd = min({a, b, c});

            ans = max(ans, maxProd);
        }

        return ans;
    }
};