package com.example.java.Stack;

import java.util.LinkedList;
import java.util.Queue;

public class Solution2 {
    public static int timeRequiredToBy(int[] tickets, int k) {
        int time = 0;
        Queue<Integer> que = new LinkedList<Integer>();

        for (int i = 0; i < tickets.length; i++) {
            que.add(tickets[i]);
        }

        while (!que.isEmpty()) {
            int t = que.poll();
            if (k != 0) {
                if (t - 1 != 0) que.add(t - 1);
                k--;
            } else {
                if (t - 1 != 0) {
                    que.add(t - 1);
                    k = que.size() - 1;
                } else {
                    return time + 1;
                }
            }
            time++;
        }

        return time;
    }
}
