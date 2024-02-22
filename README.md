# Coin Organization

Programming Language: C

Given a list of individuals and how much they paid followed by a value ratio for the currency, the program sorts the individuals from greatest to least in terms of paid value

# Story
The advertising scheme worked. Unfortunately, you have many more orders coming in than can be completed in a timely fashion. You will organize individuals by the amount of money they pay you. There are two denominations used in Gameland: tokens, and bills. All bills are equivalent in value and all tokens are equivalent in value. Due to some individuals on popular online forms, the value of tokens with respect to the value of bills fluctuates quite often. We compare the two currencies by stating “a tokens is worth b bills”.

We know much money each person gave us in terms of number of tokens and number of bills.
We just need to sort them based on the newest value ratio given.

# Input
Input will begin with a line containing 1 integers, n (1 ≤ n ≤ 100,000), representing the number of paying customers. The following n lines will each contain a description of a customer. The i-th of which contains a single name followed by two space separated non-negative integers, ti and bi, (0 ≤ ti, bi ≤ 100,000), representing the number of tokens and the number bills the i-th person paid respectively.

The last line of input will contain 2 integers a and b, (1 ≤ a, b ≤ 100,000), those value represent the exchange rate between the two currencies “a tokens is worth b bills”.

Each name will have at least one and at most 20 characters. Names will not contain whitespace
characters.

# Output
Output should contain n lines. Each line will contain a corresponding resulting handle based on
the input.

## Sample Input: #1
```text
  5
  John 3 10
  Jacob 7 7
  Rob 5 8
  Nancy 4 5
  Phil 11 4
  10 13
```

## Sample Output: #1
```text
  Phil
  Jacob
  Rob
  John
  Nancy
```
