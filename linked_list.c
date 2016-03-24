

#include "stdio.h"

typedef struct node{
    int data;
    struct node *next;
}NODE_S, *pNODE_S;

//阅读节点
void read(pNODE_S P)
{
    printf(" data is : %d\n", p->data);
}

//创建链表
pNODE_S create_linklist(int size)
{
    pNODE_S head = NULL;
    
    for(int i = 0; i < size; i++){
        pNODE_S p = (pNODE_S)malloc(sizeof(NODE_S);
        P->data = i;
        p->next = head;
        head = p;
    }
    
    return head;
}

//遍历链表
void traval_link(pNODE_S p_head)
{
    while(p_head != NULL){
        read(p_head);
        p_head = p_head->next;
    }
}

//查找结点
pNODE_S find_node(pNODE_S p, int d)
{
    while(p != NULL){
        if(p->data != d) p = p->next;
        else return p;
    }
    
    return NULL;
}

//获取链表尾节点
pNODE_S get_tail(pNODE_S p)
{
    if(p == NULL) return NULL;
    
    while(p->next != NULL){
        p = p->next;
    }
    
    return p;
}

//在链表尾插入节点
void tail_insert_node(pNODE_S head, pNODE_S node)
{
    pNODE_S p = get_tail(head);
    
    if(p != NULL){ 
        p->next = node;
        node->next = NULL;
    }
}

//在链表头插入节点
pNODE_S head_insert_node(pNODE_S p, pNODE_S node)
{
    node->next = p;
    return node;
}

//删除节点
pNODE_S delete_node(pNODE_S p, int dat)
{
    if(p == NULL) return NULL;
    
    pNODE_S head = p;    
    
    if(p->data == dat) return p->next;
    
    while(p->next != NULL){
        if(p->next->data == dat){
            p->next = p->next->next;
        }
    }
    
    return head;
}

//删除链表
void destroy_linklist(pNODE_S p)
{
    pNODE_S current = NULL;
    
    while(p != NULL){
        current = p->next;
        free(p);
        p = current;
    }
}


void bubblesort_linklist(pNODE_S P)
{
    pNODE_S head = P;
    pNODE_S ptmp = NULL;
    
    
    

}
