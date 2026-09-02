# cpp-beginner-projects

A collection of beginner-friendly programming projects and coding exercises built while learning foundational logic. I will be working constantly and will upload some basic projects in this repository and will update them if needed.

# Bill_Splitter.cpp

Purpose: Divides a total bill amount among a given number of persons.

Process:

1. User enters the total bill amount.

2. User enters the number of persons.

3. Program calculates and displays the bill per person.

# Cutoff_Checker.cpp

Purpose: Determines whether a student passes or fails based on theory and practical marks.

Process:

1. User enters theory marks (0–50).

2. User enters practical marks (0–50).

3. Program checks validity of input.

Applies conditions:

1. Overall cutoff → total marks ≥ 40.

2. Individual cutoff → both theory and practical ≥ 15.

3. Displays result: Pass, Fail due to cutoff, Fail overall, or Invalid input.

# Day_Name_And_Type.cpp

Purpose:  
Determines the name of the day (Monday to Sunday) based on a number entered by the user (1–7) and classifies it as either a weekday or weekend.

Process:

1. User enters a day number between 1 and 7.

2. Program checks the input value.

3. Applies conditions using a switch statement:

1 → Monday

2 → Tuesday

3 → Wednesday

4 → Thursday

5 → Friday

6 → Saturday

7 → Sunday

Invalid input → Displays error message.

4. After displaying the day name, another switch statement is used to classify the day:

Day 1–5 (Monday–Friday) → Weekday.

Day 6–7 (Saturday–Sunday) → Weekend.

5. Displays result:

Day name and whether it is a weekday or weekend.

# Electricity_Bill_Calculator.cpp

Purpose:

Calculates the electricity bill based on the number of units consumed, applying slab-wise rates.

Process:

1. User enters the number of units consumed.

2. Program checks validity of input (units must be ≥ 0).

Applies conditions:

1. Up to 100 units → ₹5 per unit.

2. 101–200 units → First 100 units at ₹5, remaining at ₹7 per unit.

3. 201–300 units → First 100 units at ₹5, next 100 at ₹7, remaining at ₹9 per unit.

4. Above 300 units → First 100 units at ₹5, next 100 at ₹7, next 100 at ₹9, remaining at ₹11 per unit.

Displays result:

Total electricity bill based on slab calculation.

Invalid input if units are negative.

# Grade_Evaluator.cpp

Purpose:  

Assigns a grade to a student based on their marks.

Process:

1. User enters their marks.

2. Program checks the input value.

Applies conditions:

1. Marks ≥ 90 → Grade A

2. Marks ≥ 75 and < 90 → Grade B

3. Marks ≥ 50 and < 75 → Grade C

4. Marks ≥ 33 and < 50 → Grade D (Pass)

5. Marks < 33 → Grade F (Fail)

Displays result:

Grade A, B, C, D (Pass), or F (Fail) depending on marks.

# Mini_ATM.cpp

Purpose:  
Simulates a simple ATM interface where a user can check balance, deposit money, withdraw money, or exit.

Process:

1. Program starts with a default balance = 1000.0.

2. Displays a menu with four options:

1 → Check Balance

2 → Deposit Money

3 → Withdraw Money

4 → Exit

3. User enters a choice.

4. Program uses a switch statement to execute the selected option:

Check Balance (1): Displays current account balance.

Deposit Money (2):

-  Prompts user to enter deposit amount.

- If amount > 0 → Adds to balance and displays closing balance.

- Else → Displays error message.

Withdraw Money (3):

 - Prompts user to enter withdrawal amount.

 - If amount > 0 and ≤ balance → Deducts from balance and displays closing balance.

 - If amount > balance → Displays error message.

 - If amount ≤ 0 → Displays error message.

Exit (4): Displays a thank-you message.

Invalid choice: Displays error message.

Program ends with return 0;.

# Movie_Ticket_Counter.cpp

