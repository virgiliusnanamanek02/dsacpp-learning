// Example of linked lists data structure

#include <iostream>

struct Node
{
    int data;
    Node *next; // pointer to the next node
}; // struct Node

int main()
{
    Node *head = NULL; // head of the list (first node)
    Node *second = NULL; // second node
    Node *third = NULL; // third node

    head = new Node(); // allocate 3 nodes in the heap
    second = new Node(); // allocate 3 nodes in the heap
    third = new Node(); // allocate 3 nodes in the heap

    head->data = 1; // assign data in first node
    head->next = second; // link first node with second

    second->data = 2; // assign data to second node
    second->next = third; // link second node with third

    third->data = 3; // assign data to third node
    third->next = NULL; // terminate the list

    Node *current = head; // start from the first node

    while (current != NULL) // iterate through the list
    { 
        std::cout << current->data << std::endl; // print data of current node
        current = current->next; // move to next node
    }

    return 0;
}
