#include <stdio.h>
#include "libft/libft.h"

int	main(int argc, char **argv)
{
	char	*option;
	char	l_option[] = "arlRt";

	option = (char *)malloc(sizeof(char) * ft_strlen(l_option));
	ft_strcpy(option, l_option);
	printf("Ptr : %p\n", &option);
	if (getCommand(argc, argv, &option))
	{
		printf("\n\nOption : %s\n", option);
	}
	else
		printf("ls: illegal option\nusage: ls [%s] [file ...]\n", l_option);
	return (0);
}
