<<<<<<< HEAD
# shellby - Simple Shell :shell:

A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.

## Description :speech_balloon:

**Shellby** is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.

### Invocation :running:

Usage: **shellby** [filename]

To invoke **shellby**, compile all `.c` files in the repository and run the resulting executable:

```
gcc *.c -o shellby
./shellby
```

**Shellby** can be invoked both interactively and non-interactively. If **shellby** is invoked with standard input not connected to a terminal, it reads and executes received commands in order.

Example:
```
$ echo "echo 'hello'" | ./shellby
'hello'
$
```

If **shellby** is invoked with standard input connected to a terminal (determined by [isatty](https://linux.die.net/man/3/isatty)(3)), an *interactive* shell is opened. When executing interactively, **shellby** displays the prompt `$ ` when it is ready to read a command.

Example:
```
$./shellby
$
```

Alternatively, if command line arguments are supplied upon invocation, **shellby** treats the first argument as a file from which to read commands. The supplied file should contain one command per line. **Shellby** runs each of the commands contained in the file in order before exiting.

Example:
```
$ cat test
echo 'hello'
$ ./shellby test
'hello'
$
```
=======
readme
>>>>>>> 894da359f5ce2f88cd225602cac7f65d018fbd29
