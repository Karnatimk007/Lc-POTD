class Solution {
public:
    int minInsertions(string s) {
        int i = 0;
        int cnt = 0;
        stack<char> st;
        while (i < s.size()) {
            if (s[i] == '(') {
                st.push('(');
                i++;
            } 
            else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    if (!st.empty()) {
                        st.pop();
                    } else {
                        cnt++;
                    }
                    i += 2;
                }
                else {
                    if (!st.empty()) {
                        cnt++;
                        st.pop();
                    } else {
                        cnt += 2;
                    }
                    i++;
                }
            }
        }
        cnt += 2 * st.size();

        return cnt;
    }
};