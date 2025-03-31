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

3. **Generate the Python bindings**:  
   Run the following command to generate the SWIG wrapper and other related files (range_wrap.c and range.py):  
   ```bash
   swig -python range.i
4. **Linking and Installing the Module"
  ```bash
  python setup.py build_ext --inplace
  ```

