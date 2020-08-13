#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_atoi(int nb)
{
	
}

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_edit_total(int *total, char *line)
{
	ft_putstr(line);
}

int		ft_read_lines(int fd)
{
	char	buf;
	char	*line;
	int		index;
	int		total;

	buf = '\0';
	line = malloc(10);
	index = 0;
	total = 0;
	while (read(fd, &buf, 1))
	{
		if (buf != '\n')
		{	
			line[index] = buf;
			index++;
		}
		else
		{
			line[index + 1] = '\0';
			ft_edit_total(&total, line);
			index = 0;
		}
	}
}

int		main(void)
{
	ft_putnbr(ft_read_lines(open("input", O_RDWR)));
	return (0);
}

//"+3\n-623423\n etc..
