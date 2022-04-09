#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

class LinkList
{
public:
	LinkList();
	~LinkList();
	//头插法
	void createLinkListTail(int n);
	//尾插法
	void createLinkListHead(int n);
	//销毁
	void deleteList();
	//求链表长度
	int LinkListLenght();
	//根据次序取元素
	int getByIndex(int i);
	//```````````````````````````````````````````````````````
	//在i前插入x
	void insertBefore(int i,int x,int size);
	//'''''''''''''''''''''''''''''''''''''''''''''''''''''
	//查找链表中元素的节点
	Node* searchEle(int x);
	//-----------------------------------------------------
	//删除第i个位置的元素节点
	void deleteByPos(int n,int size);
	//-----------------------------------------------------
	//递增单链插入值保持递增
	bool insertAdd(int x);
	//-------------------------------------------------
	//奇偶单链分离
	void desprateOddAndDoub(LinkList* Odd,LinkList* Double);

	Node *head;
};

