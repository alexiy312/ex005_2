#include <stdio.h>

void main()
{
	const int DATA = 50;
	int data[DATA];
	int cont = 0;
	int datanum = 0;

	int search;
	int del;
	int hoge = 0;

	printf("0���傫��������%d���܂œo�^�\\n", DATA);

	while (cont != 4)
	{
		printf("����ԍ��̓���(0:�o�^  1:����(�폜)  2:�ꗗ�\��  3:�f�[�^���Z�b�g  4:�I��)\n");
		scanf_s("%d", &cont);

		switch (cont)
		{
		case 0:
			printf("�f�[�^�o�^\n");
			printf("�f�[�^���́F");
			scanf_s("%d", &data[datanum]);

			datanum++;
			break;
		case 1:
			if (datanum == 0)
				printf("�f�[�^�����͂���Ă��܂���\n");
			else
			{
				printf("�������鐮��:");
				scanf_s("%d", &search);

				for (int i = 0; i < datanum; i++)
				{
					if (data[i] == search)
					{
						printf("�f�[�^��������܂����A�폜���܂����H(yes:1,no:0)\n");
						scanf_s("%d", &del);

						hoge = 1;

						if (del == 1)
						{
							data[i] = 0;
						}
					}
				}
				if (hoge == 0)
					printf("�f�[�^��������܂���ł���\n");

				hoge = 0;
			}
			break;
		case 2:
			for (int i = 0; i < datanum; i++)
			{
				if (data[i] != 0)
				printf("�f�[�^=%d\n", data[i]);
			}
			if (datanum == 0)
				printf("�f�[�^�����͂���Ă��܂���\n");
			break;
		case 3:
			for (int i = 0; i < datanum; i++)
			{
				data[i] = 0;
			}
			datanum = 0;
			printf("�f�[�^�����Z�b�g���܂���\n");
			break;
		default:
			break;
		}
		printf("\n");
	}
}