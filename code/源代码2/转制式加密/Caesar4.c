#include <stdio.h>
#include <string.h>

int main()
{
    char m[100];
    char c[100];
    int i, j, k, n, t, p;

    printf("********************************************\n");
    printf("** �ü��ܷ���Ϊ�������ܵı���: ת��ʽ���� **\n");
    printf("** ԭ�������ο�С���� ������ѧ�� �ڶ��� **\n");
    printf("********************************************\n");
    printf("***** Power by www.fishc.com -- С���� *****\n");
    printf("********************************************\n");

    printf("���������ģ�");
    gets(m);
    printf("\n������Ҫ���ٸ��ַ�Ϊһ��: ");
    scanf("%d", &i);
    printf("\n");

    n = strlen(m);
    t = n%i;         // �����Ƿ�������
    n /= i;          // n ����õ�����Ϊ������


    for( j=0; j < i; j++ )
    {
        printf("��%2d���ַ�ת��Ϊ�ڼ����ַ�: ", j+1);
        scanf("%d", &k);

        p = 0;
        while( p < n )
        {
            c[p*i+k-1] = m[p*i+j];
            p++;
        }
    }

    c[n*i+t] = '\0';

    while( t )
    {
        c[n*i+t-1] = m[n*i+t-1];
        t--;
    }

    printf("\n���ܺ�������ǣ�%s", c);

    getch();

    return 0;
}
