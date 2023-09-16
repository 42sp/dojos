#include "libft/includes/get_next_line.h"
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"

int	main( void )
{
	char 	*input;
	void	*result;

	result = ft_calloc(1, sizeof(char));
	result = rand_string(pegadinha(42));
	ft_printf("$> ");
	input = get_next_line(0);
	while (ft_strncmp(input,  result, 24))
	{
		ft_print("Fail");
		ft_printf("$> ");
		input = get_next_line(0);
	}
	ft_print("Boua!");
}
