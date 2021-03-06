void	ft_putchar(char c);

int	line(char border_char, char inner_char, int width)
{
	if (width == 1)
	{
		ft_putchar(border_char);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(border_char);
		while (width > 2)
		{
			ft_putchar(inner_char);
			width--;
		}
		ft_putchar(border_char);
		ft_putchar('\n');
	}
	return (0);
}

int	rush(int x, int y)
{
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	if (y == 1)
		line('o', '-', x);
	else
	{
		line('o', '-', x);
		while (y > 2)
		{
			line('|', ' ', x);
			y = y - 1;
		}
		line('o', '-', x);
	}
	return (0);
}
