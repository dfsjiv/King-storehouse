#include<iostream>
#include"List_related.h"
using namespace std;

List_related::List_related():head(NULL) {};

void List_related::deleteHead()//头删
{
	if (head == NULL)
	{
		cout << "这个链表是空的" << endl;
		return;
	}
	else {
		Node* temp = head;
		head = temp->Nodenext;
		delete temp;
	}
}

void List_related::deleteMidle(int postion)
{
	if (head == NULL)
	{
		cout << "这个链表是空的" << endl;
		return;
	}
	else {
		if (postion == 0)
		{
			deleteHead();
			return;
		}
		else {
			Node* temp = head;
			//这里是检查postion的前一位如果temp->NULL说明县一位空，无法删除,如果temp=NULL该位置为空，也没法删
			for (int i = 0; i < postion - 1 && temp != NULL; i++)
			{
				temp = temp->Nodenext;
			}
			if (temp == NULL || temp->Nodenext == NULL)
			{
				cout << "该节点不存在" << endl;
			}
			//这里意思是
			Node* deleteNode = temp->Nodenext;
			temp->Nodenext = deleteNode->Nodenext;
			delete deleteNode;
		}
	}
}

void List_related::deleteTail()//尾删法
{
	if (head == NULL)
	{
		cout << "这链表为空" << endl;
		return;
	}
	if (head->Nodenext == NULL)
	{
		delete head;
		return;
	}
	Node* temp = head;
	while (temp->Nodenext != NULL)
	{
		temp = temp->Nodenext;
	}
	delete temp->Nodenext;
	temp->Nodenext = NULL;
}

void List_related::deleteList()
{
	Node* current = head;
	while (current != NULL)
	{
		Node* next = current->Nodenext;
		delete current;
		current = next;
	}
	head = NULL;
}

void List_related::printList()//创建链表
{
	Node* current = head;
	while (current != NULL)
	{
		cout << current->data;
		if (current->Nodenext != NULL)cout << "->";
		current = current->Nodenext;
	}
}

void List_related::insertTail(int value)//尾插法
{
	//新建节点
	Node* newNode = new Node;
	newNode->data = value;
	newNode->Nodenext = NULL;
	//接下来是找到节点
	if (head == NULL)
	{
		newNode = head;
	}
	else {
		Node* current = head;
		while (current->Nodenext != NULL)
		{
			current = current->Nodenext;
		}
		current->Nodenext = newNode;
	}
}
void List_related::insertMiddle(int value, int postion)//中间插法
{
	//先创建一个节点
	Node* newNode = new Node;
	newNode->data = value;
	//看位子

	if (head == NULL || postion == 0)
	{
		newNode->Nodenext = head;
		head = newNode;
		return;
	}
	else {
		Node* temp = head;
		for (int i = 0; i < postion; i++)
		{
			temp = temp->Nodenext;
		}
		if (temp == NULL)
		{
			cout << "超出范围，请用尾插(如果你非要插入的话)" << endl;
			delete newNode;
			return;
		}
		else {
			newNode->Nodenext = temp->Nodenext;
			temp->Nodenext = newNode;
		}
	}
}
void List_related::insertHead(int value)//头插法
{
	//创建链表
	Node* newNode = new Node;
	newNode->data = value;
	newNode->Nodenext = NULL;
	//连接起来
	newNode->Nodenext = head;
	head = newNode;
}