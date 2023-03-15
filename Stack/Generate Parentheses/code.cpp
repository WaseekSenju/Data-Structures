// This is recursive solution and it uses backtrackign approach and uses the string as a stack,


class Solution {

public:
   // global variables that will be modifed by the wrapper function
    vector<string> result;
    string stack;
    void wrapperGenerator(int openCount, int closeCount , int n){
       
        // if all valid brackets have occured 
        if(n == openCount && n == closeCount ){
            return result.push_back(stack);
        }


        if (openCount < n){
            stack.append("(");
            wrapperGenerator(openCount +1, closeCount , n );
            stack.pop_back(); 
        }
        if(closeCount<openCount){
            stack.append(")");
            wrapperGenerator(openCount , closeCount +1 , n);
            stack.pop_back();
        }


    }

    vector<string> generateParenthesis(int n) {
        wrapperGenerator(0 , 0 , n);
        return result;

    }


};