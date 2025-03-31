#ifndef RANGE_H
#define RANGE_H
#include <stdlib.h>


typedef struct Range_s{
    int start;
    int end;
}Range_t;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))


extern Range_t *Range_Create(int start, int end);

extern int Range_Contains(Range_t *range, int value);
extern int Range_ContainsRange(Range_t *range, Range_t *other);
extern int Range_Overlaps(Range_t *range, Range_t *other);
extern int Range_Equals(Range_t *range, Range_t *other);

extern Range_t* Range_Intersection(Range_t *range, Range_t *other);
extern Range_t* Range_Union(Range_t *range, Range_t *other);

#endif