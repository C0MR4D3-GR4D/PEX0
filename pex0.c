/** PEX0.c
 * =============================================================
 * Name: C2C Cameron Conrad
 * Section: T2A
 * Project: PEX0 - C Proficiency
 * Documentation Statement: I utilized the resource given to us in letter a on the pex0 handout to be able to pass arguments to my program via command line.
 * =============================================================
 */

#include "pex0.h"

 int main (int argc, char* argv[]) {
    //c
     int i;
     for(i=1; i <= 20; i++){
         if (i%3==0){
             printf("%d\n", i);
         }
     }
     //d-f
     int example[2] = {5, 10};
     printf("%d\n", func1(example));

     //g-i
    NodeType node1;

    strncpy(node1.name, "Node 1", sizeof(char*));

    NodeType node2;

    strncpy(node2.name, "Node 2", sizeof(char*));

    node1.next = &node2;

    node2.next = NULL;

    printf("%s\n", node1.name);

    printf("%s\n", node1.next->name);

    NodeType* nodePtr = (NodeType*) malloc(sizeof(NodeType));

    strncpy(nodePtr->name, "Node 3", sizeof(char*));

    nodePtr->next = NULL;

    printf("%s\n", nodePtr->name);

    printf("85 minutes\n");



     return 0;
 }

 int func1(const int integer[]){
     return integer[0]*2;
 }