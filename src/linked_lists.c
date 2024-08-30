/**
 * \file
 *
 * \brief Linked list implementation
 * This project provides support for a generic linked list implementation. 
 * It supports the following functionalities:
 * - Creating a new linked list.
 * - Inserting a new node at any position in the linked list.
 * - Removing a node from any position in the linked list.
 * - Indexing into the linked list to retrieve data from the list.
 */

#include "../inc/linked_lists.h"

linked_list* create_list() {
    linked_list* list = (linked_list*)malloc(sizeof(linked_list));
    if (list == NULL) {
        perror("Failed to create list");
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

node* create_node(void* data) {
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL) {
        perror("Failed to create node");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_node(linked_list* list, void* data, size_t position) {
    if (position > list->size) {
        fprintf(stderr, "Invalid position\n");
        return;
    }
    node* new_node = create_node(data);
    if (position == 0) {
        new_node->next = list->head;
        list->head = new_node;
    } else {
        node* current = list->head;
        for (size_t i = 0; i < position - 1; i++) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    list->size++;
}

void delete_node(linked_list* list, size_t position) {
    if (position >= list->size) {
        fprintf(stderr, "Invalid position\n");
        return;
    }
    node* temp;
    if (position == 0) {
        temp = list->head;
        list->head = list->head->next;
    } else {
        node* current = list->head;
        for (size_t i = 0; i < position - 1; i++) {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
    }
    free(temp);
    list->size--;
}

void* get_node_data(linked_list* list, size_t index) {
    if (index >= list->size) {
        fprintf(stderr, "Index out of bounds\n");
        return NULL;
    }
    node* current = list->head;
    for (size_t i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}