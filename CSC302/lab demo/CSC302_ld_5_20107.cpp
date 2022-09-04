#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Tree
{
public:
	T data;
	vector<Tree<T> *> children;
	Tree(T data)
	{
		this->data = data;
	}
	~Tree()
	{
		for (int i = 0; i < children.size(); i++)
			delete children[i];
	}
};
Tree<int> *takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	Tree<int> *root = new Tree<int>(rootData);
	queue<Tree<int> *> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
	{
		Tree<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++)
		{
			cout << "Enter the data of no. " << i + 1 << " child of node " << front->data << endl;
			int childData;
			cin >> childData;
			Tree<int> *child = new Tree<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}
void printTreeLevelWise(Tree<int> *root)
{
	queue<Tree<int> *> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
	{
		Tree<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout << front->data << ":";
		int count = front->children.size();
		if (count == 0)
			cout << endl;
		else
		{
			for (int i = 0; i < count - 1; i++)
			{
				cout << front->children[i]->data << ",";
				pendingNodes.push(front->children[i]);
			}
			cout << front->children[count - 1]->data << endl;
			pendingNodes.push(front->children[count - 1]);
		}
	}
}
int numNodes(Tree<int> *root)
{
	if (root == NULL)
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	int ans = 1;
	for (int i = 0; i < root->children.size(); i++)
		ans += numNodes(root->children[i]);
	return ans;
}
int heightOfTree(Tree<int> *root)
{
	if (root == NULL)
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	int height = 0;
	if (root->children.size() == 0)
		return height + 1;
	else
	{
		int arr[root->children.size()];
		for (int i = 0; i < root->children.size(); i++)
			arr[i] = heightOfTree(root->children[i]);
		sort(arr, arr + root->children.size());
		height = +arr[root->children.size() - 1];
		return height + 1;
	}
}
int leaf(Tree<int> *root)
{
	if (root == NULL)
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	int sum = 0;
	if (root->children.size() == 0)
	{
		sum++;
		return sum;
	}
	else
	{
		for (int i = 0; i < root->children.size(); i++)
			sum += leaf(root->children[i]);
		return sum;
	}
}
int sumNodes(Tree<int> *root)
{
	if (root == NULL)
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	int sum = root->data;
	for (int i = 0; i < root->children.size(); i++)
		sum += sumNodes(root->children[i]);
	return sum;
}
int largestNode(Tree<int> *root)
{
	if (root == NULL)
	{
		cout << "Tree is empty" << endl;
		return 0;
	}
	int nodeData = root->data;
	for (int i = 0; i < root->children.size(); i++)
	{
		int temp = largestNode(root->children[i]);
		if (temp > nodeData)
			nodeData = temp;
	}
	return nodeData;
}
Tree<int> *takeInput()
{
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	Tree<int> *root = new Tree<int>(rootData);
	int n;
	cout << "Enter number of children " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
		root->children.push_back(takeInput());
	return root;
}
void preorder(Tree<int> *root)
{
	if (root == NULL)
		return;
	cout << root->data << " ";
	for (int i = 0; i < root->children.size(); i++)
		preorder(root->children[i]);
}
void postorder(Tree<int> *root)
{
	if (root == NULL)
		return;
	for (int i = 0; i < root->children.size(); i++)
		postorder(root->children[i]);
	cout << root->data << " ";
}
void deleteTree(Tree<int> *root)
{
	for (int i = 0; i < root->children.size(); i++)
		deleteTree(root->children[i]);
	delete root;
}
void printTree(Tree<int> *root)
{
	if (root == NULL)
		return;
	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++)
		cout << root->children[i]->data << ",";
	cout << endl;
	for (int i = 0; i < root->children.size(); i++)
		printTree(root->children[i]);
}
bool searchTree(Tree<int> *root, int data)
{
	if (root->data == data)
		return true;
	for (int i = 0; i < root->children.size(); i++)
	{
		bool res = searchTree(root->children[i], data);
		if (res == true)
		{
			return true;
			break;
		}
	}
	return false;
}
Tree<int> *sumOfNode(Tree<int> *root)
{
	int sum = 0;
	Tree<int> *node = root;
	sum += root->data;
	for (int i = 0; i < root->children.size(); i++)
		sum += root->children[i]->data;
	for (int i = 0; i < root->children.size(); i++)
	{
		Tree<int> *temp;
		temp = sumOfNode(root->children[i]);
		int ans = temp->data;
		for (int j = 0; j < temp->children.size(); j++)
			ans += temp->children[j]->data;
		if (ans > sum)
		{
			node = temp;
			sum = ans;
		}
	}
	return node;
}
int gretarThan(Tree<int> *root, int data)
{
	int sum = 0;
	if (root->data > data)
		sum++;
	for (int i = 0; i < root->children.size(); i++)
		sum += gretarThan(root->children[i], data);
	return sum;
}
bool indenticalTree(Tree<int> *root1, Tree<int> *root2)
{
	if (root1->data == root2->data)
	{
		for (int i = 0; i < root1->children.size(); i++)
		{
			bool temp;
			temp = indenticalTree(root1->children[i], root2->children[i]);
			if (temp == false)
				return false;
		}
		return true;
	}
	else
		return false;
}
Tree<int> *justGreaterThan(Tree<int> *root, int num)
{
	int temp = 0;
	Tree<int> *Node = NULL;
	if (root->data > num)
	{
		temp = root->data;
		Node = root;
	}
	for (int i = 0; i < root->children.size(); i++)
	{
		Tree<int> *ans;
		ans = justGreaterThan(root->children[i], num);
		if (ans == NULL)
		{
		}
		else
		{

			if (ans->data > num)
			{
				if (temp == 0)
				{
					temp = ans->data;
					Node = ans;
				}
				else if (ans->data < temp)
				{
					temp = ans->data;
					Node = ans;
				}
			}
		}
	}
	return Node;
}
int secondLargestValue(Tree<int> *root)
{
	static int largest = largestNode(root);

	int temp = 0;
	if (root->data < largest)
	{
		temp = root->data;
	}
	for (int i = 0; i < root->children.size(); i++)
	{
		int ans = secondLargestValue(root->children[i]);
		if (temp < ans && ans != largest)
		{
			temp = ans;
		}
	}
	return temp;
}
int main()
{

	Tree<int> *root = takeInputLevelWise();
	printTreeLevelWise(root);
	delete root;
	return 0;
}