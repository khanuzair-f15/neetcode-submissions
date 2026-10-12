class Solution {
   public:
    bool isAnagram(string s, string t) {
        map<char, int> sm;
        map<char, int> tm;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            sm[s[i]]++;
            tm[t[i]]++;
        }

        for (auto i : sm) {
            auto it = tm.find(i.first);
            if (it == tm.end() || i.second != it->second) {
                return false;
            }
        }

        return true;
    }
};
