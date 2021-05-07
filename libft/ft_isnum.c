#include "libft.h"

int     ft_isnum(char *string)
{
    int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if(string[i] == '-')
			i++;
		if (!ft_isdigit(string[i]) )
			return(0);
		i++;
	}
	return(1);
}