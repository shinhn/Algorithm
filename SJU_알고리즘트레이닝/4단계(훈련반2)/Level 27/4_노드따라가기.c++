#include <iostream>
using namespace std;

struct Node
{
	char ch;
	Node *next;
};

Node *head;
Node *last;

void addNode(char alp)
{
	if (head == NULL) {
		head = new Node();
		head->ch = alp;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->ch = alp;
	}
}

int main()
{
	int input;
	cin >> input;
	
	for (int i = 0; i < 4; i++) {
		addNode(char('A' + input - 11 + i));
	}
	
	Node *p = head;
	while (p != NULL) {
		cout << p->ch;
		p = p->next; 
	}

	return 0; 
}