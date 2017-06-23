#include <stdio.h>
#include <stdlib.h>

static void(*program_exit)(int ret);

static void register_init(void(*cb)(int ret))
{
	program_exit = cb;

}

static void exit_program(int ret)
{
	if (program_exit)
	{
		printf("program exit from register\n");
		program_exit(ret);

	}

	printf("program exit from exit\n");
	exit(ret);

}

static void exit_register(int ret)
{
	printf("this is exit function for register. errno:%d\n", ret);
	exit(ret);

}

int main(int argc, char** argv)
{
	register_init(exit_register);

	exit_program(100);

	return 0;

}
