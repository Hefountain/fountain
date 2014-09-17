#include <stdio.h>

int main(void)
{
    //删除多个相同数据

        int len,i,j,num,index;
    int age[] = {11,22,33,44,44,55,44,66,44,77};

    printf("pls input the number which you want to delete:\n");
    scanf("%d",&num);

    len = sizeof(age)/sizeof(age[0]);
    for(i=0;i<len;i++)
    {   
        if(age[i] == num)
        {  
       		 for(j=i;j<len-1;j++) //这个循环放里面来就表示找一个删一个
        	 {   
            		age[j] = age[j+1];
       		 }  
        len--;                //删一个元素，数组长度就减小1
        i--;
        }   
    }   

for(i=0;i<len;i++)
{
    printf("%5d",age[i]);
}

printf("\n");

return 0;
}
