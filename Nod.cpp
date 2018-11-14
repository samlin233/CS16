#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* creatsmallLinkedListWrong(int x, int y){

	Node* head = NULL;//empty linked list
	Node n1 = {x,NULL};
	Node n2 = {y,NULL};
	n1.next = &n2;
	head = &n1;
	return head;
}//程序结束后，此段数据存储在stack会自动删除

struct LinkedList{
	Node* head;
	Node* tail;
};



//Node* creatsmallLinkedList(int x,int y){
//	
//	Node* head = NULL;//empty start linked list, Node指针head暂无指向
//	head = new Node;//指针head指向heap中的新Node
//	head -> data = x;//heap中new Node值改变
//	head -> next = new Node;
//	head -> next->data = y;
//	head -> next -> next = NULL;
//	return head;
//}//此处程序结束后因为new而存入了heap，程序结束后数据不会自动删除

LinkedList* creatsmallLinkedList(int x,int y){
	
	LinkedList* newList = new LinkedList;
	newList -> head = NULL;
	newList -> tail = NULL;
	Node* head = NULL;
	head = new Node;
	head -> data = x;
	head -> next = new Node;
	head -> next->data = y;
	head -> next -> next = NULL;
	newList -> head = head;
	newList -> tail = head->next;
	return newList;
}


Node* insertNode(Node* head,int x){
	//Adds a new node with data x at the head of the list
	//returns the new head of the list
	Node* p = new Node;
	p->data = x;
	p->next = head;
	return p;
}

void insertNode(LinkedList* list,int x){
	//Adds a new node with data x at the head of the list
	//returns the new head of the list
	Node* p = new Node;
	p->data = x;
	p->next = list->head;
	if(list->head == NULL){
		list->tail = p;
	}
	list->head = p;
}

void insertList(LinkedList* list, int x){
	Node *p = new Node;
	p->data=x;
	p->next=NULL;
	if(list->head){
	list->tail->next = p;
	}
	else{
		list->head =p;
	}
	list->tail = p;
}
void freeList(LinkedList* list){
//free all the nodes in the linked list
	Node *p = list->head;
//	if(p){
//		freeList(p);
//		delete p;
//	}
	
	while(p){
		Node* tmp = p;
		p = p->next;
		delete tmp;
	}
	//DO this step and stop if you are only clearing the list*
	list -> head = NULL;
	list -> tail = NULL;
	//otherwise
	delete list;
}

void printLinkedList(LinkedList* list){
	Node* p = list->head;
	while (p){
		cout<<p->data<<endl;
		p = p->next;
	}

}

int main(){
	LinkedList* newlist = creatsmallLinkedList(10,20);
	cout<<"Initial two node List with values 10,20:"<<endl;
	printLinkedList(newlist);
	newlist = insertList(newlist,30);
	cout<<"Initial Lisr after adding 30 to the head"<<endl;
	printLinkedList(newlist);
	freeList(newlist);
	return 0;
}
