#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
<접근>
dfs하면서 정점(공항이름) 마다 공항이름 출력
가능한 경로가 2개 이상일 경우 알파벳 순서가 앞서는 경로를 return 한다 -> sort한 뒤에 dfs 수행해주자

예제2를 보면
정답은 I -> A -> I -> S -> A -> S 이고
티켓으로 보면 (I -> A) -> (A -> I) -> (I -> S) -> (S -> A) -> (A -> S) 이므로
공항이름을 방문 순서대로 일단 다 넣고 answer에 담을 때 중복을 피해서 담아주자

<시간복잡도>

*/

void dfs(vector<vector<string> > &tickets, vector<string> &order, vector<bool> &used, string airp)
{
    order.push_back(airp);
    cout << airp << '\n';

    // for (int i = 0; i < tickets.size(); i++)
    // {
        
    // }

    // 출발 airp의 tickets에서의 index를 찾음
        int index;
        for (int j = 0; j < tickets.size(); j++)
        {
            if (tickets[j][0] == airp && !used[j])
            {
                index = j;
                break;
            }
        }

        /*
        (I,A) 1 / A에서 출발하는 티켓이 없으면 break 때문에 끝나버림
        (I,B) 2
        (I,c) 3
        */

        if (!used[index])
        {
            used[index] = true;
            dfs(tickets, order, used, tickets[index][1]);
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<string> > tickets;
    vector<string> answer;

    // 예제1
    /*
    vector<string> t1;
    t1.push_back("ICN");
    t1.push_back("JFK");

    vector<string> t2;
    t2.push_back("HND");
    t2.push_back("IAD");

    vector<string> t3;
    t3.push_back("JFK");
    t3.push_back("HND");

    tickets.push_back(t1);
    tickets.push_back(t2);
    tickets.push_back(t3);
    */

    // 예제 2

    vector<string> t1;
    t1.push_back("ICN");
    t1.push_back("SFO");

    vector<string> t2;
    t2.push_back("ICN");
    t2.push_back("ATL");

    vector<string> t3;
    t3.push_back("SFO");
    t3.push_back("ATL");

    vector<string> t4;
    t3.push_back("ATL");
    t3.push_back("ICN");

    vector<string> t5;
    t3.push_back("ATL");
    t3.push_back("SFO");

    tickets.push_back(t1);
    tickets.push_back(t2);
    tickets.push_back(t3);
    tickets.push_back(t4);
    tickets.push_back(t5);

    sort(tickets.begin(), tickets.end());

    vector<bool> used(tickets.size(), false); // 티켓(airport1 -> airport2) 사용 여부
    vector<string> order;                     // 공항 방문 순서

    dfs(tickets, order, used, "ICN");

    // for(int i=0;i<order.size();i++)
    // {
    //     cout << order[i] << '\n';
    // }
}