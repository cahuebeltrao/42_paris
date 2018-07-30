int ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb <= 1 || nb > 12)
		return (nb > 12 ? 0 : (nb < 0 ? 0 : 1));
	while (nb > 1)
		factorial *=  nb--;
	return factorial;
}
