# 🪨📄✂️ Paper-Stone-Scissor Game V1.0

A simple **Console-Based Paper, Stone, Scissor Game** developed in **C++**.

This project is a practical C++ programming project focused on applying fundamental programming concepts through a complete interactive console game.

The player competes against the computer for a selected number of rounds. In every round, the player chooses a game option, the computer generates a random choice, and the program determines the round winner. At the end of the game, the complete results and final winner are displayed.

---

## 📚 Table of Contents

<table>
<tr>
<td>🎯 <a href="#-overview">Overview</a></td>
<td>✨ <a href="#-features">Features</a></td>
<td>🥊 <a href="#-game-rules">Game Rules</a></td>
</tr>
<tr>
<td>⚙️ <a href="#-how-the-game-works">How the Game Works</a></td>
<td>🔄 <a href="#-game-flow">Game Flow</a></td>
<td>🔢 <a href="#-round-selection">Round Selection</a></td>
</tr>
<tr>
<td>🎮 <a href="#-player-choice">Player Choice</a></td>
<td>🤖 <a href="#-computer-choice">Computer Choice</a></td>
<td>🏆 <a href="#-round-winner">Round Winner</a></td>
</tr>
<tr>
<td>📊 <a href="#-score-tracking">Score Tracking</a></td>
<td>🏁 <a href="#-final-game-result">Final Game Result</a></td>
<td>🔄 <a href="#-play-again">Play Again</a></td>
</tr>
<tr>
<td>🧠 <a href="#-programming-concepts">Programming Concepts</a></td>
<td>📁 <a href="#-project-structure">Project Structure</a></td>
<td>🛠️ <a href="#-technologies-used">Technologies Used</a></td>
</tr>
<tr>
<td>▶️ <a href="#-how-to-run">How to Run</a></td>
<td>💻 <a href="#-example">Example</a></td>
<td>🎓 <a href="#-learning-objectives">Learning Objectives</a></td>
</tr>
<tr>
<td>👨‍💻 <a href="#-author">Author</a></td>
<td>📜 <a href="#-license">License</a></td>
<td>⭐ <a href="#-support">Support</a></td>
</tr>
<tr>
<td colspan="3" align="center">📅 <a href="#-development-timeline">Development Timeline</a></td>
</tr>
</table>
---

## 🎯 Overview

**Paper-Stone-Scissor Game V1.0** is a console-based C++ game where the player competes against the computer across a user-selected number of rounds.

The program handles the complete game cycle:

- Selecting the number of rounds.
- Reading the player's choice.
- Generating the computer's choice randomly.
- Determining the winner of each round.
- Tracking player wins, computer wins, and draws.
- Displaying the result of every round.
- Changing the console color according to the round winner.
- Displaying the final game result.
- Allowing the player to start another game.

The project was built as a practical exercise to strengthen core C++ programming skills and apply programming concepts in a real interactive application.

---

## ✨ Features

### 🎮 Interactive Console Gameplay

The game runs completely through the console and guides the player through every step.

### 🔢 Select Number of Rounds

The player can choose how many rounds to play.

The accepted range is:

- Minimum: `1`
- Maximum: `10`

The program continues asking until a valid number is entered.

### 🎮 Player Choice

For every round, the player selects one of the available game choices:

- Stone
- Paper
- Scissor

The program validates the player's input before continuing.

### 🤖 Random Computer Choice

The computer automatically generates its choice using a random number between `1` and `3`.

### 🏆 Automatic Winner Detection

The program determines the winner of every round according to the standard Paper-Stone-Scissor rules.

Possible results:

- Player
- Computer
- Draw

### 📊 Score Tracking

During the game, the program keeps track of:

- Player wins
- Computer wins
- Draws

### 🎨 Winner-Based Console Colors

The console color changes according to the result of the round:

- 🟢 Player wins
- 🔴 Computer wins
- 🟡 Draw

### 🏁 Final Game Result

After all rounds are completed, the program displays:

- Total number of rounds
- Player win count
- Computer win count
- Draw count
- Final winner

### 🔄 Play Again

After finishing a game, the player can choose to start another game.

---

## 🥊 Game Rules

The game follows the standard Paper-Stone-Scissor rules.

| Player Choice | Computer Choice | Winner |
|---|---|---|
| Stone | Scissor | 🏆 Player |
| Paper | Stone | 🏆 Player |
| Scissor | Paper | 🏆 Player |
| Stone | Paper | 🤖 Computer |
| Paper | Scissor | 🤖 Computer |
| Scissor | Stone | 🤖 Computer |
| Same Choice | Same Choice | 🤝 Draw |

The same choice from both sides results in a draw.

---

## ⚙️ How the Game Works

The game is organized around a simple sequence:

1. Start the game.
2. Select the number of rounds.
3. Read the player's choice.
4. Generate the computer's choice randomly.
5. Compare both choices.
6. Determine the round winner.
7. Update the score.
8. Display the round result.
9. Repeat until all selected rounds are completed.
10. Display the final game result.
11. Ask whether the player wants to play again.

