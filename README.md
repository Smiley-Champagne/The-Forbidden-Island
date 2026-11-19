# The-Forbidden-Island
1. What is the game about?
The Forbidden Island is an adventure game where a player gets trapped on a mysterious island.

The player must complete five challenges to escape.

The rules:
- The player starts with 10 lives.
- There are five rounds.
- Each round gives the player a random challenge.
- Correct answers earn crystals.
- Wrong answers cost one life.
- The player needs at least 3 crystals to escape.
- If the player loses all their lives, the game ends.
2. How does the game work?
1. Starting the game: The program asks the player to enter their name and gives them 10 lives and zero crystals.

2. Random challenges: The computer randomly selects one of three challenges:
- Magic Riddle
- River Crossing
- Hidden Treasure
3. Magic Riddle: The player answers a riddle. A correct answer earns one crystal, while a wrong answer costs one life.

4. River Crossing: The player chooses between a wooden bridge and a stone bridge. Choosing the stone bridge earns one crystal. Choosing the wooden bridge costs one life.

5. Hidden Treasure: The computer chooses a secret number between 1 and 3. The player must guess the correct number to earn a crystal.

6. Completing the rounds: The game repeats until the player completes five rounds or loses all their lives.

7. Final result: The program checks the player's lives and crystals to decide whether they have escaped or lost.
3. Understanding the variables
Variable	Purpose
playerName	Stores the player's name
lives	Stores the number of lives
crystals	Counts collected crystals
challenge	Stores the random challenge number
choice	Stores the player's answer
secretNumber	Stores the computer's secret number
round	Counts the rounds

4. Programming concepts used
C++ statement	Purpose
string	Stores the player's name
int	Stores numbers
srand(time(0))	Helps generate different random results
rand()	Selects random challenges
if / else	Checks correct and incorrect answers
switch	Selects which challenge to display
for	Repeats the game for five rounds
function	Displays the player's lives and crystals
endl	Moves output to a new line

5. My game is called The Forbidden Island: 10 Lives to Escape. It is an adventure game where the player is trapped on a mysterious island and must complete five challenges to escape. The player starts with 10 lives and zero crystals. The program randomly selects one of three challenges: the Magic Riddle, River Crossing or Hidden Treasure. When the player answers correctly, they earn a crystal. When they answer incorrectly, they lose one life. I used a switch statement to select the challenges, if and else statements to check answers, and a for loop to control the five rounds. The player must collect at least three crystals and have at least one life remaining to win the game.
