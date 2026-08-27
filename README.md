# 🎮 Paper-Stone-Scissor Game V1.0

A simple **Console-Based Paper, Stone, Scissor Game** developed in **C++**.

This project is a practical C++ programming project focused on applying fundamental programming concepts through a complete interactive console game.

The player competes against the computer for a selected number of rounds. In each round, the player chooses **Paper, Stone, or Scissor**, while the computer generates its choice randomly. The program determines the winner of each round, keeps track of the scores, and displays the final game result.

---

## 📌 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [Game Rules](#-game-rules)
- [How the Game Works](#-how-the-game-works)
- [Game Flow](#-game-flow)
- [Round Selection](#-round-selection)
- [Player Choice](#-player-choice)
- [Computer Choice](#-computer-choice)
- [Round Winner](#-round-winner)
- [Score Tracking](#-score-tracking)
- [Final Game Result](#-final-game-result)
- [Play Again](#-play-again)
- [Programming Concepts](#-programming-concepts)
- [Project Structure](#-project-structure)
- [Technologies Used](#-technologies-used)
- [How to Run](#-how-to-run)
- [Example](#-example)
- [Learning Objectives](#-learning-objectives)
- [Author](#-author)
- [License](#-license)

---

## 🎯 Overview

The **Paper-Stone-Scissor Game V1.0** is a console application built with C++.

The project allows the player to play multiple rounds against the computer and receive a complete summary at the end of the game.

The application demonstrates how basic programming concepts can be combined to create a complete interactive program with:

- User input validation
- Random computer choices
- Game rules and decision making
- Round-by-round results
- Score calculation
- Final winner determination
- Replay functionality
- Console screen management

---

## ✨ Features

- 🎮 Play against the computer
- 🔢 Choose the number of rounds from **1 to 10**
- ✋ Choose between:
  - Paper
  - Stone
  - Scissor
- 🤖 Computer generates a random choice
- 🏆 Determines the winner of every round
- 📊 Tracks player wins, computer wins, and draws
- 🎨 Changes console color according to the round winner
- 📝 Displays detailed round results
- 🏁 Displays the final game result
- 🔄 Allows the player to start another game
- ✅ Validates user input before continuing
- 🧩 Uses enums and structures to organize game data

---

## 🥊 Game Rules

The game follows the classic Paper-Stone-Scissor rules:

| Player Choice | Beats | Loses To |
|---------------|-------|----------|
| 🪨 Stone | ✂️ Scissor | 📄 Paper |
| 📄 Paper | 🪨 Stone | ✂️ Scissor |
| ✂️ Scissor | 📄 Paper | 🪨 Stone |

### Draw

If the player and computer choose the same option, the round ends in a **Draw**.

---

## ⚙️ How the Game Works

The game follows a simple sequence:

1. Start the game.
2. Choose the number of rounds.
3. Enter the player's choice for each round.
4. Generate the computer's choice randomly.
5. Compare both choices.
6. Determine the winner of the round.
7. Display the round result.
8. Update the scores.
9. Continue until all selected rounds are completed.
10. Display the final game result.
11. Ask whether the player wants to play again.

---

## 🔄 Game Flow

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
    📊 Update Score
           |
           ▼
    🔁 More Rounds?
        /       \
      Yes        No
       |          |
       └──────────┘
                  |
                  ▼
          🏆 Final Result
                  |
                  ▼
            🔄 Play Again?

---

## 🔢 Round Selection

Before the game begins, the player chooses how many rounds to play.

The accepted range is:

**1 → 10 rounds**

If the entered number is outside this range, the program continues asking until a valid value is entered.

### Example

    Enter the Rounds From 1 To 10 : 5

This starts a game consisting of **5 rounds**.

---

## 🎮 Player Choice

For every round, the player is asked to choose one of the available options:

    [1] Paper
    [2] Stone
    [3] Scissor

The program validates the entered value to ensure that the selected number represents a valid game choice.

---

## 🤖 Computer Choice

The computer automatically generates its choice using a random number.

The program generates a random value from:

    1 → 3

The generated value is then converted into the corresponding game choice:

    1 = Stone
    2 = Paper
    3 = Scissor

This gives the computer a random move in every round.

---

## 🏆 Round Winner

After both choices are available, the program compares them according to the game rules.

The round can have one of three results:

- 👤 Player wins
- 🤖 Computer wins
- 🤝 Draw

The winner is then stored and displayed as part of the round result.

### Example

    Player Choice    : Stone
    Computer Choice  : Scissor
    Round Winner     : Player

---

## 📊 Score Tracking

During the game, the program keeps track of:

- 👤 Player Wins
- 🤖 Computer Wins
- 🤝 Draws

After every round, the corresponding counter is increased.

At the end of the game, these values are used to determine the final winner.

---

## 🏁 Final Game Result

After all selected rounds are completed, the program displays a complete summary containing:

- Total number of rounds
- Player win count
- Computer win count
- Draw count
- Final winner

### Example

    Game Result

    Game Rounds       : 5
    Player Win Time   : 3
    Computer Win Time : 1
    Draw Time         : 1
    Final Winner      : Player

The final winner is determined by comparing the number of rounds won by the player and the computer.

If both have the same number of wins, the final result is a **Draw**.

---

## 🔄 Play Again

After displaying the final result, the program asks the player whether they want to start another game.

    Do you want to play again Y/N ?

Entering `y` starts a new game.

---

## 🧠 Programming Concepts

This project was built to practice and reinforce several fundamental C++ programming concepts.

### Enumerations

The project uses enumerations to represent game choices and possible winners.

    enum enGameChoice
    {
        stone = 1,
        paper = 2,
        scissor = 3
    };

    enum enWinner
    {
        player = 1,
        computer = 2,
        draw = 3
    };

This makes the code easier to understand than working with unexplained numeric values.

### Structures

Structures are used to group related information together.

The project uses:

- `stRoundInfo`
- `stGameRounds`

These structures store information about individual rounds and the overall game result.

### Functions

The program is divided into multiple functions, each responsible for a specific task, including:

- Reading the number of rounds
- Reading the player's choice
- Generating the computer's choice
- Determining the round winner
- Determining the final winner
- Displaying round results
- Displaying the final result
- Starting and restarting the game

This helps keep the program organized and easier to maintain.

### Random Number Generation

The computer's choice is generated randomly using C++ random number generation.

The program initializes the random seed and generates values within the required range.

### Input Validation

The program validates:

- Number of rounds
- Player game choice

Invalid values cause the program to ask the player for another valid input.

### Conditional Logic

`if`, `else if`, `else`, and `switch` statements are used to implement the game rules and determine winners.

### Loops

Loops are used for:

- Validating user input
- Processing multiple rounds
- Allowing the player to replay the game

### Console Management

The project also uses console commands to:

- Clear the screen
- Change the console color depending on the round result

---

## 📁 Project Structure

The repository contains the following main files:

    Paper-Ston-Scissor-Game-V1.0/
    │
    ├── 📄 Paper-Ston-Scissor Game.cpp
    ├── 📄 Paper-Ston-Scissor Game.sln
    ├── 📄 Paper-Ston-Scissor Game.vcxproj
    ├── 📄 Paper-Ston-Scissor Game.vcxproj.filters
    ├── 📄 LICENSE.txt
    ├── 📄 README.md
    ├── 📄 .gitignore
    └── 📄 .gitattributes

### Main Source File

`Paper-Ston-Scissor Game.cpp`

Contains the complete implementation of the game, including:

- Game data structures
- Game rules
- Input handling
- Random computer choice
- Winner calculation
- Score tracking
- Result display
- Replay functionality

### Visual Studio Files

The repository also contains the Visual Studio Solution and C++ project files required to open and build the project in Visual Studio.

---

## 🛠️ Technologies Used

- **C++**
- **Standard C++ Library**
- **Visual Studio**
- **Console Application**

### Main C++ Libraries

    #include <iostream>
    #include <cstdlib>

The project uses standard C++ functionality for console input/output and random number generation.

---

## ▶️ How to Run

### Requirements

- Windows
- Visual Studio with C++ development tools
- A C++ compiler

### Steps

1. Clone the repository:

       git clone https://github.com/aimanameenmohammed/Paper-Ston-Scissor-Game-V1.0.git

2. Open the solution file:

       Paper-Ston-Scissor Game.sln

3. Build the project.

4. Run the application.

5. Choose the number of rounds.

6. Enter your choice for each round.

7. Enjoy the game and view the final result.

---

## 💻 Example

A typical round looks like:

    _________Round [ 1 ] begins _____

     Player Choice   : Stone
     Computer Choice : Scissor
     Round Winner    : Player

    --------------------------

The game continues until the selected number of rounds has been completed.

After the final round, the application displays the overall game result.

---

## 🎓 Learning Objectives

The main purpose of this project was to practice fundamental C++ programming through a complete practical application.

Through this project, I practiced:

- Writing structured C++ programs
- Working with enumerations
- Working with structures
- Creating reusable functions
- Using loops and conditional statements
- Validating user input
- Generating random values
- Managing program state
- Applying game logic
- Tracking scores
- Organizing a Visual Studio C++ project
- Building an interactive console application

This project represents one of the practical steps in my programming journey and helped strengthen my understanding of how individual programming concepts can work together inside a complete application.

---

## 👨‍💻 Author

### Ayman Ameen Mohammed

Software Developer | C# | C++ | .NET | Database Development

This project is part of my ongoing programming journey focused on learning through practical projects and continuously improving software development skills.

- 💻 **GitHub:** https://github.com/aimanameenmohammed
- 🔗 **LinkedIn:** https://www.linkedin.com/in/aiman-ameen-2548673a/

---

## 📜 License

This project is licensed under the **MIT License**.

You can view the complete license here:

**[MIT License](LICENSE.txt)**

---

## ⭐ Support

If you find this project useful or interesting, feel free to:

- ⭐ Star the repository
- 👀 Explore the source code
- 💡 Learn from the implementation
- 🚀 Check out my other programming projects

---

<p align="center">
  Built with ❤️ using C++
</p>
