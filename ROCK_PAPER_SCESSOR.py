import random

print('Welcome to our game'.upper())
print('winning Rules of Rock Paper Scissor Game as follows:\n'
      + 'Rock vs Paper -> Paper wins\n'
      + 'Rock vs Scissor -> Rock wins\n'
      + 'Scissor vs Paper -> Scissor wins\n')
while True:
    print('Enter choice\n 1 for Rock,\n 2 for Paper,\n 3 for Scissor')
    choice = int(input('Enter User choice:'))
    while choice > 3 or choice < 1:
        choice = int(input('Enter valid input:'))

    if choice == 1:
        choice_name = 'Rock'
    elif choice == 2:
        choice_name = 'Paper'
    else:
        choice_name = 'Scissor'
    print('User choice is:', choice_name)

    print('Now Computer chioce:')
    comp_choice = random.randint(1, 3)
    while comp_choice == choice:
        comp_choice=random.randint(1,3)
    if comp_choice == 1:
            comp_choice_name = 'Rock'
    elif comp_choice == 2:
            comp_choice_name = 'Paper'
    else:
            comp_choice_name = 'Scissor'

    print('Computer choice is:', comp_choice_name)

    print(choice_name + ' VS ' + comp_choice_name)
    if ((choice == 1 and comp_choice == 2) or
                (choice == 2 and comp_choice == 1)):
            print('Paper Wins')
            result = 'Paper'
    elif ((choice == 1 and comp_choice == 3) or
              (choice == 3 and comp_choice == 1)):
            print('Rock Wins')
            result = 'Rock'
    else:
            print('Scissor Wins')
            result = 'Scissor'

    if result == choice_name:
            print('....User Wins....')
    else:
            print('....Computer Wins....')

    print('Do you Want to play again?\nyes=y\nno=n')
    ans = input()
    if ans == 'n' or ans == 'N':
        break
print('\nThanks for Playing')
