# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Purpose

Educational repository of GOF (Gang of Four) design pattern implementations in C++20, each with a visual/interactive SFML demo. Intended to help students of a software engineering course understand and implement design patterns.

## Build & Run

Each pattern lives in its own directory with its own `makefile`. Commands are run from inside the pattern's directory:

```bash
cd <Pattern>        # e.g. cd State, cd Builder, cd Observer
mingw32-make        # compile
mingw32-make run    # compile and run
mingw32-make clean  # remove build/ and bin/
mingw32-make rebuild  # clean + compile
```

The output executable is always `bin/app.exe`.

**Platform:** Windows (MinGW-w64 GCC 15.2.0+). The Makefiles use Windows-style `mkdir`/`rmdir` commands and expect SFML 3.0 installed at `C:\Program Files (x86)\SFML`.

**Standard:** C++20 (`-std=c++20`), SFML linked statically (`-DSFML_STATIC`, `-static-libgcc`, `-static-libstdc++`).

## Architecture

Every pattern follows the same structure:

```
Pattern/
├── makefile
├── src/          # .cpp implementations (all compiled together)
├── include/      # .h headers
├── build/        # object files (auto-generated)
├── bin/          # app.exe (auto-generated)
└── UML/          # PNG/PDF diagrams (GOF example + project-specific)
```

`main.cpp` is always minimal — it instantiates a top-level "game" or "client" class and calls `executar()`. The real logic lives in `src/`.

### Pattern implementations so far

| Pattern | Category | Key classes |
|---|---|---|
| **State** | Behavioral | `Jogo` (context), `EstadoJogo` (abstract state), `Menu`/`Fase` (concrete states) |
| **Observer** | Behavioral | `subject`/`ConcreteSubject`, `Observer`, `Game` |
| **Builder** | Creational | `Builder` (abstract), `BuilderArmaJogador`/`BuilderArmaBoss`/`BuilderArmaEsqueleto`, `Director`, `Client`, `Arma` (product) |
| **Singleton** | Creational | `Singleton`, `Principal` |
| **AbstractFactory** | Creational | stub only (`main.cpp` returns 0) |

Each SFML-based pattern wraps its window loop inside the top-level class's `executar()` method.

### UML diagrams

`ArquivosUML/` holds Astah project files (`.asta`) for patterns that have been modelled. Each pattern directory's `UML/` folder has the exported PNG/PDF plus the GOF reference image (`*ExemploGOF.png`).

## Adding a New Pattern

1. Create a new top-level directory named after the pattern.
2. Copy a `makefile` from an existing pattern — update the source/include paths if needed.
3. Follow the `src/` + `include/` split; expose a single entry-point class with `executar()`.
4. Add a `UML/` subdirectory with at minimum the GOF reference image.
5. Create an Astah file in `ArquivosUML/` once the UML is designed.
