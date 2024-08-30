#include <stdio.h>
#include "../inc/linked_lists.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {     
    int i;
    int data_1 = 10, data_2 = 20, data_3 = 30;
    float data_4 = 3.1, data_5 = 2.2, data_6 = 1.2;
    
    //Create lists
    linked_list* list_1 = create_list();
    linked_list* list_2 = create_list();

    printf("================================================== \n");
    printf("Example Application for linked list implementation \n");
    printf("================================================== \n");

    //Insert nodes
    insert_node(list_1, &data_1, 0);
    insert_node(list_1, &data_2, 1);
    insert_node(list_1, &data_3, 2);

    insert_node(list_2, &data_4, 0);
    insert_node(list_2, &data_5, 1);
    insert_node(list_2, &data_6, 2);

    //Retrieve data from the lists. 
    printf("Retrieve data from the lists\n");
    for (i = 0; i < 3; i++) {
        printf("Data at index: %i list:1 %d\n", i, *(int*)get_node_data(list_1, i)); 
        printf("Data at index: %i list:2 %0.2f\n", i, *(float*)get_node_data(list_2, i)); 
    }

    //Delete nodes 
    delete_node(list_1, 0);
    delete_node(list_2, 0);
    
    for (i = 0; i < 2; i++) {
        printf("Data at index: %i after deletion list:1 %d\n", i, *(int*)get_node_data(list_1, i)); 
        printf("Data at index: %i after deletion list:2 %0.2f\n", i, *(float*)get_node_data(list_2, i)); 
    }
    
    while ((list_1->size > 0) && (list_2->size > 0))  {
        delete_node(list_1, 0);
        delete_node(list_2, 0);

    }
    free(list_1);
    free(list_2);
    return 0;
}