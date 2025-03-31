#include "range.h"


Range_t* Range_Create(int start, int end){
    Range_t* range = (Range_t*) malloc(sizeof(Range_t));
    if(!range) return NULL;
    if(start > end) return NULL;    // invalid range
    range->start = start;
    range->end = end;
    return range;
}

int Range_Contains(Range_t *range, int value){
    return value>=range->start && value<=range->end;
}

// check if other is fully within range
int Range_ContainsRange(Range_t *range, Range_t *other){
    return other->start>=range->start&&other->end<=range->end;
}

int Range_Overlaps(Range_t *range, Range_t *other) {
    return !(range->end < other->start || other->end < range->start);
}

int Range_Equals(Range_t *range, Range_t *other){
    return range->start==other->start && range->end==other->end;
}

Range_t* Range_Intersection(Range_t *range, Range_t *other){
    if(!Range_Overlaps(range,other))
        return NULL;
    
    Range_t* res = (Range_t*) malloc(sizeof(Range_t));
    if(!res) return NULL;
    res->start = max(range->start,other->start);
    res->end = min(range->end,other->end);
    return res;
}

Range_t* Range_Union(Range_t *range, Range_t *other){
    Range_t* res = (Range_t*) malloc(sizeof(Range_t));
    if(!res) return NULL;
    res->start = min(range->start,other->start);
    res->end = max(range->end,other->end);
    return res;
}