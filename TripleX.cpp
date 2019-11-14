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
  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 2;

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
    std::cout << "\nYou won!";
    return true;
  }
  else
  {
    std::cout << "\nYou lose!";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  while (true)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore();

    if (bLevelComplete)
    {
      ++LevelDifficulty;
    }
  }
  
  return 0;
}