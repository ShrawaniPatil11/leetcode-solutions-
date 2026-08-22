class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26,0);

        for(char c : magazine){
            freq[c-'a']++;
        }

        for(char s :ransomNote ){
            freq[s-'a']--;

            if(freq[s-'a'] <0){
                return false;
            }

        }

        return true;
        
    }
};