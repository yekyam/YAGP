# YAGP - Yet Another Arg Parse Library for C++

Rationale: I often find myself dealing with argument parsing, and I got tired of dealing with it.


I found this [article](https://mostsignificant.github.io/c++/2021/11/03/3-ways-to-parse-command-line-arguments-in-C++-quick-do-it-yourself-or-comprehensive.html) which detailed a DIY version of argument parsing. I decided to 
stuff it in a class, add some basic conversions, and wrapped everything in `std::optional`s to avoid exception handling.
Honestly, this is mainly for my own use, but if others find use, that's great.

## Features:
- **Supports basic conversions** (int, float, std::string_view, bool)
- Supports max argument counts
- Supports verbosity
- **No exceptions**
- **Header Only**
- **No dependencies**
- Simple!

## Examples - In Code:

Creating an instance of args:

```
argparse::Args args(argc, argv);
```

Getting a value:

```
std::optional<int> int_opt = args.get<int>("-int_name");
```

## Examples - In CLI:
```
./program -int_name 5
```

Full code example in example.cpp