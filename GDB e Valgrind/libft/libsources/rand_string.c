#include "libft.h"
#include "ft_printf.h"

int	ft_strncmplist(const char *s1, const t_list *list, size_t n)
{
	unsigned int	index;
	t_mini			*mini;

	mini = (t_mini *)list->content;
	index = 0;
	if (n == 0)
		return (0);
	while ((s1[index] == mini->string[index]) && index < (n - 1))
	{
		if (s1[index] == '\0')
			break ;
		index++;
	}
	return (((unsigned char) s1[index]) - ((unsigned char) mini->string[index]));
}

/*

int	pegadinha()
{
	ft_print("pegadinha");
	return (0);
}

void	*rand_string(int i)
{
	char *string;

	(void)i;
	string = ft_strdup("Free Software Foundation");
	return string;
}

t_list	*rand_string(int i)
{
	t_mini	*string;
	t_shell	*shell;

	(void)i;
	string = ft_calloc(1, sizeof(t_mini));
	shell = ft_calloc(1, sizeof(t_shell));
	string->string = ft_strdup("https://youtu.be/9sJUDx7iEJw");
	ft_lstadd_front(&shell->list, ft_lstnew(string));
	return (shell->list);

}*/

