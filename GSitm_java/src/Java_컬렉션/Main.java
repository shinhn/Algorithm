package Java_컬렉션;

import java.util.Stack;

class Main
{
    public static void main(String[] args)
    {
        Stack<String> stack = new Stack<String>();

        stack.push("A");    // Stack에 `A` 삽입
        stack.push("B");    // Stack에 `B` 삽입
        stack.push("C");    // Stack에 `C` 삽입
        stack.push("D");    // Stack에 `D` 삽입

        // Stack의 맨 위(`D`)를 인쇄합니다.
        System.out.println("The top element is " + stack.peek());

        stack.pop();        // 최상위 요소 제거(`D`)
        stack.pop();        // 다음 상단 제거(`C`)

        // Stack에 있는 요소의 총 개수를 반환합니다.
        System.out.println("The stack size is " + stack.size());

        // Stack이 비어 있는지 확인
        if (stack.empty()) {
            System.out.println("The stack is empty");
        }
        else {
            System.out.println("The stack is not empty");
        }
    }
}
