#include <math.h>
void lineBres(int x0, int y0, int xEnd, int yEnd, int c)
{
	int dx = fabs((double)(xEnd - x0)), dy = fabs((double)(yEnd - y0));
	int p = 2 * dy - dx;
	int twoDy = 2 * dy, twoDyMinusDx = 2 * (dy - dx);
	int x, y;
	if (x0 > xEnd) {
		x = xEnd;
		y = yEnd;
		xEnd = x0;
	}
	else {
		x = x0;
		y = y0;
	}
	putpixel(x, y, c);
	while (x < xEnd) {
		x++;
		if (p < 0)
			p += twoDy;
		else {
			y++;
			p += twoDyMinusDx;
		}
		putpixel(x, y, c);
	}
}