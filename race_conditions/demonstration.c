#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
		usleep(100000);
	}
}

void	*ft_typewriter(void *arg)
{
	char *str = (char *)arg;
	ft_putstr(str);
	return NULL;
}

int	main(void)
{
	pthread_t	thread_1;
	pthread_t	thread_2;

	pthread_create(&thread_1, NULL, ft_typewriter, "DIT IS EEN MOOIE ZIN\n");
	pthread_create(&thread_2, NULL, ft_typewriter, "que sera sera whatever will be.\n");
	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);

	return 0;
}
