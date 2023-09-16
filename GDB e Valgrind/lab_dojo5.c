#include "libft/includes/get_next_line.h"
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"

int	main( void )
{
	char 	*input;
	t_list	*result;
	t_mini	*test;

	result = ft_calloc(1, sizeof(t_mini));
	result = rand_string(pegadinha(42));
	ft_printf("$> ");
	input = get_next_line(0);
	while (ft_strncmplist(input,  result, 28))
	{
		ft_print("Fail");
		ft_printf("$> ");
		input = get_next_line(0);
	}
	ft_print("Boua!");
}
