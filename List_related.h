#pragma once
class List_related
{
private:
	struct Node
	{
		int data;
		Node* Nodenext;
	};
	Node* head;
public:
	List_related();
	//你和容易搞乱变量的类型记住是结构体指针
//(>^ω^<)喵
	void insertHead(int value);//头插法
	void insertTail(int value);//这是尾插法(>^ω^<)喵
	void insertMiddle(int value, int postion);//这是指定插入的地方
	void printList();//print链表
	void deleteHead();//头删法
	void deleteMidle(int postion);//删除中间的节点
	void deleteTail();//尾删法
	void deleteList();//整表删除
	//应该把析构函数给作为deleteList,这么写不规范
};
