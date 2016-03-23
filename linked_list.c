

#include "stdio.h"

typedef struct node{
    int data;
    struct node *next;
}NODE_S, *pNODE_S;

void read(pNODE_S P)
{
    
}

void traval_link(pNODE_S p_head)
{
    while(p_head != NULL){
        read(p_head->next);
        p_head = p_head->next;
    }
}


pNODE_S find_node(pNODE_S p, int d)
{
    while(p != NULL){
        if(p->data != d) p = p->next;
        else return p;
    }
}

pNODE_S get_tail(pNODE_S p)
{
    if(p == NULL) return NULL;
    
    while(p->next != NULL){
        p = p->next;
    }
    
    return p;
}


void insert_node(pNODE_S head, pNODE_S node)
{
    pNODE_S p = get_tail(head);
    
    if(p != NULL){ 
        p->next = node;
        node->next = NULL;
    }
}


void bubblesort_linklist(pNODE_S P)
{
    pNODE_S head = P;
    pNODE_S ptmp = NULL;
    
    while(p != NULL && p->next != NULL){
        if(p->data > p->next->data){
            if(p == head){ 
                head = p->next;
                p->next = head->next;
                head->next = p;
            }
            
        }
    }
}
