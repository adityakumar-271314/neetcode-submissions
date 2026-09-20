class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        // Sort each string to use as a canonical key
        for (string s : strs) {
            string canonical = s;
            sort(canonical.begin(), canonical.end());
            mp[canonical].push_back(s);
        }
        
        // Collect all grouped anagrams into the result vector
        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};