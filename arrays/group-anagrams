//problem link: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<vector<int>, vector<string>> match;
        vector<int> count(26, 0);
        for (string s : strs) {
            fill(count.begin(), count.end(),0);
            for (char c : s) {
                count[c - 'a'] += 1;
            }
            match[count].push_back(s);
        }
        for (pair<vector<int>, vector<string>> group : match) {
            ans.push_back(group.second);
        }
        return ans;
    }
};
