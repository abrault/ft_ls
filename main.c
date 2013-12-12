#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <pwd.h>
#include "libft/libft.h"
#include <sys/types.h>
#include <uuid/uuid.h>
#include <grp.h>

static char	*ft_ls_l(char *f_name)
{
	char			*ptr;
	int			i;
	struct group		*grp;
	struct stat		statbuf;

	if ((grp = getgrgid(statbuf.st_gid)) != NULL)
	    printf(" %-8.8s", grp->gr_name);
	else
	    printf(" %-8d", statbuf.st_gid);
	i = (33 + ft_strlen(f_name) + ft_strlen("") + ft_strlen(""));
	ptr = malloc(sizeof(char) * i);
	return (ptr);
}

int			ft_ls(char *option)
{
	DIR				*dir;
	struct	dirent			*l_dir;

	dir = opendir(".");
	while ((l_dir = readdir(dir)))
	{
		if (l_dir->d_name[0] != '.' || option[0] == '_')
		{
			if (option[2] == '_')
			{
				ft_ls_l(l_dir->d_name);
			}
			ft_putendl(l_dir->d_name);
		}
	}
	option[0] = '0';
	closedir(dir);
	return (0);
}

int			main(int argc, char **argv)
{
	char	*option;

	option = ft_strdup("arlRt");
	if (getCommand(argc, argv, &option))
		ft_ls(option);
	else
		printf("ls: illegal option\nusage: ls [%s] [file ...]\n", "arlRt");
	return (0);
}
