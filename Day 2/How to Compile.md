# Compiling a C Program: Behind the Scenes

When you write a C program and run it, several steps happen behind the scenes to convert your code into an executable file.

---

## 🧩 Stages of Compilation

### 🔹 1. **Preprocessing**
- Handles all lines starting with `#`, like `#include`, `#define`, etc.
- Expands macros and includes header files.
- Removes comments.

📌 **Tool Used**: C Preprocessor (`cpp`)

➡️ **Input**: `program.c`  
➡️ **Output**: Preprocessed file (e.g., `program.i`)

---

### 🔹 2. **Compilation**
- Converts preprocessed code into assembly language.
- Checks syntax and translates high-level C into low-level instructions.

📌 **Tool Used**: Compiler (`cc1`, `gcc`)

➡️ **Input**: `program.i`  
➡️ **Output**: Assembly file (e.g., `program.s`)

---

### 🔹 3. **Assembly**
- Converts assembly code to machine code.
- Generates an object file containing binary instructions.

📌 **Tool Used**: Assembler (`as`)

➡️ **Input**: `program.s`  
➡️ **Output**: Object file (e.g., `program.o`)

---

### 🔹 4. **Linking**
- Combines object file with libraries (e.g., `printf()` from `stdio.h`).
- Produces final executable file.

📌 **Tool Used**: Linker (`ld`)

➡️ **Input**: `program.o` + library files  
➡️ **Output**: Executable file (e.g., `a.out` or `program.exe`)

---

## 🖼️ Compilation Flowchart Visualization

![Compilation Flowchart](/mnt/data/A_flowchart_in_the_digital_illustration_visually_r.png)

---

## 🛠️ Example Using GCC (Linux/Unix)

```bash
gcc program.c -o program
```
This command runs all four stages internally:
1. Preprocessing
2. Compilation
3. Assembly
4. Linking

---

## 📌 Summary Table

| Stage         | Tool       | Input        | Output         |
|---------------|------------|--------------|----------------|
| Preprocessing | cpp        | program.c    | program.i      |
| Compilation   | gcc/cc1    | program.i    | program.s      |
| Assembly      | as         | program.s    | program.o      |
| Linking       | ld         | program.o    | program (exe)  |

---

## 🧠 Pro Tip:
Use `gcc -E`, `-S`, `-c` to stop after each stage:

```bash
# Only Preprocessing
gcc -E program.c -o program.i

# Only Compilation
gcc -S program.i -o program.s

# Only Assembly
gcc -c program.s -o program.o
```

---

