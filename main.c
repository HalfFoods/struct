#include <stdio.h>
#include <stdlib.h>
#include "candidates.h"

int main(){
  printf("Example:\n");
  struct candidate c = example();
  printCandidate(c);
  modifyPopularity(&c, 50);
  printf("After spending $1 billion on their campaign and dominating the next debate:\n");
  printCandidate(c);
  return 0;
}
