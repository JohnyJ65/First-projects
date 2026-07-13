# Random Number Matching & Probability Simulator (Python)
This project is a small Python program that explores probability concepts using randomly generated numbers. It compares randomly generated sets of numbers against predefined sets, counts matches, analyzes prime numbers, and runs repeated simulations to observe patterns.

The goal of the project is to practice:

random number generation

list comparison

nested loops

prime‑number checking

repeated trials

simple statistical analysis

writing modular functions


# Features
1. Random Number Generation
The draw() function generates a list of six random integers between 1 and 49.

2. Matching Logic
compare_single() counts how many numbers match between two lists.

compare() compares a random draw against multiple predefined lists.

3. Prime Number Analysis
primes() counts how many prime numbers appear in a random draw.

check_primes() finds which primes (from 1–49) do not appear in any of the predefined lists.

4. Repeated Simulation
lotto() repeatedly generates random draws until a target number of matches is reached.

Prints a dot every 20 iterations to show progress.

Returns the number of attempts required.

5. Averaging Results
draw_average() runs 20 random draws and computes the average number of matches.

# How It Works
Four predefined number sets (my_tickets) are stored in a list.

A list of prime numbers from 1–49 is stored in my_primes.

A random draw is generated.

The program prints:

the random draw

matches against each predefined set

number of primes in the draw

which primes never appear in any predefined set

how many draws it takes to reach 3, 4, or 5 matches

the average matches over 20 trials