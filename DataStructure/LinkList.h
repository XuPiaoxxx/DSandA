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
	//ͷ�巨
	void createLinkListTail(int n);
	//β�巨
	void createLinkListHead(int n);
	//����
	void deleteList();
	//��������
	int LinkListLenght();
	//���ݴ���ȡԪ��
	int getByIndex(int i);
	//```````````````````````````````````````````````````````
	//��iǰ����x
	void insertBefore(int i,int x,int size);
	//'''''''''''''''''''''''''''''''''''''''''''''''''''''
	//����������Ԫ�صĽڵ�
	Node* searchEle(int x);
	//-----------------------------------------------------
	//ɾ����i��λ�õ�Ԫ�ؽڵ�
	void deleteByPos(int n,int size);
	//-----------------------------------------------------
	//������������ֵ���ֵ���
	bool insertAdd(int x);
	//-------------------------------------------------
	//��ż��������
	void desprateOddAndDoub(LinkList* Odd,LinkList* Double);

	Node *head;
};

