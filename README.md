# Simple CMake Project

This is a simple project I created to learn how **CMake** works. It demonstrates a basic CMake setup for building and running a C program.

## Features

- **Basic CMake setup** for compiling a C program.
- **Custom build target** to run the executable after building.
- **Executable output** placed in the source directory.

## Prerequisites

- **CMake** (version 3.10 or higher)
- **C compiler** (I used gcc)

## How to Build and Run

1. Clone the repository:
```bash
git clone https://github.com/Xaristrike/SimpleCMakeProject.git
cd SimpleCMakeProject
```

2. Generate the build system:
```bash
cmake -S . -B build
```

3. Build the project:
```bash
cmake --build build
```

4. Run the executable:
```bash
cmake --build build --target run
```

## Closing thoughts

Not much, just wanted to say that cmake is pain.
