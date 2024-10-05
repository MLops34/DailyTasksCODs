class Solution {
public:
    string removeDuplicateLetters(string s) {
        int last[26] = {0};
        int visited[26] = {0 };
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }
        for (int i = 0; i < s.size(); i++) {
            if (visited[s[i] - 'a']) {
                continue;
            }
            while (!res.empty() && res.back() > s[i] && last[res.back() - 'a'] > i) {
                visited[res.back() - 'a'] = 0;
                res.pop_back();
            }
            res += s[i];
            visited[s[i] - 'a'] = 1;
        }
        return res;
    }
};