#include <iostream>
using namespace std;
#include "LinkList.h"

int main()
{
	LinkList L1;
	L1.createLinkListTail(0);
	cout << 5;
	L1.deleteByPos(5, L1.LinkListLenght());
	Node* p = new Node;
	p = L1.head;
	for (int i = 0; i < L1.LinkListLenght(); i++)
	{
		p = p->next;
		cout << p->data << "  ";
	}
	return 0;
}