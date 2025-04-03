#include <stdio.h> // printf
#include <pthread.h> // pthread_*

// thread function
void	*function(void *arg)
{
	printf("waddup\n");
	return NULL;
}

int	main(void)
{
	// declare a thread identifier
	pthread_t	thread;

	// create a thread
	pthread_create(&thread, NULL, function, NULL);

	// wait for thread to finish
	pthread_join(thread, NULL);

	return 0;
}
