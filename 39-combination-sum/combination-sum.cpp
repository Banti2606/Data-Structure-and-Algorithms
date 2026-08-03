class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& candidates, int target, vector<int>& temp) {

        // Base Case
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // Invalid Case
        if (index == candidates.size() || target < 0)
            return;

        // Take current element (can reuse same element)
        temp.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], temp);

        // Backtrack
        temp.pop_back();

        // Skip current element
        solve(index + 1, candidates, target, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> temp;

        solve(0, candidates, target, temp);

        return ans;
    }
};