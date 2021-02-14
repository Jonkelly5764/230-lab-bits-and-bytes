#ifndef __SET
#define __SET

#define N 100

// An array of unsigned integers that keeps a tally of what elements are
// contained in the set. The total number of elements it can keep track of
// is N x 32.
unsigned int J[N]; 

int add_element(int v);
int remove_element(int v);
int contains_element(int v);

#endif
