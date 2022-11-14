package com.example.java.Stack;

import java.util.Stack;

public class Solution1 {
    public static int maxDepth(String s) {
        int depth = 0;
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push('(');
                if(depth < stack.size()) depth = stack.size();
            }
            if (s.charAt(i) == ')') {
                stack.pop();
            }
        }

        return depth;
    }
}
