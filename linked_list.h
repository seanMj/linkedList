//#ifdef LINKED_LIST_H
//#define LINKED_LIST_H
#include <vector>

typedef struct node Node;
typedef Node *ptrnode;

struct node{
	std::vector<int> data {0};
	ptrnode link;
};
//#endif
