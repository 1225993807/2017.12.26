#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a[100];
	int x;//����
	int y;//�ڼ���
	int n, k;
	int i, j;
	int t;
	int flag = 0;
	int num;//��������ڼ���
	scanf("%d", &n);
	for (k = 0; k < n; k++)
	{
		num = 0;
		flag = 0;
		scanf("%d", &x);
		scanf("%d", &y);
		for (i = 0; i < x; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < x; i++)
			for (j = i; j < x; j++)
			{
				if (a[i] < a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		//�Ӵ�С����
		num = 1;
		for (i = 0; i < x; i++)
		{

			if (num == y)
			{
				flag = 1;
				printf("%d\n", a[i]);
				break;
			}
			if (a[i] == a[i - 1])i++;
			else num++;
		}
		if (flag == 0)
			printf("error\n");
	}
	return 0;
}