//#include <stdio.h>
//#pragma warning(disable : 4996)
//
//int main(void)
//{
//	FILE* src = fopen("scr.txt", "rt");
//	FILE* des = fopen("dst.txt", "wt");
//	int ch;
//
//	if (src == NULL || des == NULL) {
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	while ((ch = fgetc(src))!= EOF)
//		fputc(ch, des);
//
//	if (feof(src) != 0)
//		puts("���Ϻ��� �Ϸ�");
//	else
//		puts("���Ϻ��� ����");
//
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable : 4996)
//
//int main(void)
//{
//	FILE* src = fopen("src.bin", "rb");
//	FILE* des = fopen("dst.bin", "wb");
//	char buf[20];
//	int readCnt;
//
//	if (src == NULL || des == NULL)
//	{
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	while (1)
//	{
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//
//		if (readCnt < sizeof(buf))
//		{
//			if (feof(src) != 0)
//			{
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("���Ϻ��� �Ϸ�");
//				break;
//			}
//			else
//				puts("���Ϻ��� ����");
//			break;
//		}
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//	fclose(src);
//	fclose(des);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable : 4996)
//
//int main(void)
//{
//	FILE* fp = fopen("mystory.txt", "wt");
//	if (fp == NULL)
//	{
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	
//	char name = { 20 };
//
//	fclose(fp);
//	return 0;
//}