class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        int answer[26] = {};

        for(int i = 0 ; i < s.length();i++){
            //lets say s[i] is f. Then f - a will be 102 - 97 = 5. It wil always remain in 0-25 range.
            answer[s[i] - 'a']++;
            answer[t[i] - 'a']--;
        }

        for(int i = 0 ; i < s.length();i++){
            if(answer[i] != 0){
                return false;
            }
        }
        return true;
    }
};

