#include<iostream>
#include<cstdlib>
using namespace std;

enum enGameChoice { stone = 1, paper = 2, scissor = 3 };

enum enWinner { player = 1, computer = 2, draw = 3 };

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice playerChoice;
    enGameChoice computerChoice;
    enWinner winner;
    string winnerName = "";
};

struct stGameRounds
{
    short GameRound = 0;
    short PlayerWinTime = 0;
    short ComputerWinTime = 0;
    short DrawTime = 0;
    enWinner Winner;
    string WinnerName = "";
};

short ReadHowManyRound()
{
    short number = 0;
    do {
        cout << "Enter the Rounds From 1 To 10 : ";
        cin >> number;
    } while (number > 10 || number < 1);
    return number;
}

enGameChoice ReadPlayerChoice()
{
    short Choice = 0;
    do {
        cout << "choose [1]Paper , [2]Stone ,[3]Scissor : ";
        cin >> Choice;
    } while (Choice > 3 || Choice < 1);
    return (enGameChoice)Choice;
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.playerChoice == RoundInfo.computerChoice)
    {
        return enWinner::draw;
    }

    switch (RoundInfo.playerChoice)
    {
    case enGameChoice::stone:
        if (RoundInfo.computerChoice == enGameChoice::paper)
        {
            return enWinner::computer;
        }
        break;

    case enGameChoice::paper:
        if (RoundInfo.computerChoice == enGameChoice::scissor)
        {
            return enWinner::computer;
        }
        break;

    case enGameChoice::scissor:
        if (RoundInfo.computerChoice == enGameChoice::stone)
        {
            return enWinner::computer;
        }
        break;

    }
    return enWinner::player;
}

string WinnerName(short winner)
{
    string arrWinnerName[3] = { "Player","Computer","Draw" };
    return arrWinnerName[winner - 1];
}

string ChoiceName(short GameChoice)
{
    string arrGameChoice[3] = { "Stone","Paper","Scissor" };
    return arrGameChoice[GameChoice - 1];
}

void SetWinnerScreenColor(enWinner Winner)
{
    switch (Winner)
    {
    case enWinner::computer:
        system("color 4F");
        break;

    case enWinner::player:
        system("color 2F");
        break;

    default:
        system("color 6F");
    }
}

void PrintRoundResualt(stRoundInfo RoundInfo)
{
    cout << "_________Round [ " << RoundInfo.RoundNumber << " ] begins _____" << endl;
    cout << " Player Choice   : " << ChoiceName(RoundInfo.playerChoice) << endl;
    cout << " Computer Choice : " << ChoiceName(RoundInfo.computerChoice) << endl;
    cout << " Round Winner    : " << RoundInfo.winnerName << endl;
    cout << "--------------------------" << endl;
    SetWinnerScreenColor(RoundInfo.winner);
}

enWinner WhoWinTheGame(short playerWinTime, short computerWinTime)
{
    if (playerWinTime > computerWinTime)
        return enWinner::player;

    else if (playerWinTime < computerWinTime)
        return enWinner::computer;

    else
        return enWinner::draw;
}

stGameRounds FillGameResualt(short drawTime, short playerWinTime, short computerWinTime, short RoundNumber)
{
    stGameRounds GameRound;
    GameRound.GameRound = RoundNumber;
    GameRound.PlayerWinTime = playerWinTime;
    GameRound.ComputerWinTime = computerWinTime;
    GameRound.DrawTime = drawTime;
    GameRound.Winner = WhoWinTheGame(GameRound.PlayerWinTime, GameRound.ComputerWinTime);
    GameRound.WinnerName = WinnerName(GameRound.Winner);
    return GameRound;
}

stGameRounds PlayGame(short HowManyRound)
{
    stRoundInfo RoundInfo;
    short DrawTime = 0, playerWinTime = 0, computerWinTime = 0;
    for (short GameRound = 1; GameRound <= HowManyRound; GameRound++)
    {
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.playerChoice = ReadPlayerChoice();
        RoundInfo.computerChoice = GetComputerChoice();
        RoundInfo.winner = WhoWonTheRound(RoundInfo);
        RoundInfo.winnerName = WinnerName(RoundInfo.winner);

        if (RoundInfo.winner == enWinner::draw)
            DrawTime++;

        else if (RoundInfo.winner == enWinner::player)
            playerWinTime++;

        else
            computerWinTime++;
        PrintRoundResualt(RoundInfo);
    }
    return FillGameResualt(DrawTime, playerWinTime, computerWinTime, HowManyRound);
}

string Tabs(short NumberOfTabs)
{
    string t = "";
    for (short i = 1; i <= NumberOfTabs; i++)
    {
        t = t + "\t";
        cout << t;
    }
    return t;
}

void ShowGameOverScreen()
{
    cout << Tabs(0) << "--------------------------------------------------" << endl;
    cout << Tabs(1) << " + + + G a m e  O v e r + + + " << endl;
    cout << Tabs(0) << "---------------------------------------------------" << endl << endl;
}

void ShowFinalGameResualt(stGameRounds GameRounds)
{
    cout << Tabs(1) << "_______[Game Resualt]_________" << endl;
    cout << Tabs(1) << " Game Rounds       : " << GameRounds.GameRound << endl;
    cout << Tabs(1) << " Player win Time  : " << GameRounds.PlayerWinTime << endl;
    cout << Tabs(1) << " Computer Win Time : " << GameRounds.ComputerWinTime << endl;
    cout << Tabs(1) << " Draw Time         : " << GameRounds.DrawTime << endl;
    cout << Tabs(1) << " Final Winner      : " << GameRounds.WinnerName << endl;
    cout << "______________________________________" << endl;
}

void ResetScreenColor()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    char PlayAgain;
    do {
        ResetScreenColor();
        stGameRounds GameRounds = PlayGame(ReadHowManyRound());
        ShowGameOverScreen();
        ShowFinalGameResualt(GameRounds);
        cout << Tabs(1) << endl << "Do you want to play again Y/N ? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
}

