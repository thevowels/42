
#include <stdio.h>

int	main(int argc, char **argv)
{
	argc--;
	while(argc >=1)
	{
		printf("%s\n", argv[argc]);
		argc--;
	}

	return (argc);

}

