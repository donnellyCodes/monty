# 🐍 Monty Bytecode Interpreter

Monty is a simple scripting language that uses a stack-based virtual machine. This project is a Monty bytecode interpreter written in C. It reads Monty `.m` files and executes opcodes defined in them, manipulating a stack or queue accordingly.

---

## 📚 Table of Contents

- [About the Project](#about-the-project)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Supported Opcodes](#supported-opcodes)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

---

## 📖 About the Project

This interpreter reads Monty bytecode files line by line and performs stack operations as instructed by the opcodes in each line. It was built for educational purposes to demonstrate the use of data structures, file I/O, and memory management in C.

---

## 🚀 Getting Started

### ✅ Prerequisites

- GCC compiler
- `make` utility
- Unix-based environment (Linux or macOS)

### 🔧 Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/donnellyCodes/monty.git
   cd monty

2. **Compile the source**
   ```bash
   make

3. **Run the interpreter**
   ```bash
   ./monty path/to/file.m

---

## 🛠 Usage
Monty bytecode files have one instruction per line. Each instruction is composed of an opcode and, for some commands, an argument(like an integer).

---

### Example Bytecode File: `bytecode.m`

```text
push 10
push 20
push 5
pall
add
pint

---

## Run with:
```bash
./monty bytecode.m

---

##🧾 Supported Opcodes
| Opcode  | Description                                  |
| ------- | -------------------------------------------- |
| `push`  | Pushes an integer to the stack               |
| `pall`  | Prints all stack values                      |
| `pint`  | Prints the top value of the stack            |
| `pop`   | Removes the top element of the stack         |
| `swap`  | Swaps the top two elements of the stack      |
| `add`   | Adds the top two elements                    |
| `sub`   | Subtracts the top element from the second    |
| `div`   | Divides the second top element by the top    |
| `mul`   | Multiplies the top two elements              |
| `mod`   | Modulus of the second top element by the top |
| `pchar` | Prints the character at the top of the stack |
| `pstr`  | Prints the string starting from the top      |
| `rotl`  | Rotates the stack to the top                 |
| `rotr`  | Rotates the stack to the bottom              |
| `stack` | Sets the mode to stack (LIFO)                |
| `queue` | Sets the mode to queue (FIFO)                |
| `nop`   | Does nothing                                 |

---

## 💡 Example Output
```text
$ cat example.m
push 3
push 2
push 1
pall

$ ./monty example.m
1
2
3

## Contributing
Fork this repository

Create a feature branch (git checkout -b feature/new-feature)

Commit your changes (git commit -am 'Add new feature')

Push to the branch (git push origin feature/new-feature)

Open a Pull Request

## 📄 License
This project is licensed under the MIT License.

vbnet
Copy
Edit
