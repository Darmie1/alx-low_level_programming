SINGLY LINKED LISTS

A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.
Linked List is a linear data structure, in which elements are not stored at a contiguous location, rather they are linked using pointers. Linked List forms a series of connected nodes, where each node stores the data and the address of the next node.
Node Structure: A node in a linked list typically consists of two components:
Data: It holds the actual value or data associated with the node.
Next Pointer: It stores the memory address (reference) of the next node in the sequence.
Head and Tail: The linked list is accessed through the head node, which points to the first node in the list. The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node
Types of linked lists: 
There are mainly three types of linked lists:


**Single-linked list
**Double linked list
**Circular linked list

1. Single-linked list:
In a singly linked list, each node contains a reference to the next node in the sequence. Traversing a singly linked list is done in a forward direction.
2. Double-linked list:
In a doubly linked list, each node contains references to both the next and previous nodes. This allows for traversal in both forward and backward directions, but it requires additional memory for the backward reference.

3. Circular linked list:
 In a circular linked list, the last node points back to the head node, creating a circular structure. It can be either singly or doubly linked.

Singlylinked.
