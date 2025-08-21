## Signals for processes
- following [YouTube](https://www.youtube.com/watch?v=m6WXrC9Mxzo) tutorial


### Usage:
> Compile **program_a**:
```bash
gcc program_a.c -o program_a
```
> Compile **program_b**:
```bash
gcc program_b.c -o program_b
```
> Run in parallel and use **pid** from **program_a** as parameter in **program_b**
```bash
./program_a
```

```bash
./program_b 1234
```