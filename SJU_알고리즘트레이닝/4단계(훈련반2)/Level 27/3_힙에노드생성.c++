#include <iostream>
using namespace std;

struct Node
{
	int num;
	Node *next;
};

Node *head;
Node *last;

void addNode(int num)
{
	if (head == NULL) {
		head = new Node();
		head->num = num;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->num = num;
	}
}

int main()
{
	int input;
	cin >> input;
	
	for (int i = 1; i <= 4; i++) {
		addNode(i * input);
	}
	
	Node *p = head;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next; 
	}

	return 0; 
}