// Powered by ��C������www.fishc.com -- С����

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2, *f3;
    char key[52];
    char ch;
    int i;

    printf("********************************************\n");
    printf("** �ü��ܷ���Ϊ�������ܵı���: ����ʽ���� **\n");
    printf("** ԭ�������ο�С���� ������ѧ�� �ڶ��� **\n");
    printf("********************************************\n");
    printf("***** Power by www.fishc.com -- С���� *****\n");
    printf("********************************************\n");

    // ��ȡ�ܳ�
    if((f1=fopen("key.txt", "r")) == NULL)
    {
        printf("��key.txt�ļ���ʱ��������\n");
        getch();
        exit(1);
    }

    // ���ܳ״��key����
    for( i=0; i < 52; i++ )
    {
        key[i] = fgetc(f1);
    }

    // �򿪴����ܵ�����
    if((f2=fopen("plain.txt", "r")) == NULL)
    {
        printf("��plain.txt�ļ���ʱ��������\n");
        getch();
        exit(1);
    }

    // �򿪴�����ĵ��ļ�
    if((f3=fopen("cipher.txt", "wt+")) == NULL)
    {
        printf("��cipher.txt�ļ���ʱ��������\n");
        getch();
        exit(1);
    }

    // �����ܳ׼��ܲ���ŵ�cipher.txt�ļ���
    ch = fgetc(f2);
    while( ch != EOF )
    {
        // ��д��ĸת��Ϊkey��ǰ26λ������Сд��ĸ��26λ
        if( ch>='A' && ch<='Z')
        {
            ch -= 65;
            ch = key[ch];
        }
        else if( ch>='a' && ch<= 'z' )
        {
            ch -= 71;  // ch = ch - 97 + 26
            ch = key[ch];
        }

        fputc(ch, f3);
        ch = fgetc(f2);
    }

    printf("\n�ɹ�����, ���ܺ�����ݴ����cipher.txt�ļ��С�\n\n");
    printf("����c����ļ������������Զ��˳�����: ");

    if( 'c' == getchar() )
    {
        printf("\n�������£�\n");

        // �ǵ�Ҫ��fseek�����������ļ�ָ��ָ���ļ�ͷ
        fseek(f3, 0, SEEK_SET);
        ch = fgetc(f3);

        while( ch != EOF )
        {
            putchar(ch);
            ch = fgetc(f3);
        }
    }

    getch();

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
