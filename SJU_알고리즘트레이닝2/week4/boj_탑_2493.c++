#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int n, h;
stack<pair<int, int> > st; // 위치, 높이

int main(){

    cin >> n;
    int ans[n+1];

    cin >> h;
    st.push(make_pair(1,h));
    ans[1] = 0;

    for(int i=2;i<=n;i++){

        cin >> h;

        if(h < st.top().second){
            ans[i] = st.top().first;
            st.push(make_pair(i,h));
        }
        else{ // 판별
            while(!st.empty()){
                if(h < st.top().second) break;
                st.pop();
            }

            if(!st.empty()){
                ans[i] = st.top().first;
            }
            else{
                ans[i] = 0;
            }

            st.push(make_pair(i,h));
        }
    }

    for(int i=1;i<=n;i++){
        cout << ans[i] << " ";
    }

    



    return 0;
}