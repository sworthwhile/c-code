#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
    int m=2;
    switch(n)
    {
        case 1:n++;//开始n=1，n++为2
        case 2:m++;//无break继续执行case2，m=3
        case 3://继续case3
            switch(n)//switch可嵌套使用
            {
                case 1:n++;
                case 2:m++;//n=2，m++，m=4
                       n++;//n=3
                       break;


            }
    case 4:m++;//跳出继续case4，m=5
    break;//break结束
    default:
        break;

    }
    printf("m=%d,n=%d",m,n);//m=5，n=3
    return 0;

}
