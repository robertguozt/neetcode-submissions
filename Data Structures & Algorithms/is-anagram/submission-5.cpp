class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sd;
        std::unordered_map<char, int> td;
        for (int i = 0; i < s.length(); i++){
            sd[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++){
            td[t[i]]++;
        }
        return sd==td;

    }
};
