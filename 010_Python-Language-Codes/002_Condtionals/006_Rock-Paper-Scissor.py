# WAP To Generate Rock-Paper-Scissor Game....

# Function to determine the winner
def determine_winner(str1, str2, name1, name2):
    if str1 == str2:
        return "It's a tie!"
    elif str1 == "rock" and str2 == "scissors":
        return f"Rock smashes scissors. {name1} wins!"
    elif str1 == "scissors" and str2 == "paper":
        return f"Scissors cuts paper. {name1} wins!"
    elif str1 == "paper" and str2 == "rock":
        return f"Paper covers rock. {name1} wins!"
    elif str2 == "rock" and str1 == "scissors":
        return f"Rock smashes scissors. {name2} wins!"
    elif str2 == "scissors" and str1 == "paper":
        return f"Scissors cuts paper. {name2} wins!"
    elif str2 == "paper" and str1 == "rock":
        return f"Paper covers rock. {name2} wins!"

# Get names and choices from players
print("Week-2 Exp-6 , Yash Pandey 12214802722")
name1 = input("Enter Player 1's Name: ")
str1 = input("Enter Player 1's Choice (rock, paper, scissor): ").lower()
print()
name2 = input("Enter Player 2's Name: ")
str2 = input("Enter Player 2's Choice (rock, paper, scissor): ").lower()

# Validate choices
valid_choices = ["rock", "paper", "scissors"]
if str1 not in valid_choices or str2 not in valid_choices:
    print("Invalid choice(s), please choose from rock, paper, or scissors.")
else:
    # Determine and display the result
    result = determine_winner(str1, str2, name1, name2)
    print(result)

    
    