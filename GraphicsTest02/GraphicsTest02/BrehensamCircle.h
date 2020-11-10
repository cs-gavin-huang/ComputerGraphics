void Circle_Bresenham(int x, int y, int r, int color)
{
	int tx = 0, ty = r, d = 3 - 2 * r;
	while (tx <= ty)
	{
		putpixel(x + tx, y + ty, color);
		putpixel(x + tx, y - ty, color);
		putpixel(x - tx, y + ty, color);
		putpixel(x - tx, y - ty, color);
		putpixel(x + ty, y + tx, color);
		putpixel(x + ty, y - tx, color);
		putpixel(x - ty, y + tx, color);
		putpixel(x - ty, y - tx, color);

		if (d < 0)
			d += 4 * tx + 6;
		else
			d += 4 * (tx - ty) + 10, ty--;
		tx++;
	}
}
