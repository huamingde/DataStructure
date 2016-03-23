
#include "stdio.h"

//冒泡排序
int bubble_sort(int *buf, int size)
{
    int i, j;
    
    if(size <= 0) return -1;
    
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1 - i; j++){
            if(buf[j] < buf[j+1]){
                int tmp = buf[j];
                buf[j] = buf[j + 1];
                buf[j + 1] = tmp;
            }
        }
    }
    
    return 1;
}

//选择排序
int select_sort(int *buf, int size)
{
    if(size <= 0) return -1;
    
    int index;
    int i, j;
    
    for(i = 0; i < size - 1; i++){
    
        for(index = i, j = index + 1; j < size - 1; j++){
            if(buf[index] > buf[j]){//记录比较结果较小的数据索引
                index = j;
            }
        }
        
        if(index != i){
            int tmp = buf[i];
            buf[i] = buf[index];
            buf[index] = tmp;
        }
    }
    
    return 1;

}

//快速排序算法
//void q_sork(int *buf, int left, int right)
{
    if(left >= right) return;
    
    int i = left;
    int j = right;
    int key = buf[left];
    
    while(i < j){
        while(i < j && key <= buf[j]){
            j--;
        }
        
        
        
    
    }
}

int quick_sork(int *buf, int size)
{
    if(size <= 0) return -1;
    
    
    return 1;
}

