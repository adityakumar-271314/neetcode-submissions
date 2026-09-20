class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // If lengths differ, they can't be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        std::vector<int> count(26, 0);
        
        // Increment for s, decrement for t
        for (int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        // Check if all counts balance out to zero
        for (int c : count) {
            if (c != 0) {
                return false;
            }
        }
        
        return true;
    }
};