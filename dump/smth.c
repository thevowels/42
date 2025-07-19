
#include <stdio.h>

int	main(int argc, char **argv)
{
	argv++;
	sort_words(argv);

	while(argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (argc);

}

