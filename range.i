%module range
%{
#include "range.h"
%}

Range_t *Range_Create(int start, int end);
int Range_Contains(Range_t *range, int value);
int Range_Contains(Range_t *range, int value);
int Range_ContainsRange(Range_t *range, Range_t *other);
int Range_Overlaps(Range_t *range, Range_t *other);
int Range_Equals(Range_t *range, Range_t *other);

Range_t* Range_Intersection(Range_t *range, Range_t *other);
Range_t* Range_Union(Range_t *range, Range_t *other);

typedef struct Range_s{
    int start;
    int end;
}Range_t;