---

## 🔄 Game Flow

The overall gameplay can be summarized as:

    🚀 Start Game
          |
          ▼
    🔢 Select Number of Rounds
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
    🖥️ Display Round Result
          |
          ▼
    🔁 More Rounds?
       /       \
     Yes        No
      |          |
      └──────┐   ▼
             │ 🏁 Final Result
             │
             ▼
        🔄 Play Again?

This flow continues until the selected number of rounds has been completed.

---

## 🔢 Round Selection

Before gameplay begins, the player chooses the number of rounds.

The accepted range is:

    1 → 10 rounds

The program validates the entered value and continues asking until the player enters a valid number.

### Example

    Enter the Rounds From 1 To 10 : 5

This starts a game consisting of **5 rounds**.

---

## 🎮 Player Choice

For every round, the player is asked to choose one of the available options.

The program accepts three game choices:

    [1] Paper
    [2] Stone
    [3] Scissor

The input is validated to ensure that the selected value represents a valid game choice.

---

## 🤖 Computer Choice

The computer automatically generates its choice using a random number.

The program generates a random value within the available game choices and converts it into the corresponding game option.

Conceptually:

    Random Number
          |
          ▼
       1 → 3
          |
          ▼
    Game Choice
          |
          ▼
    Computer Choice

The random number is generated using the C++ standard `rand()` function.

---

## 🏆 Round Winner

After both choices are available, the program determines the winner of the current round.

The winner can be:

- 🧑 Player
- 🤖 Computer
- 🤝 Draw

The game uses the following logic:

    Same Choice
        ↓
      Draw

    Player Choice defeats Computer Choice
        ↓
      Player Wins

    Computer Choice defeats Player Choice
        ↓
      Computer Wins

The result is stored and displayed before the next round begins.

---

## 📊 Score Tracking

The program maintains separate counters for each possible round result.

### Player Wins

Increased whenever the player wins a round.

### Computer Wins

Increased whenever the computer wins a round.

### Draws

Increased whenever both players choose the same option.

At the end of the game, these values are used to determine the final winner.

---

## 🎨 Round Result Display

After every round, the program displays information similar to:

    _________Round [ 1 ] begins _____

     Player Choice   : Stone
     Computer Choice : Scissor
     Round Winner    : Player

    --------------------------

The console color is then changed according to the round result.

---

## 🏁 Final Game Result

After all selected rounds are completed, the program displays a final result summary.

The final screen contains:

    Game Rounds
    Player Win Time
    Computer Win Time
    Draw Time
    Final Winner

Example:

    _______[Game Result]_________

     Game Rounds       : 5
     Player Win Time   : 3
     Computer Win Time : 1
     Draw Time         : 1
     Final Winner      : Player

The final winner is determined by comparing the player's total wins with the computer's total wins.

If both have the same number of wins, the final result is a draw.

---

## 🔄 Play Again

After displaying the final result, the program asks:

    Do you want to play again Y/N ?

If the player enters `y`, a new game starts.

This allows multiple games to be played without restarting the application.

---

## 🧠 Programming Concepts

This project applies several fundamental C++ programming concepts.

### 🔹 Enumerations

The project uses enums to represent game choices and winners.

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

This makes the program easier to understand than working with unexplained numeric values.

### 🔹 Structures

The project uses structures to organize related game information.

`stRoundInfo` stores information about a single round, including:

- Round number
- Player choice
- Computer choice
- Winner
- Winner name

`stGameRounds` stores the overall game result, including:

- Number of rounds
- Player wins
- Computer wins
- Draws
- Final winner

### 🔹 Functions

The game is divided into multiple functions, each responsible for a specific task.

Examples include:

- `ReadHowManyRound()`
- `ReadPlayerChoice()`
- `RandomNumber()`
- `GetComputerChoice()`
- `WhoWonTheRound()`
- `WinnerName()`
- `ChoiceName()`
- `SetWinnerScreenColor()`
- `PrintRoundResualt()`
- `WhoWinTheGame()`
- `FillGameResualt()`
- `PlayGame()`
- `ShowGameOverScreen()`
- `ShowFinalGameResualt()`
- `ResetScreenColor()`
- `StartGame()`

This separation helps keep the program organized and easier to follow.

### 🔹 Input Validation

The program validates important user inputs.

The number of rounds must be between `1` and `10`.

The player's game choice must be within the available choices.

### 🔹 Random Number Generation

The computer's choice is generated randomly using:

    rand()

The random generator is initialized when the program starts.

### 🔹 Loops

Loops are used for:

- Validating user input.
- Repeating rounds.
- Allowing the player to play again.

### 🔹 Conditional Logic

`if`, `else if`, `else`, and `switch` statements are used to determine:

- Round winners.
- Final winner.
- Draw conditions.
- Console colors.

### 🔹 Arrays

Arrays are used to convert numeric values into readable names.

For example, the program maps winner values to:

    Player
    Computer
    Draw

