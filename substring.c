#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *substring(char *str, int startIndex, int endIndex);

void	*errorf(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  write(1, str, i);
  return (NULL);
}

char	*substring(char *str, int startIndex, int endIndex)
{
  if (str == NULL)
    return (errorf("String is Null"));
  if (startIndex > endIndex)
    return (errorf("StartIndex is greater than EndIndex"));
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

int	main()
{
  char str[] = "Jose Martin Garcia Diaz del Valle";
  char *cuttedStr;
  cuttedStr = substring(str, 5, 17);
  printf("%s\n", cuttedStr);
}
