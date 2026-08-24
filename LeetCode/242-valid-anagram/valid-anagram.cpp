class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> freqs;
        unordered_map<char, int> freqt;

        for (char c : s) {
            freqs[c]++;
        }

        for (char c : t) {
            freqt[c]++;
        }

        for (char c : s) {
            if (freqs[c] != freqt[c]) {
                return false;
            }
        }

        return true;
    }
};