#include <stdio.h>

int main()
{
	char m[100];
	char c[100];
	int i, k;

	printf("���������ģ�");
	gets(m);
	printf("�������ƶ�λ����");
    scanf("%d", &k);

	for(i=0; m[i] != '\0'; i++)
    {
        if( m[i] >= 'A' && m[i] <= 'Z' )
            c[i] = (m[i]+k-'A')%26 + 'A';
        else if( m[i] >= 'a' && m[i] <= 'z' )
            c[i] = (m[i]+k-'a')%26 + 'a';
        else
            c[i] = m[i];
    }

	c[i] = '\0';

	printf("�����ǣ�%s\n", c);
	getch();
}
