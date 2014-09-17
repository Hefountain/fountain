#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char str[100];
    char *ch = " ";
    char *ret = NULL;
    char *maxword = NULL;
    int max = 0;

    scanf("%[^\n]",str);
    ret = strtok(str,ch);     //字符串分割函数——strtok


        while(ret != NULL)
        {
            if(strlen(ret) > max)
            {
                maxword = ret;
                max = strlen(ret);
            }

            i++;
            ret = strtok(NULL,ch);  //传入一个参数NULL，表示继续分割当前的字符串
       }

    printf("%s\n",maxword);

    return 0;
}
