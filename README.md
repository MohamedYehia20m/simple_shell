# Simple Shell

A simple shell is a command-line interpreter program that provides a basic interface for users to interact with the operating system. This project aims to create a minimalistic shell implementation with essential features.

## Features

- Command execution: The shell can execute external commands by forking a child process and executing the command in it.
- Built-in commands: The shell supports a set of built-in commands, such as `cd`, `pwd`, `echo`, etc., which are executed within the shell process itself.
- Piping: The shell supports piping of commands using the `|` operator, allowing the output of one command to be used as input to another command.

## Getting Started

### Prerequisites

- C compiler (e.g., GCC)

### Installation

1. Clone the repository:

   ```shell
   git clone https://github.com/MohamedYehia20m/simple-shell.git
   ```

2. Compile the source code:

   ````shell
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
   ```

3. Run the shell:

   ````shell
   ./hsh
   ```

## Usage

Once the shell is running, you can enter commands and execute them. Here are a few examples:

- Execute an external command:

  ````shell
  $ ls -l
  ```

- Execute a built-in command:

  ````shell
  $ cd /path/to/directory
  ```

- Pipe commands:

  ````shell
  $ ls -l | grep "example"
  ```

For more information on available commands and their usage, refer to the man pages or consult the documentation.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request. Make sure to follow the project's code of conduct.

## License

This project is licensed under the [MIT License](LICENSE).



Feel free to customize and modify this template to fit your specific shell project.
