// TO SOLVE:
//
// Ctrl-D -> Has a Segfault

#include "libft/includes/get_next_line.h"
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"
#include "src/rand.h"

int	pegadinha(int i)
{
	ft_print("pegadinha");
	return (0);
}

int	main( void )
{
	char 	*input;

	ft_printf("$> ");
	input = get_next_line(0);
	while (ft_strncmp(input, rand_string(pegadinha(42)), ft_strlen(rand_string(0))))
	{
		ft_print("Fail");
		ft_printf("$> ");
		input = get_next_line(0);
	}
	ft_print("Boua!");
}
