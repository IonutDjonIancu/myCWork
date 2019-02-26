#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

FILE *stream, *stream2;

int main()
{
	errno_t err;

	// Open for read (will fail if file "crt_fopen_s.c" does not exist)
	err = fopen_s(&stream, "crt_fopen_s.c", "r");
	if (err == 0)
	{
		printf("The file 'crt_fopen_s.c' was opened\n");
	}
	else
	{
		printf("The file 'crt_fopen_s.c' was not opened\n");
	}

	// Open for write
	err = fopen_s(&stream2, "data2", "w+");
	if (err == 0)
	{
		printf("The file 'data2' was opened\n");
	}
	else
	{
		printf("The file 'data2' was not opened\n");
	}

	// Close stream if it is not NULL
	if (stream)
	{
		err = fclose(stream);
		if (err == 0)
		{
			printf("The file 'crt_fopen_s.c' was closed\n");
		}
		else
		{
			printf("The file 'crt_fopen_s.c' was not closed\n");
		}
	}

	// All other files are closed:
	int numclosed = _fcloseall();
	printf("Number of files closed by _fcloseall: %u\n", numclosed);





	_getch();
	return 0;
}
