## Signals for processes
- following [YouTube](https://www.youtube.com/watch?v=m6WXrC9Mxzo) tutorial


### Usage:
> Create ./bin folder:
```
mkdir -p ./bin
```

> Compile **program_a**:
```bash
gcc program_a.c -o ./bin/program_a
```

> Compile **program_b**:
```bash
gcc program_b.c -o ./bin/program_b
```

> Run in parallel and use **pid** from **program_a** as parameter in **program_b**
```bash
./bin/program_a
```

```bash
./bin/program_b 1234
```