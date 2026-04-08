class Tree {

private:
	struct Tree_Node {
		int key;
		Tree_Node* left;
		Tree_Node* right;

	};
	Tree_Node* root;

public:
	Tree();
	void Tree_insert(int key);
	int Tree_find(int key);
	void Tree_postorder();
	~Tree();
};