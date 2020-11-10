void seed_filling(int x, int y, int fill_color, int boundary_color)
{	
	
	int c;
	c = getpixel(x, y);
	if (c != boundary_color && c != fill_color)
	{
		putpixel(x, y, fill_color);
		Sleep(1);
		seed_filling(x + 1, y, fill_color, boundary_color);
		seed_filling(x - 1, y, fill_color, boundary_color);
		seed_filling(x, y + 1, fill_color, boundary_color);
		seed_filling(x, y - 1, fill_color, boundary_color);
	}
}
