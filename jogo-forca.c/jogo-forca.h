void openingGame();
void makeAGuess(char guesses[26], int *givenAttempts);
int alreadyMadeGuess(char word, char guesses[26], int givenAttempts);
void drawGallows(char secretWord[20], char guesses[26], int givenAttempts);
void chooseWord(char secretWord[20]);
int hanged(int  givenAttempts, char secretWord[20], char guesses[26]);
int hit(char secretWord[20],  char guesses[26], int givenAttempts);
void addNewWord();