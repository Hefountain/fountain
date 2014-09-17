//实现选择排序，按从大到小排序
#include <stdio.h>

int main()        
{
    int i;           // 控制外循环的变量
    int j;           //控制内循环的变量
    int temp;        //交换时的中间变量
    int a[] = {1,3,6,2,9,8,5};    // 定义并初始化一个数组
    int len = sizeof(a) / sizeof(a[0]);   //求出数组的长度
    int max = 0;      //求最大值的临时变量

    for(i=0;i<len-1;i++)        //外循环，比较的轮数
    {   
        max = i;                // 每一轮比较开始，假设当前的值为最大值
        for(j=i+1;j<len;j++)   //内循环，控制每一轮比较的次数
        {   
            if(a[j]>a[max])    
            {   
                 max = j;     //记录每一轮比较后最大值的下标 
            }   
        }   

        if(i!=max) 
                   //如果每一轮当前的值已经是最大值，则不需要进行交换，否则进行交换
        {   
            temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }   
    }   

    for(i=0;i<len;i++)
    {   
       printf("%d ",a[i]);
    }   
    
 return 0;
}

