#include <stdio.h>
#include "../inc/main.h"
#include "../inc/linked_lists.h"

int main(int argc, char const *argv[])
{
    linked_list* list = create_list();
    linked_list* list2 = create_list();

    int data1 = 10, data2 = 20, data3 = 30;
    float data4 = 3.1, data5 = 2.2, data6 = 1.2;
    
    insert_node(list, &data1, 0);
    insert_node(list, &data2, 1);
    insert_node(list, &data3, 2);

    insert_node(list2, &data4, 0);
    insert_node(list2, &data5, 1);
    insert_node(list2, &data6, 2);

    // printf("Data at index 1: %d\n", *(int*)get_node_data(list, 1)); // Output: 20
    // printf("Data at index 1: list 2 %d\n", *(int*)get_node_data(list2, 1)); // Output: 2

    // delete_node(list, 1);

    for (int i = 0; i < 3; i++) {
        printf("Data at index %d after deletion: %d\n",i, *(int*)get_node_data(list, i)); // Output: 30
    // Cleanup
    }

    for (int j = 0; j < 3; j++) {
        printf("Data at index %d after deletion: %2f\n",j, *(float*)get_node_data(list2, j)); // Output: 30
    // Cleanup
    }
    
    while (list->size > 0) {
        delete_node(list, 0);
        delete_node(list2, 0);

    }
    free(list);
    free(list2);
    return 0;
}