class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

        for (int i=0;i<s.size();i++) {
            char c=s[i];
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});
            }

            if (st.top().second == k) {
                st.pop();
            }
        }

        string result = "";
        while (!st.empty()) {
            pair<char, int> topPair = st.top();
            st.pop();
            result.append(topPair.second, topPair.first);
        }

        reverse(result.begin(), result.end());
        return result;
    }
};