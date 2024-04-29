# Anagram Checker

The Anagram Checker is a simple C program that determines whether two given strings are anagrams of each other. Anagrams are words or phrases formed by rearranging the letters of another word or phrase, using all the original letters exactly once.

## Features

- **Efficient Algorithm**: The program utilizes an efficient algorithm to determine whether two strings are anagrams, with a time complexity of O(n).
- **Case Sensitivity**: The program is case-sensitive, distinguishing between uppercase and lowercase characters.
- **Unicode Support**: The program supports Unicode characters, allowing for anagrams in different languages and character sets.
- **Customization**: Users can easily modify the program to check anagrams of longer strings or to integrate it into larger applications.

## Usage

1. **Compilation**: Compile the source code using a C compiler such as GCC.
2. **Execution**: Run the compiled executable.
3. **Input**: Modify the `s1` and `s2` variables in the `main` function to specify the strings you want to check for anagrams.
4. **Output**: The program will print whether the two strings are anagrams or not.

## Example

Here's an example of checking whether two strings are anagrams:

#-#-#[c]
const char *s1 = "listen";
const char *s2 = "silent";

if (areAnagrams(s1, s2)) {
 printf("%s and %s are anagrams.\n", s1, s2);
} else {
 printf("%s and %s are not anagrams.\n", s1, s2);
}
