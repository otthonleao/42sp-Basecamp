int	ft_str_is_printable(char *str)
{
	int		cont;
	char	letter;

	cont = 0;
	while (str[cont] != '\0')
	{
		letter = str[cont];
		if (32 <= letter && letter <= 126)
			cont++;
		else
			return (0);
	}
	return (1);
}