/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:53:06 by thakala           #+#    #+#             */
/*   Updated: 2021/10/29 18:20:01 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_swap(char **a, char **b)
{
	char	*str;

	str = *a;
	*a = *b;
	*b = str;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(char **argv)
{
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		k;

	k = 1;
	while (k < argc - 1)
	{
		if (ft_strcmp(argv[k], argv[k + 1]) > 0)
		{
			ft_swap(&argv[k], &argv[k + 1]);
			if (k > 1)
				k--;
		}
		else
			k++;
	}
	ft_print_params(argv + 1);
}
