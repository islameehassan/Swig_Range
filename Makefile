PYTHON_INCLUDE = $(shell python3 -c "import sysconfig; print(sysconfig.get_path('include'))")

C = gcc
SWIG = swig
SWIGFLAGS = -python
CFLAGS = -fPIC -Wall -I$(PYTHON_INCLUDE)
LDFLAGS = -shared
module_name = range

target = _$(module_name).so

$(target): $(module_name)_wrap.o $(module_name).o
	$(C) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(C) $(CFLAGS) -c $< -o $@

$(module_name)_wrap.c: $(module_name).i
	$(SWIG) $(SWIGFLAGS) $<

clean:
	rm -f *.o *.so *_wrap.c $(module_name).py
