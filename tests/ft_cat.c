#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int	ft_cat(int fd);

int			main(int argc, char **argv)
{
	int		i;
	int		fd;

	i = 1;
	if (argc < 2)
		exit(EXIT_FAILURE);
	while (i < argc)
	{
		if ((fd = open(argv[i], O_RDONLY)) < 0)
			exit(EXIT_FAILURE);
		ft_cat(fd);
		close(fd);
		i++;
	}
}