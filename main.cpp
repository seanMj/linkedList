#include "linked_list.h"
#include <iostream>
#include <vector>
#include <random>
//just incase i needed randomness
/*
Just practicing data structures until I can afford to buy a book for this topic.
Once I do have a good grasp im going to try and get a job coding :)
*/

int main(){

	Node first, second;
	ptrnode head, tail, ptr;

	first.data  = {1, 2, 5, 6, 7, 11, 45, 66, 22, 11, 401};
	first.link  = &second;
	second.data = {0, 45, 32, 22, 41, 55, 99, 9, 42,  402};	
	second.link = &first;

	//the node of first is the head
	head = &first;
	
        ptr = head;

	tail = &second;
	
        int ii = 0;
	if(ptr != nullptr)
	{
		while(ptr != nullptr)
		{
		    for(auto& i : ptr -> data){
		        std::cout << "head: \t"  << '\t' << head << '\t' << i << '\n';
		    }
		    ptr = tail;
		    for(auto& i : ptr -> data){
			    std::cout << "tail: \t" << '\t' << tail << '\t'<< i << '\n';
	            }
		    ptr = nullptr;			
                    second.link = nullptr;
		}
		//intrestingly, by placing this code below creates an error on runtime execution
		second.link = nullptr;

	}
	else{
		throw std::runtime_error("ptr == nullptr");
	}
}
