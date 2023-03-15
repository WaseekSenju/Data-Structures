// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        
        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
                
            //if string is a number convert it to int and pust to stack
            if (token.size() > 1 || isdigit(token[0])) {
                stk.push(stoi(token));
                continue;
            }
            
            int num2 = stk.top();
            stk.pop();
            int num1 = stk.top();
            stk.pop();
            
            int result = 0;
            if (token == "+") {
                result = num1 + num2;
            } else if (token == "-") {
                result = num1 - num2;
            } else if (token == "*") {
                result = num1 * num2;
            } else {
                result = num1 / num2;
            }
            stk.push(result);
        }
        
        return stk.top();
    }
};




// My solution worked perfectly but didn't work for one edge case
class Solution {

public:
    int evalRPN(vector<string>& tokens) {
        std::stack<string>stack;
        stack.push(tokens[0]);
        for(int i = 1 ; i < tokens.size(); i++){
            if(tokens[i] == "/" || tokens[i] == "*" ||tokens[i] == "+" ||tokens[i] == "-"){
                string a_s = stack.top();
                stack.pop();
                string b_s = stack.top();
                stack.pop();
                
                int a = stringToNum(a_s);
                int b = stringToNum(b_s);

                long int answer = operation(a,b,tokens[i][0]);
                auto s = std::to_string(answer);
                stack.push(s);
            }else{
                stack.push(tokens[i]);
            }  
        }
        return stringToNum(stack.top());
    }
        int operation(int b, int a , char op){
        switch(op){
            case '+':
            return a+b;
            case '/':
            return a/b;
            case '*':
            return a*b;
            case '-':
            return a-b;
        }
        return -1;
    }

    long int stringToNum(string s){
        int units = 1;
        int size = s.length();
        long int number = 0;
        // if number is a single digit 
        if (size == 1){
            return int(s[0]-'0');
        }

        if( size == 2 && s[0] == '-'){
            return int(s[1] - '0') * -1;
        }
        
        
        if( s[0] == '-'){
         for(int i = size-1 ; i>0 ; i--){
         number += int(s[i]-'0') * units;
         units = units * 10;
        }
        return number * (-1);
        }else{
        for(int i = size-1 ; i>=0 ; i--){
            number += int(s[i]-'0') * units;
            units = units * 10;
        }
         return number;
        }


       
        return -1;
    }


};