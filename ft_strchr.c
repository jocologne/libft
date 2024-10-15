
//PRECISA DE CORREÇÃO
int	ft_strlen(const char *str);

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
