#include <stdio.h>
#include <pthread.h>

int	shared_data = 0;

void	*ft_write(void *arg)
{
	shared_data = 666;

	return NULL;
}

void	*ft_read(void *arg)
{
	printf("shared data: %d\n", shared_data);

	return NULL;
}

int	main(void)
{
	pthread_t	producer;
	pthread_t	consumer;

	pthread_create(&producer, NULL, ft_write, NULL);
	pthread_create(&consumer, NULL, ft_read, NULL);

	pthread_join(producer, NULL);
	pthread_join(consumer, NULL);

	return 0;
}
