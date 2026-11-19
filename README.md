*This project has been created as part of the 42 curriculum by ketolba, hugdelie.*

# push_swap

## Description

`push_swap` sorts a list of integers using two stacks (**a** and **b**) and a
small set of operations. The goal is to print the **shortest possible list of
operations** that sorts stack **a** in ascending order.

```
 stack a        stack b
 ┌─────┐        ┌─────┐
 │  3  │  pb →  │     │
 │  1  │  ← pa  │     │
 │  2  │        │     │
 └─────┘        └─────┘
```

### Allowed operations

| Op    | Effect                                              |
|-------|-----------------------------------------------------|
| `sa` `sb` `ss` | swap the first 2 elements of a / b / both  |
| `pa` `pb`      | push the top of b onto a / top of a onto b |
| `ra` `rb` `rr` | rotate up: first element becomes last      |
| `rra` `rrb` `rrr` | rotate down: last element becomes first |

### Strategies

Every number is first replaced by its **rank** (0 = smallest), so the
algorithms work on `0 … n-1` instead of raw values.

| Flag         | Algorithm                         | Complexity |
|--------------|-----------------------------------|------------|
| `--simple`   | Selection sort: move the min to the top, `pb`, repeat, then push everything back | O(n²) |
| `--medium`   | Chunk sort: push ranks chunk by chunk to b, then bring them back in order | O(n√n) |
| `--complex`  | Radix sort (LSD, binary) on the ranks | O(n log n) |
| `--adaptive` (default) | Picks a strategy from the input's **disorder** | — |

**Adaptive mode.** The program measures the disorder of the input: the share
of pairs `(i, j)` with `i` before `j` but `a[i] > a[j]` (0 = sorted, 1 = reversed).

```
 disorder ≤ 0.2  →  simple  (almost sorted, few moves needed)
 disorder ≤ 0.5  →  medium
 disorder > 0.5  →  complex
```

Small inputs (≤ 5 numbers) always use a hand-written sort (`sa`, sort of 3,
sort of 5).

## Instructions

### Build

```bash
make        # builds libft, ft_printf, then push_swap
make clean  # removes object files
make fclean # removes objects and the binary
make re     # fclean + all
```

### Usage

```bash
./push_swap [--simple | --medium | --complex | --adaptive] <numbers...>
```

Examples:

```bash
./push_swap 2 1 3 6 5 8
./push_swap --complex 42 -7 0 13
ARG=$(shuf -i 1-1000 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l
```

The program prints `Error` on stderr when an argument is not an integer, is out
of `int` range, is duplicated, or when the flag is unknown.

### Example results (random inputs)

| Size | `--simple` | `--medium` | `--complex` |
|------|-----------:|-----------:|------------:|
| 100  | ~1500      | ~800       | ~1080       |
| 500  | ~32000     | ~8000      | ~6800       |

## Project structure

```
.
├── includes/push_swap.h   # t_stack struct, prototypes, strategy defines
├── src/
│   ├── push_swap.c        # main: parse, measure disorder, dispatch
│   ├── sa.c … rrr.c       # the 11 operations
│   ├── ft_init_stack.c    # argument parsing + validation
│   ├── ft_check_sort.c    # disorder computation
│   ├── ft_selection_sort.c, ft_chunk_sort.c, ft_sort_radix.c
│   └── ft_sort_three.c, ft_sort_five.c, ft_short_sort.c
├── libft/                 # our libft
└── printf/                # our ft_printf
```

## Resources

- 42 push_swap subject
- [Sorting algorithm (Wikipedia)](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Radix sort (Wikipedia)](https://en.wikipedia.org/wiki/Radix_sort)
- [Inversion (discrete mathematics)](https://en.wikipedia.org/wiki/Inversion_(discrete_mathematics)) — the idea behind the disorder metric

