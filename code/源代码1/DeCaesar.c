#include <stdio.h>

int main()
{
	char m[100];
	char c[100];
	int i, j, k;

	printf("���������ģ�");
	gets(m);
	printf("���½���ӡ�����������п��ܵ���ϣ�");

    for(j=1; j <= 26; j++)
    {
        for(i=0; m[i] != '\0'; i++)
        {
            if( m[i] >= 'A' && m[i] <= 'Z' )
                c[i] = (m[i]+j-'A')%26 + 'A';
            else if( m[i] >= 'a' && m[i] <= 'z' )
                c[i] = (m[i]+j-'a')%26 + 'a';
            else
                c[i] = m[i];
        }
        c[i] = '\0';
        printf("�������%2d��%s ", j, c);
        printf("λ�ƣ�+%d\n", j);
    }

	getch();
}
