#include <string.h>
#include <stdio.h>

int main()
{
  char start[] = "IST";
  char end[] = {'E', 'W', 'R', '\0'}; // or just use string initializer!
  char tour[8];
  strcpy(tour, start);
  strcat(tour, "-");
  strcat(tour, end);

  printf("tour %s\n", tour); // IST-EWR, as expected
  printf("end %s\n", end);
  printf("start %s\n", start);
}

