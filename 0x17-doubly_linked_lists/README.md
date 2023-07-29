0x17-doubly_linked_lists

------------------------------------------------------------------------------------------------------

A doubly linked list is a type of linked list in which each node contains a reference to the previous node in the list and a reference to the next node. This is in contrast to a singly linked list, where each node only contains a reference to the next node.

Each node in a doubly linked list typically contains two fields, one for storing data (such as integers, strings, etc.), and two pointers that link to the previous and the next node in the sequence.

The start of the list is known as the head, and the end is known as the tail. In a doubly linked list, you can traverse both forwards and backwards, starting from either the head or the tail, which provides greater flexibility than a singly linked list.

However, this comes at the cost of additional memory to store the extra pointer in each node, and more complexity in the code to handle updating of the extra pointers. Operations like insertions and deletions are typically more complex in doubly linked lists than in singly linked lists because more links must be changed.

Here's a simplified representation of a node in a doubly linked list:

```
Node {
    Node* prev;  // pointer to the previous node
    Data data;   // the data the node holds
    Node* next;  // pointer to the next node
}
```

Where `Data` is a placeholder for any type of data, such as an `int`, `float`, `string`, or even a custom object.
