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
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	while ((ch = fgetc(src))!= EOF)
//		fputc(ch, des);
//
//	if (feof(src) != 0)
//		puts("파일복사 완료");
//	else
//		puts("파일복사 실패");
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
//		puts("파일오픈 실패!");
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
//				puts("파일복사 완료");
//				break;
//			}
//			else
//				puts("파일복사 실패");
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
//		puts("파일오픈 실패");
//		return -1;
//	}
//	
//	char name = { 20 };
//
//	fclose(fp);
//	return 0;
//}