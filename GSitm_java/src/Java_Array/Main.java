package Java_Array;

class Main {
    public static void main (String[] args)
    {
        Stack stack = new Stack(3);

        stack.push(1);      // Stack에 1 삽입
        stack.push(2);      // Stack에 2 삽입

        stack.pop();        // 상단 요소 제거(2)
        stack.pop();        // 최상위 요소 제거(1)

        stack.push(3);      // Stack에 3 삽입

        System.out.println("The top element is " + stack.peek());
        System.out.println("The stack size is " + stack.size());

        stack.pop();        // 최상위 요소 제거(3)

        // Stack이 비어 있는지 확인
        if (stack.isEmpty()) {
            System.out.println("The stack is empty");
        }
        else {
            System.out.println("The stack is not empty");
        }
    }
}
