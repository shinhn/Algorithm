package Stack.프로그래머스_같은숫자는싫어;

import java.util.*;

public class Solution {
    public List<Integer> solution(int []arr) {
        List<Integer> answer = new ArrayList<>();

        Stack<Integer> stack = new Stack<>();
        for(int i=arr.length-1;i>=0;i--){
            if(stack.empty()){
                stack.push(arr[i]);
                continue;
            }

            if(stack.peek() != arr[i]){
                stack.push(arr[i]);
            }
        }

        while(!stack.empty()){
            answer.add(stack.pop());
        }

        return answer;
    }
}
