#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	char *s2;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2,s1);
	return(s2);
}
