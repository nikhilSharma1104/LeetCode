#include<bits/stdc++.h>

    vector<int> partitionLabels(string s) {
        int n = str.length();
        vector<int> ans;
        
        vector<int> lastIdx(26);
        
        for(int i = 0; i < n; i++) {
            lastIdx[str[i] - 'a'] = i;
        }
        
        int maxIdx = 0;
        int startIdx = 0;
        for(int i = 0; i < 26; i++) {
            if(maxIdx < lastIdx[i]) {
                maxIdx = lastIdx;
            }
            
            else if(maxIdx > lastIdx) {
            }
        }
    }

int main() {
    string s;
    cin >> s;

    for(int x : partitionLabels(s)) {
        cout << x << " ";
    }
}