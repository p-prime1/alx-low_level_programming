#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, len1, len2;

	
	i = 0;
	len1 = 0;
	len2 = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2 += 1;
	//printf("%d", (len1 + len2));
	s3 = (char *) malloc(sizeof(char) * (len1 + len2));
	if (s3 == NULL)
		return NULL;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
		}
	s3[i] = '\0';
	return (s3);
	free (s3);
}
