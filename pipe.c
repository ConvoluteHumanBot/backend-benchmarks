#include <stdio.h>
#include <stdlib.h>

long main()
{
  int v1l = 0, v2l = 0;
  fscanf(stdin, "%d", &v1l);
  int *v1 = malloc(sizeof(int) * v1l);
  for (int i = 0; i < v1l; i++)
  {
    fscanf(stdin, "%d", &v1[i]);
  }
  fscanf(stdin, "%d", &v2l);
  if (v1l != v2l)
  {
    fprintf(stderr, "Error");
    fflush(stderr);
    return 0;
  }
  int *v2 = malloc(sizeof(int) * v2l);
  for (int i = 0; i < v2l; i++)
  {
    fscanf(stdin, "%d", &v2[i]);
  }
  for (int i = 0; i < v1l; i++)
  {
    fprintf(stdout, "%d ", v1[i] * v2[i]);
  }
  fflush(stdout);
  return 0;
}
