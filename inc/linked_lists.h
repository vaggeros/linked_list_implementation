#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include "stdio.h"
#include <stdlib.h>

/**
 * @struct node
 * @brief Represents a single node in a linked list.
 *
 * This structure defines a node that holds data and a pointer to the next node in the list.
 * 
 * @var node::data
 * The data stored in the node, represented as a void pointer, allowing the storage of any data type.
 *
 * @var node::next
 * A pointer to the next node in the linked list. If this is the last node, the pointer is NULL.
 */
typedef struct node {
    void* data;              
    struct node* next;      
} node;

/**
 * @struct linked_list
 * @brief Represents the linked list structure.
 *
 * This structure defines a linked list with a pointer to the first node a size attritube.
 * @var linked_list::head
 * A pointer to the first node (head) of the linked list. If the list is empty, this pointer is NULL.
 *
 * @var linked_list::size
 * The size of the linked list, representing the number of nodes currently in the list.
 */
typedef struct linked_list {
    node* head;              
    size_t size;             
} linked_list;

/**
 * Allocates memory for a new created linked list and initializes its members.
 * This function sets to NULL the head of the list and the size to 0, indicating an empty list.
 * It also includes error handling if memory allocation (using 'malloc()') fails,
 * the function prints an error message and returns NULL.
 *
 * @return              A pointer to the newly created linked list, or
 *                      NULL if memory allocation fails.
 */
linked_list* create_list();

/**
 * Allocates memory for a new node and initializes its members with the provided data.
 * This function sets the `data` field of the node to the provided value and 
 * initializes the `next` pointer to NULL, indicating that the node does not 
 * yet link to any other node. 
 * It also includes error handling: if memory allocation (using `malloc()`) fails,
 * the function prints an error message and and returns NULL.
 *
 * @param data          A pointer to the data to be stored in the new node.
 * @return              A pointer to the newly created node, or
 *                      and returns NULL memory allocation fails.
 */
node* create_node(void* data);

/**
 * Inserts a new node with the specified data into a linked list
 * at the given position.
 * If the position is 0, the new node is inserted at the beginning of the list.
 * Otherwise the new node is insersted at the provided position.
 * It also includes error handling: if the provided position is greater 
 * than the list size.
 * 
 * @param list           A pointer to the linked list where the new node will be inserted.
 * @param data           A pointer to the data to be stored in the new node.
 * @param position       The position in the list where the new node should be inserted.
 */
void insert_node(linked_list* list, void* data, size_t position);

/**
 * Deletes a node from the linked list at the specified position.
 * If the position is 0, the head node is removed.
 * Otherwise, the function traverses the list to locate the node just before the desired position, adjusts the pointers 
 * to bypass the node to be deleted, and then frees the memory occupied by that node. 
 * After the deletion, the size of the list is decremented.
 *
 * @param list           A pointer to the linked list from which the node will be deleted.
 * @param position       The position of the node to be deleted.
 */
void delete_node(linked_list* list, size_t position);

/**
 * Retrieves the data stored in a node at a specified index within the linked list.
 * This function first checks if the given index is within the bounds of the list size.
 * If the index is out of bounds,. If the index is valid, the function traverses the 
 * list to the specified index and returns the data stored in the corresponding node.
 *
 * @param list           A pointer to the linked list from which the data will be retrieved.
 * @param index          The index of the node whose data is to be accessed (0-based).
 * @return               A pointer to the data stored in the specified node, or NULL if the index is out of bounds.
 */
void* get_node_data(linked_list* list, size_t index);

#endif