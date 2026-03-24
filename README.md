*This project has been created as part of the 42 curriculum by pmuzika.*

## Description
- Push_Swap is a program that sorts a set of integers provided as command-line arguments.
- This program uses two available stacks and four possible moves: push, swap, rotate and reverse rotate.
- For a given set of parameters, the program prints the sequence of moves required to sort the stack.
- The goal is to use the shortest possible sequence of moves.
- If the input contains invalid parameters or duplicates, the program prints "Error".

## Choice of algorithm
- We implemented radix sort for its simplicity and reliability.
- The algorithm sorts integers bit by bit, starting from the least significant up to the most significant.
- While radix sort is not the most efficient possible, it performs well enough according to the benchmarks described in the subject.

## Instructions
- At the root of the cloned repository, compile the program with:
```bash
make
```
- Execute with a set of integers ($ARG) as arguments:
```bash
./push_swap $ARG
```
- To count the number of moves required to sort the set:
```bash
./push_swap $ARG | wc -l
```
- To test the program using the provided checker:
```bash
./push_swap $ARG | checker_linux $ARG
```

## Resources
- Blog article introducing the radix sort algorithm: https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
- Bitwise operators: https://www.programiz.com/c-programming/bitwise-operators
- Tested with https://github.com/gemartin99/Push-Swap-Tester and https://github.com/LeoFu9487/push_swap_tester