```
# 🪨📄✂️ Paper-Ston-Scissor Game V1.0

A simple **Console-Based Paper, Stone, Scissor Game** developed in **C++**.

This project is a practical C++ programming project focused on applying fundamental programming concepts such as **Enums, Structures, Functions, Loops, Conditions, Random Number Generation, Input Validation, and Game Logic**.

The player competes against the computer across a selected number of rounds, with the program calculating the winner of each round and displaying the final game statistics.

---

## 📌 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [How the Game Works](#-how-the-game-works)
- [Game Flow](#-game-flow)
- [Round Selection](#-round-selection)
- [Player Choices](#-player-choices)
- [Computer Choice](#-computer-choice)
- [Round Winner](#-round-winner)
- [Game Result](#-game-result)
- [Play Again](#-play-again)
- [Programming Concepts](#-programming-concepts)
- [Project Structure](#-project-structure)
- [Technologies Used](#-technologies-used)
- [How to Run](#-how-to-run)
- [Example](#-example)
- [Learning Objectives](#-learning-objectives)
- [Screenshots](#-screenshots)
- [Author](#-author)
- [License](#-license)

---

## 🎯 Overview

**Paper-Ston-Scissor Game V1.0** is a command-line game where the player competes against the computer.

Before the game starts, the player chooses how many rounds to play. For every round, the player selects:

- 📄 Paper
- 🪨 Stone
- ✂️ Scissor

The computer automatically generates a random choice.

The program then determines the winner of the round, updates the scores, and continues until all selected rounds are completed.

At the end of the game, the program displays a complete summary containing:

- Total number of rounds
- Player wins
- Computer wins
- Draws
- Final winner

The player can also choose whether to start another game.

---

## ✨ Features

### 🎮 Game Features

- Choose the number of rounds before starting the game.
- Supports between **1 and 10 rounds**.
- Player can choose Paper, Stone, or Scissor.
- Computer generates its choice randomly.
- Determines the winner of every round.
- Tracks player wins.
- Tracks computer wins.
- Tracks draws.
- Displays the result of every round.
- Displays the final game result.
- Determines the overall winner.
- Allows the player to play again.
- Validates player input.
- Validates the selected number of rounds.
- Changes console colors depending on the round winner.
- Clears and resets the console between games.

---

## 🎮 How the Game Works

The game follows a simple sequence:

    🚀 Start Game
          |
          ▼
    🔢 Choose Number of Rounds
          |
          ▼
    🎮 Player Choice
          |
          ▼
    🤖 Computer Choice
          |
          ▼
    ⚖️ Determine Round Winner
          |
          ▼
    📊 Update Scores
          |
          ▼
    🔁 Continue Until All Rounds Finish
          |
          ▼
    🏆 Display Final Result
          |
          ▼
    🔄 Play Again?

This structure keeps the gameplay simple while demonstrating how different programming concepts can work together to build a complete console application.

---

## 🔢 Round Selection

Before the game begins, the player chooses how many rounds to play.

The accepted range is:

**1 → 10 rounds**

The program validates the entered number and continues asking until the player enters a valid value.

Example:

    Enter the Rounds From 1 To 10 : 5

This starts a game consisting of **5 rounds**.

---

## 🎮 Player Choices

For every round, the player chooses one of the available options:

    [1] Paper
    [2] Stone
    [3] Scissor

The program validates the player's input to make sure that the selected value represents a valid game choice.

Invalid values are rejected and the program continues asking for a valid choice.

---

## 🤖 Computer Choice

The computer automatically generates its choice using a random number.

The program generates a random value between:

    1 → 3

Each number represents one of the available choices:

    1 = Stone
    2 = Paper
    3 = Scissor

This creates a different computer choice for every round.

---

## ⚖️ Round Winner

After both the player and computer have selected their choices, the program determines the winner.

The game follows the standard rules:

| Player | Computer | Result |
|--------|----------|--------|
| 🪨 Stone | ✂️ Scissor | Player Wins |
| 📄 Paper | 🪨 Stone | Player Wins |
| ✂️ Scissor | 📄 Paper | Player Wins |
| 🪨 Stone | 📄 Paper | Computer Wins |
| 📄 Paper | ✂️ Scissor | Computer Wins |
| ✂️ Scissor | 🪨 Stone | Computer Wins |
| Same Choice | Same Choice | Draw |

The winner is calculated programmatically for every round.

---

## 📊 Round Result

After every round, the program displays information such as:

    Round [ 1 ] begins

    Player Choice   : Stone
    Computer Choice : Scissor
    Round Winner    : Player

The program then updates the corresponding score.

---

## 🏆 Game Result

When all selected rounds have been completed, the program calculates the overall winner based on the number of rounds won.

The final result includes:

    Game Rounds       : 5
    Player Win Time   : 3
    Computer Win Time : 1
    Draw Time         : 1
    Final Winner      : Player

The overall result can be:

- 🏆 Player
- 🤖 Computer
- 🤝 Draw

---

## 🔄 Play Again

After displaying the final result, the player is asked:

    Do you want to play again Y/N ?

If the player chooses to continue, the game starts again.

This allows multiple games to be played without restarting the application.

---

## 🧠 Programming Concepts

This project was built to practice and strengthen fundamental C++ programming concepts.

### 🔹 Enumerations

Enums are used to represent game choices and possible winners.

Examples include:

- Game choices
- Player
- Computer
- Draw

This makes the game logic easier to understand and maintain.

### 🔹 Structures

Structures are used to group related game information.

The project uses structures to store:

- Round information
- Player choice
- Computer choice
- Round winner
- Game statistics
- Final game result

### 🔹 Functions

The program is divided into multiple functions, where each function is responsible for a specific task.

Examples include functions responsible for:

- Reading the number of rounds
- Reading the player's choice
- Generating random numbers
- Getting the computer choice
- Determining the round winner
- Determining the overall winner
- Displaying round results
- Displaying the final result
- Starting the game

### 🔹 Input Validation

The program validates user input to prevent invalid game choices and invalid round counts.

### 🔹 Random Number Generation

The computer's choice is generated randomly using C++ random number functionality.

### 🔹 Loops

Loops are used to:

- Validate user input
- Repeat rounds
- Allow the player to play again

### 🔹 Conditional Logic

`if`, `else if`, `else`, and `switch` statements are used to implement the game rules and determine winners.

### 🔹 Console Formatting

The program also uses console commands to:

- Clear the screen
- Change console colors
- Highlight round results

---

## 🏗️ Project Structure

The project is intentionally simple and organized as a console application:

    Paper-Ston-Scissor-Game-V1.0
    │
    ├── 📄 Paper-Ston-Scissor Game.cpp
    ├── 📄 Paper-Ston-Scissor Game.sln
    ├── 📄 Paper-Ston-Scissor Game.vcxproj
    ├── 📄 Paper-Ston-Scissor Game.vcxproj.filters
    ├── 📄 .gitignore
    ├── 📄 .gitattributes
    ├── 📄 LICENSE.txt
    └── 📄 README.md

The main game implementation is contained in:

    Paper-Ston-Scissor Game.cpp

---

## 🛠️ Technologies Used

- **C++**
- **Visual Studio**
- **Console Application**
- Standard C++ Library

Main concepts and libraries used include:

- `iostream`
- `cstdlib`
- Enums
- Structures
- Functions
- Loops
- Conditional Statements
- Random Number Generation

---

## ▶️ How to Run

### 1. Clone the Repository

    git clone https://github.com/aimanameenmohammed/Paper-Ston-Scissor-Game-V1.0.git

### 2. Open the Solution

Open:

    Paper-Ston-Scissor Game.sln

using **Visual Studio**.

### 3. Build the Project

Build the solution using Visual Studio.

### 4. Run the Application

Run the project and follow the instructions displayed in the console.

---

## 🧪 Example

Example of a game round:

    Player Choice   : Stone
    Computer Choice : Scissor

    Round Winner : Player

The game continues until the selected number of rounds has been completed.

At the end, the program displays the complete statistics and the final winner.

---

## 🎓 Learning Objectives

This project was created as part of my programming learning journey.

The main objectives were to practice:

- Understanding C++ syntax and fundamentals
- Using enumerations
- Working with structures
- Designing reusable functions
- Applying conditional logic
- Working with loops
- Validating user input
- Generating random values
- Building game logic
- Managing application state
- Organizing a console application
- Converting programming concepts into a practical project

Although the project is simple in terms of its interface, it provides practical experience in designing and implementing a complete program from start to finish.

---

## 📸 Screenshots

Screenshots can be added to the repository under:

    docs/Images/

Once screenshots are added, they can be displayed here to provide a visual overview of the game.

---

## 👨‍💻 Author

### Ayman Ameen Mohammed

**Software Developer | C# | C++ | .NET | Database Development**

This project is part of my ongoing programming journey focused on learning through practical projects and continuously improving software development skills.

### 🔗 Connect With Me

- 💼 LinkedIn: https://www.linkedin.com/in/aiman-ameen-2548673a/
- 🐙 GitHub: https://github.com/aimanameenmohammed

---

## 📜 License

This project is licensed under the **MIT License**.

The complete license text is available here:

👉 [LICENSE.txt](LICENSE.txt)

You are free to use, modify, and distribute this project according to the terms of the MIT License.

---

## ⭐ Support

If you found this project useful or interesting, consider giving the repository a ⭐ on GitHub.

Thank you for visiting the project! ❤️

---

## 🚀 Project Status

**Version:** V1.0  
**Language:** C++  
**Type:** Console Application  
**Status:** Completed
```
