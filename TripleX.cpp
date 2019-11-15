#include <iostream>

void PrintIntroduction(int Difficulty)
{
 // Print welcome message to the terminal
  std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
  std::cout << " secure server room...\nEnter the correct codes to continue..\n\n";
}

bool PlayGame(int Difficulty)
{

  PrintIntroduction(Difficulty);

  // Declare 3 number code
  const int CodeA = rand();
  const int CodeB = rand();
  const int CodeC = rand();

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print sum and product to the terminal
  std::cout << "+ There are 3 numbers in the code\n";
  std::cout << "\n+ The codes add-up to: " << CodeSum;
  std::cout << "\n+ The codes multiply to give: " << CodeProduct << "\n";

  // Store player guess
  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  // Check if players guess is correct
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\n*** Well done agent! You h ave extracted a file! Keep going! ***";
    return true;
  }
  else
  {
    std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  const int MaxDifficulty = 5;

  while (LevelDifficulty <= MaxDifficulty) // Loop game until
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore();

    if (bLevelComplete)
    {
      ++LevelDifficulty;
    }
  }
  std::cout << "\n*** Great work agent! You got all the files! Now you get out of there! ***\n";
  return 0;
}