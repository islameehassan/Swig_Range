from distutils.core import setup, Extension


example_module = Extension('_range',
                           sources=['range_wrap.c', 'range.c'],
                           )

setup (name = 'range',
       version = '0.1',
       author      = "Islam Hassan",
       description = """Range package""",
       ext_modules = [example_module],
       py_modules = ["range"],
       )