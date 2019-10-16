#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "candidates.h"

struct candidate example(void){
  struct candidate c0;
  c0.name = "Biden";
  c0.popularity = 25;

  struct candidate c1;
  c1.name = "Warren";
  c1.popularity = 29;

  struct candidate c2;
  c2.name = "Sanders";
  c2.popularity = 13;

  struct candidate c3;
  c3.name = "Buttigieg";
  c3.popularity = 7;

  struct candidate c4;
  c4.name = "Harris";
  c4.popularity = 5;

  struct candidate c5;
  c5.name = "O'Rourke";
  c5.popularity = 2;

  struct candidate c6;
  c6.name = "Yang";
  c6.popularity = 2;

  struct candidate c7;
  c7.name = "Kloubuchar";
  c7.popularity = 2;

  struct candidate c8;
  c8.name = "Booker";
  c8.popularity = 1;

  struct candidate c9;
  c9.name = "Steyer";
  c9.popularity = 1;

  struct candidate c10;
  c10.name = "Gabbard";
  c10.popularity = 3;

  struct candidate c11;
  c11.name = "Bennet";
  c11.popularity = 1;

  struct candidate c12;
  c12.name = "Castro";
  c12.popularity = 0;

  srand(time(NULL));
  struct candidate pool[13] = {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12};
  return (pool[rand() % 13]);
}

void printCandidate(struct candidate c){
  printf("Name: %s\tPolling Popularity: %d%%\n", c.name, c.popularity);
}

void modifyPopularity(struct candidate *c, int n){
  c->popularity = n;
}
