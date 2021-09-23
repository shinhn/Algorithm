#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
		
	queue<int> Q;

	int N;
	cin >> N;
	
	while(N--){
		string str;
		cin >> str;
		
		if(str=="push"){
			int X;
			cin >> X;
			Q.push(X);
		}
		
		else if(str=="pop"){
			if(!Q.empty()){
				cout << Q.front() << "\n";
				Q.pop();
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="size"){
			cout << Q.size() << "\n";
		}
		
		else if(str=="empty"){
			cout << Q.empty() << "\n";
		}
		
		else if(str=="front"){
			if(!Q.empty()){
				cout << Q.front() << "\n";	
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="back"){
			if(!Q.empty()){
				cout << Q.back() << "\n";	
			}
			else
				cout << "-1\n";
		}
		
	}
	
	return 0;
}