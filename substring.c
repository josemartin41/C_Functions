#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*substring(char *str, int startIndex, int endIndex)
{
  if (str == NULL)
    return (NULL);
  if (startIndex > endIndex)
    return (NULL);
  int diff = endIndex - startIndex;
  int i = 0;
  char *final;
  final = malloc(sizeof(char) * (diff + 1));
  while (startIndex != (endIndex + 1))
    {
      final[i] = str[startIndex];
      i++;
      startIndex++;
    }
  final[i] = '\0';
  return (final);
}
