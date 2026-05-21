#include"Tree.h"
#include<iostream>
using namespace std;
Tree::Tree() :root(NULL){}//构造函数
void Tree::Tree_insert(int key)//左小右大
{
	if (!root)
	{
		root = new Tree_Node(key);
	}
	Tree_Node* p = root;
	while (true)
	{
		if (key < p->key)
		{
			if (!p->left)
			{
				p->left = new Tree_Node{ key };
				return;
			}
		}
		else {
			if (!p->right)
			{
				p->right = new Tree_Node{ key };
			}
		}
	}
}
int Tree::Tree_find(int key)
{
	Tree_Node* p = root;
	while (true)
	{
		if (p->key == key)
		{
			return 1;
		}
		if (p->key < key)
		{
			p = root->left;
		}
		else {
			p = root->right;
		}
	}
}
void Tree::Tree_postorder()
{



}
Tree::~Tree()
{
	delete root;
}