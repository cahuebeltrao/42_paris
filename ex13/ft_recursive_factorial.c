int ft_recursive_factorial(int nb)
{
	if (nb <= 1 || nb > 12)
		return (nb > 12 ? 0 : (nb < 0 ? 0 : 1));
	return (nb = nb * ft_recursive_factorial(nb - 1));
}
