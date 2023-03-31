Linked List is the second most used data structure after arrays. A linked list is a type of linear data structure that consists of a series of nodes, each of which has a value and a pointer to the node after it in the chain.
What in C is a Linked List?
A linear data structure is a linked list. Every linked list consists of two sections: the data portion and the address section, which contains the address of the node, the subsequent entry in the list.

The linked list's size is flexible, and data items can be added to the list anywhere. The drawback is that we must travel all the way from the first node in order to reach a node.The Linked List is like an array but unlike an array, it is not stored sequentially in the memory.

The most popular types of a linked list are:

Singly link list- A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.
Doubly link list-Like a singly linked list, a doubly linked list is comprised of a series of nodes. Each node contains data and two links (or pointers) to the next and previous nodes in the list. The head node is the node at the beginning of the list, and the tail node is the node at the end of the list. The head node’s previous pointer is set to null and the tail node’s next pointer is set to null.


When and why using linked lists vs arrays?
Although arrays don't need space for pointers and can be accessed randomly, they are inefficient for memory allocation and insertion/deletion operations. Linked lists, on the other hand, are dynamic and have less temporal complexity for insertion and deletion.

0x12. C - Singly linked lists
Task 0 -Print list Write a function that prints all the elements of a list_t list.
Task 1 -List length Write a function that returns the number of elements in a linked list_t list.
Task 2 -Add node Write a function that adds a new node at the beginning of a list_t list.
Task 3 -Add node at the end Write a function that adds a new node at the end of a list_t list.
Task 4 -Free list Write a function that frees a list_t list.
Task 5 -The Hare and the Tortoise Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

