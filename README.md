## Signals for processes
- following [YouTube](https://www.youtube.com/watch?v=m6WXrC9Mxzo) tutorial


### Usage:
> Prerequisites:
```bash
# Create ./bin folder:
mkdir -p ./bin
# Install libraries:
sudo apt-get install libsdl2-dev libsdl2-mixer-dev
```

> Compile **program_a**:
```bash
gcc program_a.c -o ./bin/program_a
# with SDL2 library for audio:
gcc -o ./bin/program_a program_a.c play_audio.c -lSDL2 -lSDL2_mixer
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