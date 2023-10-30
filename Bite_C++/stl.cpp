//#include<iostream>
//
//using namespace std;
//
//template <typename T>
//struct Node
//{
//	T data;
//	Node<T>* next;
//	Node(T data) : data(data), next(nullptr) {}
//};
//
//template <typename T>
//class LinkedList
//{
//	Node<T>* head;
//
//public:
//	LinkedList() : head(nullptr) {}
//
//	void push(T data)
//	{
//		Node<T>* temp = new Node<T>(data);
//		if (!head)
//		{
//			head = temp;
//			return;
//		}
//		
//		Node<T>* current = head;
//		while (current->next != nullptr)
//		{
//			current = current->next;
//		}
//		current->next = temp;
//	}
//	
//	void print()
//	{
//		Node<T>* current = head;
//
//		while (current != nullptr)
//		{
//			cout << current->data << " ";
//			current = current->next;
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	LinkedList<int> list;
//	list.push(10);
//	list.push(20);
//	list.push(30);
//	list.push(40);
//	list.print();
//}