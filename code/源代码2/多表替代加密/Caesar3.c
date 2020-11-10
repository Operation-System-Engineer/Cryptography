#include <stdio.h>
#include <string.h>

void Caesar(char *m, char *c, int k, int n);

int main()
{
    char m[100];
    char c[100];
    int i, j, k, n, t;

    printf("********************************************\n");
    printf("** ���ܷ���Ϊ�������ܵı���: ���������� **\n");
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
    t = n%i;         // �����Ƿ�������������������Ҫ�Ӷ�һ��Ŷ
    n /= i;          // n ����õ�����Ϊ������

    j = 1;
    while( j <= n )
    {
        printf("��%2d���ƶ��ַ�����", j);
        scanf("%d", &k);
        Caesar( &m[(j-1)*i], c, k, i );
        j++;
    }

    if( t )
    {
        printf("��%2d���ƶ��ַ�����", j);
        scanf("%d", &k);
        Caesar( &m[(j-2)*i+t], c, k, i );
    }

    c[n*i+t] = '\0';
    printf("\n���ܺ�������ǣ�%s", c);

    getch();

    return 0;
}

void Caesar(char *m, char *c, int k, int n)
{
	int i;
    static int j = 0;

	for(i=0; i < n; i++,j++)
    {
        if( m[i] >= 'A' && m[i] <= 'Z' )
            c[j] = (m[i]+k-'A')%26 + 'A';
        else if( m[i] >= 'a' && m[i] <= 'z' )
            c[j] = (m[i]+k-'a')%26 + 'a';
        else
            c[j] = m[i];
    }
}
