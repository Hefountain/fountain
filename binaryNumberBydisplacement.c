// 输入一个无符号整数，打印出其二进制数

#include <stdio.h>

void binshow(int n,int len)
{
    int i = 0;
    for(i=len-1;i>=0;i--)
    {
        printf("%d",0x1 & (n >> i));   //从最高位开始，依次获取一个二进制位
    }
    printf("\n");
}

int main()
{
    unsigned int a;
    int len;

    scanf("%d",&a);
    scanf("%d",&len);     //输入二进制位数
    
    binshow(a,len);

    return 0;
}
