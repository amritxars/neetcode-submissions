class Solution {
public:
    bool isAnagram(string s, string t) {
        // =====Brute Force=====
        // if(s.length() != t.length()) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;

        // ======HashMap=======
    //     if(s.length() != t.length()) return false;

    //     unordered_map<char, int> countS;
    //     unordered_map<char, int> countT;

    //     for (int i = 0; i < s.length(); i++) {
    //         countS[s[i]]++;
    //         countT[t[i]]++;
    //     }
    //     return countS == countT;
    
    
        // ======Hash Table=======
        if(s.length() != t.length()){
            return false;
        }

        int freq[26] = {0};

        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        } 

        for(int j=0; j<t.length(); j++){
            freq[t[j]-'a']--;
        } 

        for(int i=0; i<26;i++){
            if(freq[i]!=0) return false;
        }

        return true;

    
    }



};
