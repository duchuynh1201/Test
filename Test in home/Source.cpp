#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* createListNode(int* arr, int n) {
	Node* list = nullptr, * cur = list;
	for (int i = 0; i < n; i++) {
		if (cur == nullptr)
			cur = new Node;
		else {
			cur->next = new Node;
			cur = cur->next;
		}
		cur->data = arr[i];
	}
}

void displayListNode(Node* list) {
	Node* cur = list;
	while (cur != nullptr) {
		cout << cur->data << " ";
		cur = cur->next;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	Node* list = createListNode(arr, 7);
	displayListNode(list);

	return 0;
}