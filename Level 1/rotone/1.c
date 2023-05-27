#include <unistd.h>


void ft_putchar(int c)
{
	write(1, &c, 1);
}

void rotone(char *a)
{
	size_t i = 0;
	while(a[i])
	{
		if ((a[i] >= 'a' && a[i] <= 'y')|| (a[i] >= 'A' && a[i] <= 'Y'))
			ft_putchar(a[i] + 1);
		else if (a[i] == 'z' || a[i] == 'Z')
			ft_putchar(a[i] -25 );
		else
			ft_putchar(a[i]);
		i++;
	}
}


int main (int c, char **v)
{
	if (c == 2)
		rotone(v[1]);
	else
		ft_putchar('\n');
	return 0;
}