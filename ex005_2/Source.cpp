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

	printf("0より大きい整数を%d件まで登録可能\n", DATA);

	while (cont != 4)
	{
		printf("操作番号の入力(0:登録  1:検索(削除)  2:一覧表示  3:データリセット  4:終了)\n");
		scanf_s("%d", &cont);

		switch (cont)
		{
		case 0:
			printf("データ登録\n");
			printf("データ入力：");
			scanf_s("%d", &data[datanum]);

			datanum++;
			break;
		case 1:
			if (datanum == 0)
				printf("データが入力されていません\n");
			else
			{
				printf("検索する整数:");
				scanf_s("%d", &search);

				for (int i = 0; i < datanum; i++)
				{
					if (data[i] == search)
					{
						printf("データが見つかりました、削除しますか？(yes:1,no:0)\n");
						scanf_s("%d", &del);

						hoge = 1;

						if (del == 1)
						{
							data[i] = 0;
						}
					}
				}
				if (hoge == 0)
					printf("データが見つかりませんでした\n");

				hoge = 0;
			}
			break;
		case 2:
			for (int i = 0; i < datanum; i++)
			{
				if (data[i] != 0)
				printf("データ=%d\n", data[i]);
			}
			if (datanum == 0)
				printf("データが入力されていません\n");
			break;
		case 3:
			for (int i = 0; i < datanum; i++)
			{
				data[i] = 0;
			}
			datanum = 0;
			printf("データをリセットしました\n");
			break;
		default:
			break;
		}
		printf("\n");
	}
}