class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};

        string mp[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;

        function<void(int, string)> solve = [&](int i, string current) {

            if (i == digits.size()) {
                ans.push_back(current);
                return;
            }

            string letters = mp[digits[i] - '0'];

            for (char c : letters) {
                solve(i + 1, current + c);
            }
        };

        solve(0, "");

        return ans;
    }
};