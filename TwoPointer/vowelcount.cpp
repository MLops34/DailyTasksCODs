class Solution {
public:
    long long countVowels(string word) {
        long long cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                cnt += (i + 1) * (word.size() - i);
            }
        }
        return cnt;
    }
};