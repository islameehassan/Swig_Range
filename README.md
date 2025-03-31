# Swig_Range
This repository demonstrates how to create a Python `range` module using SWIG to expose the C `Range_t` struct and its associated functions.  

### API  

- **`Range(start, end)`** – Creates a new `Range` object.  
- **`Range.start`** – Gets or sets the `start` attribute.  
- **`Range.end`** – Gets or sets the `end` attribute.  
- **`Range.contains(value)`** – Returns `True` if `value` is within the range.  
- **`Range.contains_range(other)`** – Returns `True` if `other` range is fully contained.  
- **`Range.overlaps(other)`** – Returns `True` if the two ranges overlap.  
- **`Range.equals(other)`** – Returns `True` if the two ranges are equal.  
- **`Range.intersection(other)`** – Returns a new `Range` representing the intersection.  
- **`Range.union(other)`** – Returns a new `Range` representing the union.

