//实现冒泡排序，对字符数组进行排序
#include <stdio.h>

int main(void)  //实现用冒泡排序法对字符数组进行从小到大排序
{
    int i;
    int j;
    int temp;
    char a[] = "helloworld";
    int len = sizeof(a) /sizeof(a[0]);

    for(i=0;i<len-1;i++)
    {   
        for(j=0;j<len-i-1;j++)
        {   
            if(a[j]>a[j+1])
            {   
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] =temp;
            }   
        }   
    }   

    for(i=0;i<len;i++)
    {   
        printf("%c ",a[i]);
    }   

    return 0;
}
