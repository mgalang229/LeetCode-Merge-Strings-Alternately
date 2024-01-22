class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        int w1 = 0, w2 = 0;
        string ans = "";
        for (int i = 0; w1 < n && w2 < m; i++) {
            if (i % 2 == 0) {
                ans += word1[w1++];
            } else {
                ans += word2[w2++];
            }
        }
        while (w1 < n) {
            ans += word1[w1++];
        }
        while (w2 < m){
            ans += word2[w2++];
        }
        return ans;
    }
};
