# Command Line IO Redirection

This simple C program is designed to read text input from the command line and redirect it to output with each word placed on a new line. Non-alphabetical characters are treated as word delimiters.

## Description

The program processes each character input from the command line. When it encounters a letter (either uppercase or lowercase), it outputs that letter. Once it encounters a non-letter character, it treats it as the end of a word and outputs a newline character. This is especially useful for text processing in command line utilities where word-based formatting is required.

## Usage

To use this program, you need to compile it first using a C compiler like `gcc`. Here's how you can do it:

```bash
gcc -o clioredirect main.c
```

Once compiled, you can run the program using:

```bash
./clioredirect
```

You can also use it with IO redirection or piping in a Unix-like environment:

```bash
cat yourfile.txt | ./clioredirect
```

## Output

The program outputs each word detected in the input stream to the standard output, separated by a newline. A 'word' is defined as a sequence of alphabetical characters. Any non-alphabetical character is treated as a separator between words.

If you wish to save the output to a file instead of displaying it on the terminal, you can redirect the output to a file like this:

```sh
./wordseparator < path_to_your_file.txt > output.txt
```

## Additional Information

- The program does not differentiate between uppercase and lowercase characters. The words are output as they are read.
- No additional libraries are required for the program to run, only the standard C library.
- This program is designed to be simple and does not handle special text encoding or binary files.