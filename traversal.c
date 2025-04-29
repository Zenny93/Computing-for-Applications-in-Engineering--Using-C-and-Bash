#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "traversal.h"
#include "dll_alloc.h"
#include "dllist.h"
void PrintDLLForward(ListNode* head){
ListNode* curr = head;

ListNode* next = NULL;

    while (next != head) {
        // save the next node to free
        next = curr->next;
        printf("%d\n", curr->data);
        curr = next;

    }


  }

   void PrintDLLReverse(ListNode* head){
     ListNode* curr = head;
     ListNode* prev = NULL;
     //ListNode* next = NULL;
     while (prev!= head){
       printf("%d\n", curr->data);
       prev = curr->prev;
       curr = prev;   

     }

   }
