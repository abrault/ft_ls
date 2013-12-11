#include <stdio.h>
#include "libft.h"

int	getCommand(int argc, char **argv, char **option)
{
	int	y;
	int	j;
	char	*str;

	if (argc == 1)
		return (1);
	str = malloc(sizeof(char) * ft_strlen(*option));
	ft_strcpy(str, *option);
	j = 1;
	y = 1;
	while (y < argc)
	{
		j = 1;
		if (argv[y][0] != '-' || ft_strlen(argv[y]) == 1)
			return (0);
		while (argv[y][j] != '\0')
		{
			if (ft_strchr(str, argv[y][j]) == NULL)
				return (0);
			printf("Code : %d\n", ft_strlen(str) - ft_strlen(ft_strchr(str, argv[y][j])));
			printf("Code : %c\n", *option[0]);
			printf("Code : %c\n", *option[0]);
			*option[ft_strlen(str) - ft_strlen(ft_strchr(str, argv[y][j]))] = '_';
			j++;
		}
		y++;
	}
	return (1);
}
