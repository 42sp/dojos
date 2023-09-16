#include "libft/includes/get_next_line.h"
#include "libft/includes/libft.h"
#include "libft/includes/ft_printf.h"
#include "src/rand.h"

int	main(int ac, char **av)
{
	char 	*input;
	size_t	len;

	if (ac - 1 == 3)
	{
		char *result = rand_string(42);
		ft_print("$> ");
		input = get_next_line(0);	
		len = ft_strlen(input);
		while (ft_strncmp(input, result, len - 1))
		{
			ft_printf("Fail\n");
			ft_print("$> ");
			input = get_next_line(0);
		}
		ft_printf("Boua!\n");
		free(result);
	}
	else
		return (0);
		
}
