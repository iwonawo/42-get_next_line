# get_next_line
This project is about programming a function that returns a line read from a file descriptor. Bonus get_next_line() can manage multiple file descriptors at the same time.

## Table of Contents
- [Installation](#installation)

## Installation
To use get_next_line, follow these steps. For bonus use files with _bonus.[c\h] suffix.

1. Clone the repository:
https://github.com/iwonawo/42-get_next_line.git

2. Include header to use the function in code:

mandatory part:
```C
#include "get_next_line.h"
```

bonus:
```C
#include "get_next_line_bonus.h"
```

3. Compile your code adding the source files and the required flag:

mandatory part:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c your_program.c -o your_program
```

bonus:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line_bonus.c get_next_line_utils_bonus.c your_program.c -o your_program
```
