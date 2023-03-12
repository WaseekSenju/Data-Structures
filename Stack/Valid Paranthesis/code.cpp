Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Input: s = "()[]{}"
Output: true

// This was quite easy

class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) return false;
        
        stack<char> stack;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] =='['){
                stack.push(s[i]);
            }
            else if(s[i] == ')' && !stack.empty() && stack.top() == '('){
                stack.pop();
            }
            else if(s[i] == '}' && !stack.empty() && stack.top() == '{'){
                stack.pop();
            }else if(s[i] == ']' && !stack.empty() && stack.top() == '['){
                stack.pop();
            }
            else{
                return false;
            }
        }
       
     return stack.empty();

    }
};