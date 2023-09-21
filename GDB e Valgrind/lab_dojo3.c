// TO SOLVE:
//
// Ctrl-D -> Has a Segfault

#include <limits.h>

#include "libft/includes/get_next_line.h"
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"
#include "src/rand.h"

int outra_pegadinha(int i)
{
	ft_print("entre aqui");
	return(i);
}

int	pegadinha(int i)
{
	ft_print("pegadinha");
	return (0);
}

int	main( void )
{
	char 	*input;
	int		i;
	ft_printf("$> ");
	input = get_next_line(0);
	i = 0;
	while(i < INT_MAX)
		i++;
	while (ft_strncmp(input, rand_string(pegadinha(42)), ft_strlen(rand_string(0))))
	{
		ft_print("Fail");
		ft_printf("$> ");
		input = get_next_line(0);
	}
	ft_print("Boua!");
}
