import random

def get_user_choice(player_name):
    user_choice = input(f"{player_name}, enter your choice (rock/paper/scissors): ").lower()
    while user_choice not in ['rock', 'paper', 'scissors']:
        print("Invalid choice. Please enter rock, paper, or scissors.")
        user_choice = input(f"{player_name}, enter your choice (rock/paper/scissors): ").lower()
    return user_choice

def get_computer_choice():
    choices = ['rock', 'paper', 'scissors']
    return random.choice(choices)

def determine_winner(player1, player2):
    if player1 == player2:
        return "It's a tie!"
    elif (player1 == 'rock' and player2 == 'scissors') or \
         (player1 == 'paper' and player2 == 'rock') or \
         (player1 == 'scissors' and player2 == 'paper'):
        return f"{player1_name} wins!"
    else:
        return f"{player2_name} wins!"

def print_scoreboard(player1_name, player2_name, player1_wins, player2_wins, ties):
    print("\n===== Scoreboard =====")
    print(f"{player1_name}: {player1_wins} | {player2_name}: {player2_wins} | Ties: {ties}")
    print("======================\n")

# Main loop
player1_wins = 0
player2_wins = 0
ties = 0
rounds_played = 0
total_rounds = 3

game_mode = input("Choose game mode (1 for computer vs user, 2 for user vs user): ")

if game_mode == '1':
    player1_name = input("Enter your name: ")
    player2_name = "Computer"
elif game_mode == '2':
    player1_name = input("Enter Player 1's name: ")
    player2_name = input("Enter Player 2's name: ")
else:
    print("Invalid game mode. Please choose 1 or 2.")
    exit()

while rounds_played < total_rounds:
    if game_mode == '1':
        player1_choice = get_user_choice(player1_name)
        player2_choice = get_computer_choice()
    elif game_mode == '2':
        player1_choice = get_user_choice(player1_name)
        player2_choice = get_user_choice(player2_name)

    print(f"\n{player1_name} chose {player1_choice}")
    print(f"{player2_name} chose {player2_choice}")

    result = determine_winner(player1_choice, player2_choice)
    print(result)

    if "wins" in result:
        winner = result.split()[0]
        if winner == player1_name:
            player1_wins += 1
        elif winner == player2_name:
            player2_wins += 1
    else:
        ties += 1

    rounds_played += 1
    print_scoreboard(player1_name, player2_name, player1_wins, player2_wins, ties)

# Display final results
print("\n=== Final Results ===")
print_scoreboard(player1_name, player2_name, player1_wins, player2_wins, ties)
print("Thanks for playing. Goodbye!")
