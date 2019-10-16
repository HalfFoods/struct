struct candidate {
  char* name;
  int popularity;
};
struct candidate example(void);
void printCandidate(struct candidate c);
void modifyPopularity(struct candidate *c, int n);
