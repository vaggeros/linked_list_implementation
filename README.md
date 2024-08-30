# Linked List Implementation

### Introduction

This project provides a linked list structure implementation

 The current implementation supports the following functionalities:

- **Creating a New Linked List**: Initialize a new, empty linked list.
- **Inserting a Node**: Add a new node at any specified position within the linked list.
- **Removing a Node**: Remove a node from any position in the linked list.
- **Indexing into the Linked List**: Access and retrieve data from any position within the list.

The project is organized as requested.

```
├── cli.sh (bash script to automate compile)
├── CMakeLists.txt
├── inc (Include directory)
│   └── linked_lists.h
├── README.md
├── src (Source directory)
│   ├── linked_lists.c
│   └── main.c
└── test (N/A)
```

Although  the bonus implementation and corresponding tests are mentioned , they have not yet been implemented.

### How to: Build, compile & run

To build and run the application, a bash script named `cli.sh` was developed to automate operations such as building, running the application, and cleaning the project.

**Usage example for build and run application:**

```
./cli.sh build && ./cli.sh run
```

Use the following command to see more options :

```
./cli.sh help
```

### Example output 

To verify the implementation, an example application was created that initially creates two lists. It then inserts nodes with predefined data into these lists, retrieves, and prints their contents. Afterward, the application deletes the node at index 0 of both lists and prints the contents of the lists again to demonstrate the changes.

```
================================================== 
Example Application for linked list implementation 
================================================== 
Retrieve data from the lists
Data at index: 0 list:1 10
Data at index: 0 list:2 3.10
Data at index: 1 list:1 20
Data at index: 1 list:2 2.20
Data at index: 2 list:1 30
Data at index: 2 list:2 1.20
Delete data from the lists
Data at index: 0 after deletion list:1 20
Data at index: 0 after deletion list:2 2.20
Data at index: 1 after deletion list:1 30
Data at index: 1 after deletion list:2 1.20
```

