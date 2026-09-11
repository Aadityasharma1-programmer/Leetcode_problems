class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }
        if (words.size() != pattern.size())
            return false;
        unordered_map<char, string> sup1;
        unordered_map<string, char> sup2;
        int i = 0;
        for (string x : words) {
            if (sup2.find(x) != sup2.end()) {
                if (sup2[x] != pattern[i]) {
                    return false;
                }
            }
            if (sup1.find(pattern[i]) != sup1.end()) {
                if (sup1[pattern[i]] != x) {
                    return false;
                }
            }
            sup1[pattern[i]] = x;
            sup2[x] = pattern[i];
            i++;
        }

        return true;
    }
};