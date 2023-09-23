typedef struct 	s_point {
	int			x;			// x : Width  | x-axis
	int			y;			// y : Height | y-axis
}				t_point;
 
void	fill(char **tab, t_point size, t_point beg, char to_fill)
{
	if (beg.y < 0 || beg.y >= size.y || beg.x < 0 || beg.x >= size.x || tab[beg.y][beg.x] != to_fill)
		return ;

	tab[beg.y][beg.x] = 'F';
	fill(tab, size, (t_point){beg.x - 1, beg.y}, to_fill);
	fill(tab, size, (t_point){beg.x + 1, beg.y}, to_fill);
	fill(tab, size, (t_point){beg.x, beg.y - 1}, to_fill);
	fill(tab, size, (t_point){beg.x, beg.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
