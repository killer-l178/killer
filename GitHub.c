//������ά�������ַ���
//��strcmp()��������ȥ���ַ�������
#include<stdio.h>
#include<string.h>

int main()
{
    char s[9][100];
    int i = 0, j = 0;
    char tmp[10];
    //���������뵽��ά������
    for (i = 0; i < 9; i++)
    {
        scanf("%s", s[i]);//���������ǵ�ַ������&s���ǵ�ַ�ĵ�ַ
    }
    //��ӡ����ǰ���ַ���
    printf("����ǰ���ַ�����\n");
    for (i = 0; i < 9; i++)
        printf("%s\n", s[i]);
    i = 0;
    while (i < 9)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(tmp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], tmp);
            }
        }
        i++;
    }

    //��ӡ�������ַ���
    printf("�������ַ�����\n");
    for (i = 0; i < 9; i++)
        printf("%s\n", s[i]);

    return 0;
}