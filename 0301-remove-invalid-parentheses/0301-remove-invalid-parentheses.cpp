class Solution {
public:
    unordered_set<string> st;

    void solve(string& s, int index, int left, int right, int leftRem, int rightRem, string curr) {
        if(index == s.size()) {
            if(left == 0 && leftRem == 0 && rightRem == 0)
                st.insert(curr);
            return;
        }

        if(s[index] == '(') {
            if(leftRem > 0)
                solve(s, index + 1, left, right, leftRem - 1, rightRem, curr);

            solve(s, index + 1, left + 1, right, leftRem, rightRem, curr + '(');
        }
        else if(s[index] == ')') {
            if(rightRem > 0)
                solve(s, index + 1, left, right, leftRem, rightRem - 1, curr);

            if(left > 0)
                solve(s, index + 1, left - 1, right, leftRem, rightRem, curr + ')');
        }
        else {
            solve(s, index + 1, left, right, leftRem, rightRem, curr + s[index]);
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        int leftRem = 0;
        int rightRem = 0;

        for(char c : s) {
            if(c == '(') {
                leftRem++;
            }
            else if(c == ')') {
                if(leftRem > 0)
                    leftRem--;
                else
                    rightRem++;
            }
        }

        solve(s, 0, 0, 0, leftRem, rightRem, "");

        return vector<string>(st.begin(), st.end());
    }
};