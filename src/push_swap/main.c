#include <push_swap.h>
#include <utils.h>
#include <libft.h>


int     main(int argc, char **argv)
{
	int		i;
	t_all	all;
	
	if(argc < 2)
		return(0);
	all.a = get_args(argc,argv);
	print_list(all.a, all.b);
	return (0);
}
