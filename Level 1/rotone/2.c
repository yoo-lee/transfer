#include <unistd.h>

void rotone(char *c)
{
	while(*c)
	{
		char ch = *c + 1;
		char cz = *c - 25;
		if ((*c >= 'a' && *c <= 'y') || (*c >= 'A' && *c <= 'Y'))
			write(1, &ch, 1);
		else if (*c == 'z' && *c == 'Z')
			write(1, &cz, 1);
		else
			write(1, c, 1);
		c++;
	}
}



int main (int c, char **v)
{
	if (c == 2)
		rotone(v[1]);
	else
		write(1, "\n", 1);

	return 0;
}