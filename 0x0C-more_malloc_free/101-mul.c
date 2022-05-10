#inclue "main.h"

/**
 * main - multiply two numbers from the command line and print the result
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if successful, 98 if failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_strdigit(argv[1]) || !_strdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	result = strmul(argv[1], argv[2]);
	if (result == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	_puts(result);
	_putchar('\n');
	free(result);
	exit(EXIT_SUCCESS);
}
