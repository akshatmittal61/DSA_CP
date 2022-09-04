import random
print("                                                                                  TIC TAC TOE")
a="""     |     |
  1  |  2  |  3
   __|_____|__
     |     |
  4  |  5  |  6
   __|_____|__
     |     |
  7  |  8  |  9
     |     |      """
rules="""Before starting the GAME that is 'Tic Tac Toe' I want to tell u certain rules about the Game that are as Follows: \n
1.) There are 2 symbols used for the game i.e 'X' and '0'.\n
2.) There will be a 'Toss' which will give you the choice to play First move.\n
3.) If any player had filled a square then that square cannot be used again.\n
4.) The player can win only if he had placed his particular symbol in vertical, horizontal or diagonal
position.\n
5.) The player will get the empty box as:"""
print()

print(rules)
print()
print(a)
print("If you want to fill your symbol on position 1 as denoted in  the figure then write 1 and so on...")
print()
print("Read he rules carefully before starting the game: ")
print()




a1=a.index('1')                                          #position of 1 in the table of tic tac toe
a2=a.index('2')                                          #position of 2 in the table of tic tac toe
a3=a.index('3')                                          #position of 3 in the table of tic tac toe
a4=a.index('4')                                          #position of 4 in the table of tic tac toe
a5=a.index('5')                                          #position of 5 in the table of tic tac toe
a6=a.index('6')                                          #position of 6 in the table of tic tac toe
a7=a.index('7')                                          #position of 7 in the table of tic tac toe
a8=a.index('8')                                          #position of 8 in the table of tic tac toe
a9=a.index('9')                                          #position of 9 in the table of tic tac toe




player1=input("Player 1 please enter your name here: ")                                     #Name of First Player
print()
player2=input("Player 2 please enter your name here: ")                                     #Name of Second Player
print()
print("Now there will be a toss '",player1,"' will get the right to select a number from 0 and 1 if he/she had selected the right option then he had the choice to select any one symbol...")
print()
toss=random.randint(0,2)
print("TOSS TIME")
print()
choice=int(input("Now '"+player1+"' enter your choice from 0 and 1:"))                                  #Toss to decide which Player will play the First Move.
print()
if choice==toss:
    print(player1,"had WON the TOSS...")
    print()
    print("Now '",player1,"' will get the symbol 'X' to play and he/se will play First move.")
    print()
    print("Let's Start the GAME")
    print()
    le2=a
    
    turn='X'
    count=0
    
    for i in range(10):
        chance=(input(" Its Your turn, '"+turn+"' .Move to which place: "))
        le2=le2.replace(chance,turn)
        print(le2)
        chance=int(chance)
        if chance<=9:
            count+=1
        else:
            print("That place is already filled.\nMove to which place?")
            continue
            
            
        if turn =='X':
            turn = 'O'
        else:
            turn = 'X'
            
        chance=str(chance)

        
        if count>=5:                # Now we will check if player X or O has won,for every move after 5 moves.
                
            if le2.find('X',a1)==a1 and le2.find('X',a2)==a2 and le2.find('X',a3)==a3:                                   # across the top
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a2)==a2 and le2.find('O',a3)==a3:                                 # across the top
                print(player2+" has WON... HURRAH!!!")
                break
            
            
            elif le2.find('X',a4)==a4 and le2.find('X',a5)==a5 and le2.find('X',a6)==a6:                                 # across the middle
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a4)==a4 and le2.find('O',a5)==a5 and le2.find('O',a6)==a6:                                 # across the middle
                print(player2+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a7)==a7 and le2.find('X',a8)==a8 and le2.find('X',a9)==a9:                                # across the bottom
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a7)==a7 and le2.find('O',a8)==a8 and le2.find('O',a9)==a9:                                # across the bottom
                print(player2+" has WON... HURRAH!!!")
                break
                

            elif le2.find('X',a1)==a1 and le2.find('X',a4)==a4 and le2.find('X',a7)==a7:                                # down the left side
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a4)==a4 and le2.find('O',a7)==a7:                                # down the left side
                print(player2+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a2)==a2 and le2.find('X',a5)==a5 and le2.find('X',a8)==a8:                                # down the middle
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a2)==a2 and le2.find('O',a5)==a5 and le2.find('O',a8)==a8:                                # down the middle
                print(player2+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a3)==a3 and le2.find('X',a6)==a6 and le2.find('X',a9)==a9:                                # down the right side
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a3)==a3 and le2.find('O',a6)==a6 and le2.find('O',a9)==a9:                                # down the right side
                print(player2+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a1)==a1 and le2.find('X',a5)==a5 and le2.find('X',a9)==a9:                                # diagonal
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a5)==a5 and le2.find('O',a9)==a9:                                # diagonal
                print(player2+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a3)==a3 and le2.find('X',a5)==a5 and le2.find('X',a7)==a7:                                # diagonal
                print(player1+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a3)==a3 and le2.find('O',a5)==a5 and le2.find('O',a7)==a7:                                # diagonal
                print(player2+" has WON... HURRAH!!!")
                break
                
                
                
                
        if count==9:
            print("GAME DRAWN\nBoth PLAYERS had played Well...")                                                # GAME drawn
            break  

    else:
        print("You have entered wrong Input.")
        




