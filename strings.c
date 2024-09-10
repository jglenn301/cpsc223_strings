#include <string.h>
#include <stdio.h>

int main()
{
  char start[] = "IST";
  char end[] = {'E', 'W', 'R'}; // missing /0 causes unpredictable behavior
  char tour[10];
  strcpy(tour, start);
  strcat(tour, "-");
  strcat(tour, end);

  printf("tour %s\n", tour); // IST-EWRIST (on the Zoo today, at least)
  printf("end %s\n", end);
  printf("start %s\n", start);
}

