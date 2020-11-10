#include <stdio.h>
#define ROW 1
#define COL 1
void hanzi(const char *s)
{
	int x, y;
	FILE *fp;
	char buffer[100];
	register int m, n, i, j, k;
	unsigned char qh, wh;
	unsigned long offset;
	if ((fp = fopen("C:\\Users\\mac\\Documents\\ddd\\16x16\\hzk16f", "rb")) == NULL)
	{
		printf("Can't open haz16,please add it");
		_getch();
		exit(0);
	}
	x = 200;
	y = 200;
	while (*s) {
		qh = *(s)-0xa0;
		wh = *(s + 1) - 0xa0;
		offset = (94 * (qh - 1) + (wh - 1)) * 32L;
		fseek(fp, offset, SEEK_SET);
		fread(buffer, 32, 1, fp);
		for (i = 0; i < 16; i++)
			for (n = 0; n < ROW; n++)
				for (j = 0; j < 2; j++)
					for( k=0;k<8;k++)
						for (m = 0; m < COL; m++)
							if (((buffer[i * 2 + j] >> (7 - k)) & 0x1) != NULL) {
								putpixel(x + 8 * j*COL + k * COL + m, y + i * ROW + n, RED);
								Sleep(1);
							}
								
		s += 2;
		x += 16;
	}
	fclose(fp);
}