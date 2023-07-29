0x18. C - Dynamic libraries


Dynamic libraries, also known as shared libraries, are libraries that are loaded by programs when they start up or at runtime, rather than being compiled into the executable. When a program uses a dynamic library, it can share this library with other programs, meaning that the code doesn't have to be duplicated in memory or in storage for each program that uses it. This can make programs smaller and use less memory.

In the context of Python, dynamic libraries come into play when using extension modules. These are often written in languages like C or C++, compiled to a shared library, and then loaded by the Python interpreter at runtime. This allows Python to interface with code written in these languages for more performance-critical tasks.

Different operating systems have different conventions for dynamic libraries:

- On Linux and other Unix-like systems, dynamic libraries typically have the extension `.so` (for "shared object").
- On macOS, the extension is typically `.dylib`.
- On Windows, the extension is `.dll` (for "dynamic-link library").

These libraries can be loaded and unloaded at runtime using system calls provided by the operating system, and their symbols (functions, variables) can be accessed through a process known as dynamic linking. This is in contrast to static libraries, which are included into the binary at compile-time and cannot be shared or changed after the binary has been created.

Tasks
0. A library is not a luxury but one of the necessities of life

1. Without libraries what have we? We have no past and no future

2. Let's call C functions from Python

3. Code injection: Win the Giga Millions!
