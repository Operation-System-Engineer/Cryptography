// Powered by ��C������www.fishc.com -- С����

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    int num = 0;       // ���ͳ�ƺ���ַ�����,������������
    int i, j;
    char ch;
    int letter[26];     // ͳ�����ĸ���ĸƵ����Ϊ�˷�����⣬�����������ȫΪ��дŶ^_^
    char top_char[26];
    int top_num[26];

    printf("********************************************\n");
    printf("** ������ĸƵ�����뻻��ʽ���ܡ����������� **\n");
    printf("** ԭ�������ο�С���� ������ѧ�� �ڶ��� **\n");
    printf("********************************************\n");
    printf("***** Power by www.fishc.com -- С���� *****\n");
    printf("********************************************\n");

    // ������
    if((f1=fopen("cipher.txt", "r")) == NULL)
    {
        printf("��cipher.txt�ļ���ʱ��������\n");
        getch();
        exit(1);
    }

    // ��ʼ���ַ�����
    for( i=0; i < 26; i++ )
    {
        letter[i] = 0;
        top_num[i] = 0;
    }

    // ͳ���ַ����͸����ַ�����Ƶ��
    while( (ch=fgetc(f1)) != EOF )
    {
        if( ch >= 'A' && ch <= 'Z' )
        {
            letter[ch-65]++;      // ͳ�Ƹ����ַ�Ƶ��
            num++;
        }
    }

    printf("\n�����������ţ����ַ���Ϊ: %d\n", num);

    printf("\n�����ַ����ֵ�Ƶ��: \n");
    for( i=0; i < 26; i++ )
    {
        printf("%c: %d\n", i+65, letter[i]);
    }

    getch();

    fclose(f1);

    return 0;
}
