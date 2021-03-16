#include "stacklib.h"

int     ft_isnum(char *string)
{
    int	i;

	while(string[i] != '\0')
	{
		if(!ft_isdigit(string[i]))
			return(0);
		i++;
	}
	return(1);
}