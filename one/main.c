#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
    int m=2;
    switch(n)
    {
        case 1:n++;//��ʼn=1��n++Ϊ2
        case 2:m++;//��break����ִ��case2��m=3
        case 3://����case3
            switch(n)//switch��Ƕ��ʹ��
            {
                case 1:n++;
                case 2:m++;//n=2��m++��m=4
                       n++;//n=3
                       break;


            }
    case 4:m++;//��������case4��m=5
    break;//break����
    default:
        break;

    }
    printf("m=%d,n=%d",m,n);//m=5��n=3
    return 0;

}
