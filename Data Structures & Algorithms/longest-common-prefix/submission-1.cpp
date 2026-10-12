class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        sort(strs.begin(), strs.end());
        int i = 0;
        while (i < strs[0].size() && i < strs[strs.size() - 1].size()) {
            if (strs[0][i] == strs[strs.size() - 1][i]) {
                str += strs[0][i];
                i++;
            } else {
                break;
            }
        }
        return str;
    }
};