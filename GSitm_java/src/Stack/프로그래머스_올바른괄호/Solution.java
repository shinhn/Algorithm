package Stack.프로그래머스_올바른괄호;

import java.util.Stack;

class Solution {
    boolean solution(String s) {
        boolean answer = true;

        Stack<Character> stack = new Stack<>();

        if(s.charAt(0) == ')' || s.charAt(s.length()-1) == '(') return false;


        for(int i=0;i<s.length();i++){

            if(s.charAt(i) == '('){
                stack.push(s.charAt(i));
            }
            else{
                if(stack.empty()) return false;
                else{
                    stack.pop();
                }
            }
        }

        if(stack.empty()) answer = true;
        else answer = false;

        return answer;
    }
}
