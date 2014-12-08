FiveDiceScore
=============

Simple Five Dice game Score Calculator

In this calculator is  a single C program which does the scoring for a little known game of fiveDice. 
fiveDice is played by rolling five 9-sided dice. The dice have the integers 1 to 9 on their faces. 
Your program will take one and only one line of input. 
This line of input will specify a fiveDice dice roll. In other words the line of input should contain 5 integers between 1 and 9 inclusive.

Output will describe the best fiveDice possible score for the input dice roll.
There is one and only one correct output line for every input line. 
The score for a fiveDice dice roll is calculated using the following rules: 

Any throw                     : Sum of dices faces : Ex- 9 3 4 3 6 : Score- 25  sum 
2+ dice showing the same face : 14 + 2 * face      : Ex- 1 3 4 3 6 : Score- 20  pair of 3’s
3+ dice showing the same face 15 + 3 * face 7 9 9 4 9  42 three 9’s 
4+ dice showing the same face 16 + 4 * face 1 1 8 1 1 20 four 1’s 
5 dice showing the same face 17 + 5 * face 6 6 6 6 6 47 five 6’s 
2+ dice showing the same face and 2+ other dice showing the same face 13 + 2 * face1 + 2 * face2 3 3 5 4 5 29 pair of 3’s and a pair of 5’s 
3 dice showing the same face and 2 other dice showing the same face 15 + 3 * face1 + 2 * face2 8 1 8 1 8 41 three 8’s and a pair of 1’s 
4 sequential dice faces 25 + highest face in sequence 3 1 1 4 2 29 short sequence 1..4 5 sequential dice faces 37 + highest face in sequence 6 3 4 7 5 44 long sequence 3..7  
5 sequential dice faces 37 + highest face in sequence 
6 3 4 7 5 44 long sequence 3..7 
In fiveDice game the highest scoring rule that can be applied is chosen.  
