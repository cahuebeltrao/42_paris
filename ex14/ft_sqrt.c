int ft_sqrt(int nb)
{
	int sqr_root;

	sqr_root = 0;
	if (nb <= 1)
		return (nb == 1 ? 1 : 0);
	while ((nb > 100 ? sqr_root < nb/10 : sqr_root <= nb/2))
	{
		if (nb == sqr_root * sqr_root)
			return (sqr_root);
		sqr_root++;
	}
	return (0);
}
