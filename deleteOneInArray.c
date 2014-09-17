#include <stdio.h>

int main()
{
    int i;
    int num;
    int index;
    int a[] = {2,5,6,7,8,9};
    int len = sizeof(a)/sizeof(a[0]);

    scanf("%d",&num);

    for(i=0;i<len;i++)
    {   
        if(a[i]==num)
        {   
            index = i;
	    break;
        }   
            
    }   
            
    for(i=index;i<len;i++)
    {   
                      //将数组元素依次往前移动
        a[i] = a[i+1];
    }   

    for(i=0;i<len-1;i++)
    {
	printf("%d  ",a[i]);
    }

    printf(“\n");

    return 0;
}
