#include <iostream>
using namespace std;

struct node {
	int data;
	node * next;
};

inline void keep_window_open()
{
	cin.get();
}

int main()
{
	node *head, *p, *q;
	int n, i;

	cout << "\ninput n:";
	cin >> n;

	head = p = new node;
	p->data = 0;
	for (i = 1; i < n; ++i) {
		q = new node;
		q->data = i;
		p->next = q;
		p = q;
	}
	p->next = head;

	q = head;
	while (q->next != q) {
		p = q->next;
		delete q;
		q = p->next;
		p->next = q->next;
	}

	cout << "\nFinally: " << q->data << endl;
	keep_window_open();
	return 0;

}
