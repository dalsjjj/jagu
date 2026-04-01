#pragma once
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList_h(linkedList_h* L);
void insertFirstNode_h(linkedList_h* L, char* x);
void insertMiddleNode_h(linkedList_h* L, listNode* pre, char* x);
void insertLastNode_h(linkedList_h* L, char* x);
void deleteNode_h(linkedList_h* L, listNode* p);
listNode* searchNode(linkedList_h* L, char* x);
void reverse(linkedList_h* L);