else:
    print(player1," you had LOST the TOSS...")
    print()
    print("Now '",player2,"' will get the symbol 'X' to play and he/se will play First move..")
    print()
    print("Let's Start the GAME")
    print()
    le2=a

    turn='X'
    count=0
    
    for i in range(10):
        chance=(input(" Its Your turn, '"+turn+"' .Move to which place: "))
        le2=le2.replace(chance,turn)
        print(le2)
        chance=int(chance)
        if chance<=9:
            count+=1
        else:
            print("That place is already filled.\nMove to which place?")
            continue
            
            
        if turn =='X':
            turn = 'O'
        else:
            turn = 'X'
            
        chance=str(chance)

            
        if count>=5:                # Now we will check if player X or O has won,for every move after 5 moves.
                
            if le2.find('X',a1)==a1 and le2.find('X',a2)==a2 and le2.find('X',a3)==a3:                                      # across the top
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a2)==a2 and le2.find('O',a3)==a3:                                    # across the top
                print(player1+" has WON... HURRAH!!!")
                break
            
                    
            elif le2.find('X',a4)==a4 and le2.find('X',a5)==a5 and le2.find('X',a6)==a6:                                    # across the middle
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a4)==a4 and le2.find('O',a5)==a5 and le2.find('O',a6)==a6:                                    # across the middle
                print(player1+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a7)==a7 and le2.find('X',a8)==a8 and le2.find('X',a9)==a9:                                    # across the bottom
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a7)==a7 and le2.find('O',a8)==a8 and le2.find('O',a9)==a9:                                    # across the bottom
                print(player1+" has WON... HURRAH!!!")
                break
            
            
            elif le2.find('X',a1)==a1 and le2.find('X',a4)==a4 and le2.find('X',a7)==a7:                                    # down the left side
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a4)==a4 and le2.find('O',a7)==a7:                                    # down the left side
                print(player1+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a2)==a2 and le2.find('X',a5)==a5 and le2.find('X',a8)==a8:                                    # down the middle
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a2)==a2 and le2.find('O',a5)==a5 and le2.find('O',a8)==a8:                                    # down the middle
                print(player1+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a3)==a3 and le2.find('X',a6)==a6 and le2.find('X',a9)==a9:                                    # down the right side
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a3)==a3 and le2.find('O',a6)==a6 and le2.find('O',a9)==a9:                                    # down the right side
                print(player1+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a1)==a1 and le2.find('X',a5)==a5 and le2.find('X',a9)==a9:                                    # diagonal
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a1)==a1 and le2.find('O',a5)==a5 and le2.find('O',a9)==a9:                                    # diagonal
                print(player1+" has WON... HURRAH!!!")
                break
            
                
            elif le2.find('X',a3)==a3 and le2.find('X',a5)==a5 and le2.find('X',a7)==a7:                                    # diagonal
                print(player2+" has WON... HURRAH!!!")
                break
            elif le2.find('O',a3)==a3 and le2.find('O',a5)==a5 and le2.find('O',a7)==a7:                                    # diagonal
                print(player1+" has WON... HURRAH!!!")
                break

                     
        if count==9:
            print("GAME DRAWN\nBoth PLAYERS had played Well...")                                                # GAME drawn
            break

    else:
        print("You have entered wrong Input.")