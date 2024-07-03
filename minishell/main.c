# include <readline/readline.h>
#include <stdio.h> // TODO: Change for libft !!! 
#include <string.h> // strncmp
#include <unistd.h> // getcwd
# include <stdlib.h> // exit

int	handle_input(char *input)
{
    // your code here
    char	output[100];
    if (strncmp(input, "pwd", 3) == 0) // TODO: Use a libft! 
    {

        getcwd(output, 100);
        write(1, output, sizeof(output) * 100);
        return (0);
    }
    return(0);
}

int	main()
{
    char	*input;

    while (1)
	{
		input = readline(">");
        if (!input)
		    exit(0);
        handle_input(input);
	}
    return (0);
}