Purpose:  
Calculates ticket prices and total cost for different cinema options (Standard Screen, IMAX 3D, VIP Lounge), with special pricing for senior citizens.

Process:

1. Program displays a menu of ticket options:

    1 → Standard Screen

    2 → IMAX 3D

    3 → VIP Lounge

2. User enters a choice.

    If invalid (≤0 or not between 1–3), program shows error and stops.

3. User enters their age.

    If age ≤0, program shows error and stops.

4. Program applies conditions:

    Standard Screen (1): ₹150 per person.

    IMAX 3D (2): ₹300 per person.

    VIP Lounge (3):

      Age ≥60 → ₹400 per person (senior citizen discount).

      Age <60 → ₹500 per person.

5. User enters the number of tickets.

    If persons ≤0, program shows error and stops.
   
6. Program calculates total cost:

    Standard Screen: persons × 150.

    IMAX 3D: persons × 300.

    VIP Lounge: persons × 400 (senior) or persons × 500 (non-senior).

7. Displays the total amount payable.

# Simple_Calculator.cpp

Process:

User enters the first number.

User enters the second number.

User enters an operator (+, -, *, /).

Program checks the operator and applies conditions:

1. ‘+’ → Adds the two numbers.

2. ‘-’ → Subtracts the second number from the first.

3. ‘*’ → Multiplies the two numbers.

4. ‘/’ → Divides the first number by the second, with error handling for division by zero.

5. Invalid operator → Displays an error message.

Displays result:

Arithmetic output or error message.

# Simple_Calculator.cpp

Purpose:  
Calculates the fare for a metro journey based on departure and destination points, ensuring valid input and sufficient card balance.

Process:

1. Program starts with a default card balance = 200.

2. Displays a menu of departure points (Sector‑1 to Sector‑5).

3. User enters a departure point number.

     If invalid (not between 1–5), program shows error and stops.

4. Displays a menu of destination points (Sector‑1 to Sector‑5).

5. User enters a destination point number.

     If invalid (not between 1–5), program shows error and stops.

     If departure and destination are the same, program shows error and stops.

6. Program calculates fare:

     Fare = |departure – destination| × 10.

7. Displays the total fare.

8. Checks if card balance is sufficient:

     If balance < fare → Displays error message.

     Else → Deducts fare and displays closing balance.

9. Program ends with return 0;.

# Table_Maker.cpp

Purpose:  
Generates the multiplication table of a given number up to a specified limit.

Process:

1. User enters the number for which the table should be generated.

2. Program checks validity:

     If the number ≤ 0 → Displays error message and stops execution.

3. User enters the limit (up to which the table should be printed).

4. Program applies conditions:

     If the limit is valid (greater than 0 and ≤ 10,000), it proceeds.

     If invalid, it would normally display an error (though in this version, the error checks are         commented out).

5. Uses a for loop to print the multiplication table:

     Iterates from 1 to the entered limit.

     Prints each line in the format:

{ Code
number x i = result }

6. Displays the complete multiplication table.

# Voting_Eligibility.cpp

Purpose:  

Determines whether a person is eligible to vote based on their age.

Process:

1. User enters their age.

2. Program checks the input value.

Applies condition:

1. Age ≥ 18 → Eligible to vote.

2. Age < 18 → Not eligible to vote.

Displays result:

"You Are Eligible To Vote" or "You Are Not Eligible To Vote".

# Water_State_Checker.cpp

Purpose:  

Determines the physical state of water (solid, liquid, or gaseous) based on its temperature in Celsius.

Process:

1. User enters the temperature of water in Celsius.

2. Program checks the input value.

Applies conditions:

1. Temperature < 0°C → Water is in solid state (ice).

2. Temperature ≥ 100°C → Water is in gaseous state (steam).

3. Temperature between 0°C and 100°C → Water is in liquid state.

Displays result:

"Your Water Is In Solid State", "Your Water Is In Liquid State", or "Your Water Is In Gaseous State".

