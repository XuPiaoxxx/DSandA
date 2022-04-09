#include "LinkList.h"

LinkList::LinkList(){
	head = new Node;
	head->data = NULL;
	head->next = nullptr;
}

LinkList::~LinkList() {

}

void LinkList::createLinkListTail(int n){

	if (n < 0) {
		cout << "������������" << endl;
			return;
	}

	int a = NULL;
	Node* ptr = head;
	for (int i = 0; i < n; i++) {
	Node *Newnode = new Node;
	cout << "�������" << i + 1 << "������ֵ��" << endl;
	cin >> a;
	Newnode->data = a;
	Newnode->next = ptr->next;
	ptr->next = Newnode;
	ptr = ptr->next;
	}
}

void LinkList::createLinkListHead(int n){
	
	if (n < 0) {
		cout << "������������"<<endl;
			return;
	}

	int a = NULL;
	for (int i = 0; i < n; i++)
	{
		Node* Newnode = new Node;
		cout << "�������" << i + 1 << "������ֵ��" << endl;
		cin >> a;
		Newnode->data = a;
		Newnode->next = head->next;
		head->next = Newnode;
	}
}
void LinkList::deleteList() {

	Node* ptr;
	Node* L =head;

	if (L == NULL)
	{
		cout << "����Ϊ�գ�" << endl;
		return;
	}
		if (L != NULL)
		{
			ptr = L;
			L = L->next;
			delete(ptr);
		}
		delete L;
		L = NULL;
	cout << "������ϡ�" << endl;
		

}
int LinkList::LinkListLenght() {
	int flag = 0;
	Node* ptr =head->next;
	while (ptr != nullptr)
	{
		flag++;
		ptr = ptr->next;
	}
	return flag;
}
int LinkList::getByIndex(int n) {
	if (n <= 0 || n > this->LinkListLenght())
	{
		cout << "����n����";
		return 0;
		
	}

	Node* ptr = head;
	for (int i = 0; i < n; i++)
	{
		ptr = ptr->next;
	}
	return ptr->data;
}

void LinkList::insertBefore(int i, int x,int size)
{
	Node* L = head;
	Node* cur = new Node;
	cur->data = x;
	cur->next = nullptr;
	if (L->next == NULL)
	{
		cout << "����Ϊ�գ�" << endl;
		return;
	}
	if (i <= 0 || i > size)
	{
		cout << "�Ҳ�����" << i << "��λ�á�" << endl;
		return;
	}
	for (int a = 0; a < i - 2; a++)
	{
		L = L->next;
	}
	cur->next = L->next;
	L->next = cur;
}

Node* LinkList::searchEle(int x)
{
	Node* L = head;
	while (L->next != NULL)
	{
		L = L->next;
		if (L->data == x)
		{
			cout << "�ҵ��ڵ�,�ѷ��ء�" << endl;
			return L;
		}
	}
		cout << "δ�ҵ���" << endl;
		return NULL;
}

void LinkList::deleteByPos(int n,int size)
{
	Node* L = head;
	if (L->next == NULL)
	{
		cout << "����Ϊ�գ�" << endl;
		return;
	}
	if (n<=0 || n>size)
	{
		cout << "�����λ�ô���" << endl;
		return;
	}
	for (int i = 0; i < n - 1; i++)
	{
		L = L->next;
	}
	Node* cur = L->next;
	L->next = cur->next;
	delete cur;
	cout << "ɾ���ɹ���" << endl;
}

bool LinkList::insertAdd(int x)
{
	Node* L = head;
	Node* NowNode = new Node;
	NowNode->data = x;
	NowNode->next = nullptr;
	
	if (L == nullptr)
	{
		cout << "������" << endl;
		return false;
	}
	Node* cur = L->next;
	if (x <= cur->data)
	{
		NowNode->next = L->next;
		L->next = NowNode;
		return true;
	}

	L = L->next;
	while (L->next!=nullptr)
	{
		if (x >= L->data && x <= L->next->data)
			{
			NowNode->next = L->next;
			L->next = NowNode;
			return true;
			}
		L = L->next;
	}

	NowNode->next = L->next;
	L->next = NowNode;
	return true;
}

void LinkList::desprateOddAndDoub(LinkList* Odd, LinkList* Double)
{

	Node* L = head->next;
	if (L == nullptr)
	{
		cout << "������!" << endl;
		return;
	}
	Node* OddNode = Odd->head;
	Node* DoubleNode = Double->head;
	while (L != nullptr)
	{
		if (L->data % 2 != 0)
		{
			Node* newOdd = new Node;
			newOdd->data = L->data;
			newOdd->next = OddNode->next;
			OddNode->next = newOdd;
			OddNode = OddNode->next;
		}
		else if (L->data % 2 == 0)
		{
			Node* newDouble = new Node;
			newDouble->data = L->data;
			newDouble->next = DoubleNode->next;
			DoubleNode->next = newDouble;
			DoubleNode = DoubleNode->next;
		}
		L = L->next;
	}
}
