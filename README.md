# Swig_Range
This repository demonstrates how to create a Python `range` module using SWIG to expose the C `Range_t` struct and its associated functions.  

### API  
- **`Range(start, end)`** – Creates a new `Range` object.  
- **`Range.start`** – Gets or sets the `start` attribute.  
- **`Range.end`** – Gets or sets the `end` attribute.  
- **`Range.contains(range, value)`** – Returns `True` if `value` is within `range`.  
- **`Range.contains_range(range, other)`** – Returns `True` if `other` is fully contained within `range`.  
- **`Range.overlaps(range, other)`** – Returns `True` if `range` and `other` overlap.  
- **`Range.equals(range, other)`** – Returns `True` if `range` and `other` are equal.  
- **`Range.intersection(range, other)`** – Returns a new `Range` representing the intersection of `range` and `other`.  
- **`Range.union(range, other)`** – Returns a new `Range` representing the union of `range` and `other`.
- 
### Installation Instructions  

1. **Install SWIG** (if not already installed):  
   - For Ubuntu:  
     ```bash
     sudo apt-get install swig
     ```
   - For macOS (using Homebrew):  
     ```bash
     brew install swig
     ```

2. **Clone the repository** (or download the files).  

3. Run the following command to compile and generate the shared library:
```bash
make
```

### Using the module
```python
import range
r = range.Range(1, 10)
print(r.contains(5))  # True
```

