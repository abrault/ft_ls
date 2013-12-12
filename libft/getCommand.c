#include <stdio.h>
#include "libft.h"

int			getCommand(int argc, char **argv, char **option)
{
	int		y;
	int		j;
	char	*str;
	char	*ptr;

	if (argc == 1)
		return (1);
	str = ft_strdup(*option);
	j = 1;
	y = 1;
	while (y < argc)
	{
		j = 1;
		if (argv[y][0] != '-' || ft_strlen(argv[y]) == 1)
			return (0);
		while (argv[y][j] != '\0')
		{
			if ((ptr = ft_strchr(str, argv[y][j])) == NULL)
				return (0);
			(*option)[ptr - str] = '_';
			j++;
		}
		y++;
	}
	free(str);
	return (1);
}
