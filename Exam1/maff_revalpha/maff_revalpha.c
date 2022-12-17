#include <unistd.h>

char maiusc(char *str)
{

	return (*str - 32);
}

int main(){
	char i = 'z';
	char l;
	
	while (i >= 'a')
	{
		if (i % 2 != 0)
		{
			l = maiusc(&i);
			write(1, &l, 1);
		}
		else
			write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}
