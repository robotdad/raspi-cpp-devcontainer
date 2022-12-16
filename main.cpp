// main.cpp : Defines the entry point for the application.
//

#include "main.h"
#include <sys/utsname.h>
#include <sys/unistd.h>

using namespace std;

int main()
{
	struct utsname buffer;
	uname(&buffer);

	while (1)
	{
		std::cout << "Hello from " << buffer.nodename << std::endl;
		sleep(2);
	}

	return 0;
}
