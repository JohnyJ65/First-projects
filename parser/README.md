# Overview
This project is a simple text‑analysis tool written in Python.
It reads a user‑selected text file and performs different operations such as:

Counting total words and characters

Finding the longest word(s)

Calculating average word length

Counting occurrences of a specific character

Counting the number of unique words

The program uses a menu‑driven interface so the user can run multiple operations on the same file.

# Features
1. Word and Character Count
Counts:

Total number of words

Total number of characters (excluding newline characters)

2. Longest Word Finder
Removes punctuation from words

Finds the longest word(s) in the file

Supports multiple longest words with the same length

3. Average Word Length
Computes the average number of letters per word

Rounds the result to two decimal places

4. Character Counter
Counts how many times a specific character appears in the file

Case‑sensitive (e.g., a and A are counted separately)

5. Unique Word Counter
Removes punctuation

Converts words to lowercase

Uses a Python set to automatically remove duplicates

Returns the number of unique words in the file

# How to Use
Run the Python script.

Enter the name of the text file you want to analyze.

Choose an option from the menu:

Code
1) Count words and characters
2) Find the longest word in the file
3) Calculate the average length of the words in a file
4) Count number of a certain character or word
5) Count the number of unique words
After each operation, the program asks if you want to run another one.

Enter N to continue or Y to exit.