and game choices to:

    Stone
    Paper
    Scissor

### 🔹 Console Interaction

The project uses standard C++ console input/output:

    cin
    cout

---

## 📁 Project Structure

The repository is intentionally simple because this is a console-based C++ project.

    Paper-Ston-Scissor-Game-V1.0/
    │
    ├── 📄 Paper-Ston-Scissor Game.cpp
    ├── 📄 Paper-Ston-Scissor Game.sln
    ├── 📄 Paper-Ston-Scissor Game.vcxproj
    ├── 📄 Paper-Ston-Scissor Game.vcxproj.filters
    ├── 📄 .gitattributes
    ├── 📄 .gitignore
    ├── 📄 LICENSE.txt
    └── 📄 README.md

### Main Source File

`Paper-Ston-Scissor Game.cpp`

Contains the complete game implementation, including the game logic, structures, enums, input handling, random computer selection, scoring, result display, and game loop.

### Visual Studio Solution

`Paper-Ston-Scissor Game.sln`

The Visual Studio solution file used to open the project.

### Visual Studio Project

`Paper-Ston-Scissor Game.vcxproj`

The Visual Studio C++ project configuration.

### License

`LICENSE.txt`

Contains the project's MIT License.

---

## 🛠️ Technologies Used

### Language

- **C++**

### Standard Libraries

- `<iostream>`
- `<cstdlib>`

### Development Environment

- Microsoft Visual Studio
- Visual Studio C++ Project

### Programming Style

- Procedural Programming
- Functions
- Structures
- Enumerations
- Arrays
- Loops
- Conditional Statements
- Random Number Generation
- Console Input/Output

---

## ▶️ How to Run

### 1. Clone the Repository

Clone the repository using Git:

    git clone https://github.com/aimanameenmohammed/Paper-Ston-Scissor-Game-V1.0.git

### 2. Open the Project

Open the following solution file in Microsoft Visual Studio:

    Paper-Ston-Scissor Game.sln

### 3. Build the Project

Build the solution using Visual Studio.

### 4. Run the Application

Run the project from Visual Studio.

The game will start in the console and ask you to select the number of rounds.

---

## 💻 Example

A typical game begins with:

    Enter the Rounds From 1 To 10 : 5

Then the player selects a game choice.

Example round:

    Player Choice   : Stone
    Computer Choice : Scissor
    Round Winner    : Player

After completing all rounds, the program displays the final statistics:

    Game Rounds       : 5
    Player Win Time   : 3
    Computer Win Time : 1
    Draw Time         : 1
    Final Winner      : Player

The player can then choose whether to start another game.

---

## 🎓 Learning Objectives

This project was developed as a practical exercise to strengthen fundamental C++ programming skills.

Through this project, the main learning objectives include:

- Understanding enums.
- Working with structures.
- Designing functions with clear responsibilities.
- Applying loops and conditional statements.
- Validating user input.
- Generating random values.
- Working with arrays.
- Managing game state.
- Tracking scores.
- Building a complete console-based application.
- Organizing program logic into reusable functions.
- Applying problem-solving skills to a real programming task.

The project demonstrates how fundamental programming concepts can be combined to create a complete interactive application.

---

## 🚀 Project Highlights

Although the project is intentionally simple, it demonstrates a complete game cycle from input to final result.

### What Makes It Useful as a Learning Project?

- Clear separation of responsibilities through functions.
- Structured game data using `struct`.
- Meaningful values through `enum`.
- Input validation.
- Random computer behavior.
- Automatic winner calculation.
- Score management.
- Console feedback through colors.
- Replay functionality.
- Complete game result summary.

This makes the project a good practical example of applying C++ fundamentals in a small but complete application.

---

## 👨‍💻 Author

### Ayman Ameen Mohammed

**Software Developer | C# | C++ | .NET | Database Development**

This project is part of my ongoing programming journey focused on learning through practical projects and continuously improving software development skills.

### 🔗 Connect With Me

- 💻 **GitHub:** https://github.com/aimanameenmohammed
- 🔗 **LinkedIn:** https://www.linkedin.com/in/aiman-ameen-2548673a/

---

## 📜 License

This project is licensed under the **MIT License**.

The complete license text is available here:

📄 **[View LICENSE.txt](LICENSE.txt)**

---

## ⭐ Support

If you find this project useful or interesting:

- ⭐ Give the repository a star.
- 👀 Explore the source code.
- 💡 Feel free to learn from the implementation.
- 🚀 Check out my other programming projects on GitHub.

---

## ❤️ Final Note

This project represents one step in my programming journey and my continued effort to transform programming concepts into practical applications.

The goal is not only to write code, but to understand the logic behind it, improve problem-solving skills, and build stronger programming foundations through real projects.

**Thank you for visiting the project! 🚀**

---

### 📌 Repository

💻 **GitHub Repository:**

https://github.com/aimanameenmohammed/Paper-Ston-Scissor-Game-V1.0

⭐ If you enjoyed the project, consider giving it a star!
