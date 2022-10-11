#include <iostream>

class Megaphone
{
public:
	Megaphone(char **argv);
	~Megaphone();
};

Megaphone::Megaphone(char **argv)
{
	int i, j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
				argv[i][j] = argv[i][j] - 32;
			j++;
		}
		std::cout<<argv[i];
		i++;
	}
	if (i == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		std::cout<<"\n";
}

Megaphone::~Megaphone()
{
}
int	main(int argc, char **argv)
{
	(void) argc;
	Megaphone m(argv);
	return 0;
}