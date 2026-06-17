# push_swap

> **42 cursus** · C · sort a stack with the fewest possible operations.

A sorting algorithm that orders a stack of integers using a limited set of operations and a second auxiliary stack, aiming for the smallest number of moves.

## Features

- Sorts integers using only the allowed operations (`sa`, `pb`, `rr`, `rra`…)
- Optimized strategy (e.g. chunk / radix) to minimise operation count
- Bonus `checker` program to validate a sequence of operations

## Build

```bash
make            # builds push_swap (and checker for bonus)
```

## Usage

```bash
./push_swap 3 2 1 6 5 8
# count the operations
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

## Key concepts

Algorithmic complexity, stack data structures and operation-cost optimisation.

---

*42 cursus project — [github.com/rjacquet31](https://github.com/rjacquet31)*
