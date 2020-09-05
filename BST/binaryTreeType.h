#pragma once
class binaryTreeType {
public:
	const binaryTreeType<int>& operator=(const binaryTreeType<int>&);
	bool isEmpty() const;
	void inorderTraversal const;
	void preorderTraversal() const;
	void postorderTraversal() const;
	int treeHeight() const;
	int treeNodeCount() const;
	int treeLeavesCount();
	void destroyTree();
	binaryTreeType(const binaryTreeType<int>& otherTree);
	binaryTreeType();
	~binaryTreeType();
protected:
	binaryTreeNode<int>* root;
private:
	void copyTree(binaryTreeNode<int>*& copiedTreeRoot,
		binaryTreeNode<int>* otherTreeRoot);
	void destroy(binaryTreeNode<int>*& p);
	void inorder(binaryTreeNode<int>* p) const;
	void preorder(binaryTreeNode<int>* p) const;
	void postorder(binaryTreeNode<int>* p) const;
	void postorder(binaryTreeNode<int>* p) const;
	int height(binaryTreeNode<int>* p) const;
	int max(int x, int y) const;
	int nodeCount(binaryTreeNode<int>* p) const;
	int leavesCount(binaryTreeNode<int>* p) const;

};
