Here’s a clean and stylish `README.md` for your project — a fun number guessing game in C!

---

```markdown
# 🎲 Number Guessing Game in C

Welcome to the **Number Guessing Game**, a simple console-based game written in C. The computer picks a random number between 1 and 100, and your job is to guess it in as few tries as possible!

---

## 🚀 Features

- 🔢 Random number generation from 1 to 100
- 💬 User-friendly feedback: "Guess Higher" / "Guess Lower"
- 🔁 Loop until the correct number is guessed
- 📊 Tracks and displays the number of attempts

---

## 🛠 Getting Started

### ✅ Prerequisites
- GCC compiler (or any C compiler)
- Terminal (Linux/Mac/Windows CMD or PowerShell)

### ⚙️ Compilation
```bash
gcc main.c -o guessgame
```

### ▶️ Run the Game
```bash
./NumberGuessingGame
```

---

## 📸 Gameplay Preview

```
The Number is     45
Guess Higher
The Number is     75
Guess Lower
The Number is     60
Congrats You Won
You guess the correct number in 3 guesses
```

---

## 📂 How It Works

- The program uses `srand(time(0))` to seed the random number generator.
- A number between 1 and 100 is generated.
- A loop prompts the user to guess until the correct number is entered.
- After each guess, hints are provided and guesses are counted.

---

## 🧠 Learnings

This project demonstrates:
- Random number generation using `rand()`
- Loops and conditionals in C
- Basic I/O with `scanf()` and `printf()`
- A simple game logic using `do...while`

---

## 📈 Possible Enhancements

- Set difficulty levels (easy, medium, hard)
- Add a restart option after game ends
- Record and display the best score (least guesses)
- Create a graphical version using a library like SDL or ncurses

---
## 💬 Contribute

Found a bug? Have a suggestion or idea? PRs are welcome! Let's build fun and useful programs together.

---

Made with ❤️ in C — Have fun guessing!
```

---

Let me know if you want to rename the project, add game difficulty, or include badges and icons.
