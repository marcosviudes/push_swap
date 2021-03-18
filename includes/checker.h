#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../src/utils/stacklib.h"

#define OK		"\x1b[32mOK"
#define KO		"\x1b[31mKO"
#define ERROR	"\x1b[31mERROR"

#define KEY_SA		1
#define KEY_SB		2
#define KEY_SS		3
#define KEY_PA		4
#define KEY_PB		5
#define KEY_RA		6
#define KEY_RB		7
#define KEY_RR		8
#define KEY_RRA		9
#define KEY_RRB		10
#define KEY_RRR		11

typedef struct s_all{
	t_list      *a;
	t_list      *b;
	int         *used;
	int			init_len;
	
}               t_all;

#endif