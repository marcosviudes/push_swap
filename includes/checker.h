#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../src/utils/stacklib.h"

#define OK      "\x1b[32mOK"
#define KO      "\x1b[31mKO"
#define ERROR   "\x1b[31mERROR"

typedef struct s_all{
    t_list      *a;
    t_list      *b;
    int         *used;
    
}               t_all;

#endif