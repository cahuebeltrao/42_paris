void ft_print_numbers(void);

void ft_print_numbers(void)
{
	int i;
	i = 0;

	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
}
