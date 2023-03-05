// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
//and removing all non-alphanumeric characters, it reads the same forward and backward. 
//Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0 ; 
        int j = s.size() -1 ;

        while(i < j){
            //this skips a character when it's not alphanumeric from left 
            while(!isalnum(s[i])&& i<j){
                i++;
            }
            //this skips a character when it's not alphanumeric from right 
            while(!isalnum(s[j])&& i<j){
                j--;
            }
            
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
};