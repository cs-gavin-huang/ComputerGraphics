void DDA(int x1, int y1, int x2, int y2)
{
	double m = 0.0;
	int dx = x2 - x1;
	int dy = y2 - y1;
	double x = 0.0, y = 0.0;

	if (dx != 0)
	{
		m = (double)dy / dx;
		if (m <= 1) {
			y = (double)y1;
			for (x = (double)x1; x <= x2; x++) {
				putpixel((int)x, (int)y + 0.5, WHITE);
				y += m;
			}
		}
		else {
			x = x1;
			m = 1 / m;
			for (y = y1; y <= y2; y++)
			{
				putpixel((int)x + 0.5, y, WHITE);
				x += m;
			}
		}
	}
	else {
		x = x1;
		for (y = y1; y1 <= y2; y++)
		{
			putpixel(x, y, WHITE);
		}
	}
}