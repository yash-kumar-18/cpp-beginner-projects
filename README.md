# cpp-beginner-projects

## 📖 Overview
This repository contains beginner-friendly C++ console programs for practicing core programming fundamentals like input/output, conditionals, loops, and basic calculations.

---

## 🛠️ Common Requirements
- C++ compiler (recommended: `g++`)
- Terminal / command prompt

---

## 📂 Program Documentation

### 1) Bill_Splitter.cpp
**Overview:** Splits a total bill amount equally among people.

**How It Works:**
- Takes total bill amount and number of persons as input.
- Validates that number of persons is not zero.
- Calculates `bill per person = total bill / total persons`.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Bill_Splitter.cpp -o Bill_Splitter
./Bill_Splitter
```

---

### 2) Cutoff_Checker.cpp
**Overview:** Checks pass/fail status using overall marks and individual subject cutoffs.

**How It Works:**
- Takes theory and practical marks (0–50 each).
- Validates both inputs are in valid range.
- Pass conditions:
  - total marks >= 40
  - theory >= 15
  - practical >= 15
- Prints fail reason if any condition is not satisfied.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Cutoff_Checker.cpp -o Cutoff_Checker
./Cutoff_Checker
```

---

### 3) Day_Name_And_Type.cpp
**Overview:** Displays day name and whether it is a weekday or weekend.

**How It Works:**
- Accepts day number (1 to 7).
- Uses switch-case to print day name.
- Uses another switch-case to print weekday/weekend category.
- Rejects invalid day numbers.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Day_Name_And_Type.cpp -o Day_Name_And_Type
./Day_Name_And_Type
```

---

### 4) Electricity_Bill_Calculator.cpp
**Overview:** Calculates electricity bill using slab-based pricing.

**How It Works:**
- Reads consumed units.
- Applies slab rates:
  - first 100 units: ₹5/unit
  - next 100 units: ₹7/unit
  - next 100 units: ₹9/unit
  - above 300 units: ₹11/unit
- Rejects negative units.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Electricity_Bill_Calculator.cpp -o Electricity_Bill_Calculator
./Electricity_Bill_Calculator
```

---

### 5) Grade_Evaluator.cpp
**Overview:** Assigns grade based on entered marks.

**How It Works:**
- Takes marks input.
- Prints grade by range:
  - 90+ → A
  - 75+ → B
  - 50+ → C
  - 33+ → D (Pass)
  - below 33 → F (Fail)

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Grade_Evaluator.cpp -o Grade_Evaluator
./Grade_Evaluator
```

---

### 6) Mini_ATM.cpp
**Overview:** Simulates basic ATM options like balance check, deposit, and withdrawal.

**How It Works:**
- Starts with a default balance.
- Shows menu for check balance, deposit, withdraw, exit.
- Validates positive deposit/withdraw amounts.
- Prevents withdrawing more than available balance.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Mini_ATM.cpp -o Mini_ATM
./Mini_ATM
```

---

### 7) Movie_Ticket_Counter.cpp
**Overview:** Calculates movie ticket total based on screen type, age, and number of tickets.

**How It Works:**
- Lets user choose screen type (Standard, IMAX 3D, VIP).
- Takes age input (VIP has senior-citizen pricing logic).
- Takes number of tickets.
- Calculates and prints total bill.
- Handles invalid choices and invalid age/ticket counts.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Movie_Ticket_Counter.cpp -o Movie_Ticket_Counter
./Movie_Ticket_Counter
```

---

### 8) Petrol_Pump_Dispensor.cpp
**Overview:** Calculates fuel bill by selected fuel type and dispensing mode.

**How It Works:**
- User selects fuel type (Petrol/Diesel/CNG).
- User selects dispensing mode:
  - by amount (₹)
  - by volume (liters)
- Uses fixed per-liter rates to compute total cost or liters dispensed.
- Validates fuel option, mode, and positive input value.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Petrol_Pump_Dispensor.cpp -o Petrol_Pump_Dispensor
./Petrol_Pump_Dispensor
```

---

### 9) Simple_Calculator.cpp
**Overview:** Performs basic arithmetic operations between two numbers.

**How It Works:**
- Takes two numbers and an operator (`+`, `-`, `*`, `/`).
- Uses switch-case to execute the operation.
- Prevents division by zero.
- Prints error for unsupported operator.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Simple_Calculator.cpp -o Simple_Calculator
./Simple_Calculator
```

---

### 10) Smart_Card_Fare_System.cpp
**Overview:** Simulates fare deduction in a metro smart card system.

**How It Works:**
- Starts with fixed card balance.
- Takes departure and destination station options.
- Rejects invalid station input and same start/end station.
- Calculates fare using station distance.
- Deducts fare and prints remaining balance if sufficient.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Smart_Card_Fare_System.cpp -o Smart_Card_Fare_System
./Smart_Card_Fare_System
```

---

### 11) Table_Maker.cpp
**Overview:** Generates multiplication table for a given number up to user-defined limit.

**How It Works:**
- Takes the table number.
- Takes print limit.
- Uses loop to print multiplication table from 1 to limit.
- Validates that number is greater than zero.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Table_Maker.cpp -o Table_Maker
./Table_Maker
```

---

### 12) Temperature_Converter.cpp
**Overview:** Converts temperature between Celsius and Fahrenheit.

**How It Works:**
- User selects conversion type:
  - Celsius → Fahrenheit
  - Fahrenheit → Celsius
- Performs formula-based conversion.
- Supports repeated conversions using `y/n` prompt.
- Validates menu and repeat input.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Temperature_Converter.cpp -o Temperature_Converter
./Temperature_Converter
```

---

### 13) Voting_Eligibility_Checker.cpp
**Overview:** Checks if a person is eligible to vote based on age.

**How It Works:**
- Takes age as input.
- Validates age is greater than zero.
- Prints eligible if age is 18 or above, otherwise not eligible.

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Voting_Eligibility_Checker.cpp -o Voting_Eligibility_Checker
./Voting_Eligibility_Checker
```

---

### 14) Water_State_Checker.cpp
**Overview:** Determines physical state of water from temperature in Celsius.

**How It Works:**
- Takes water temperature in Celsius.
- Prints:
  - below 0°C → solid
  - 0°C to below 100°C → liquid
  - 100°C and above → gaseous

**Requirements:**
- Any C++ compiler with standard iostream support.

**Compile & Run:**
```bash
g++ Water_State_Checker.cpp -o Water_State_Checker
./Water_State_Checker
```

---

## 📄 License
This project is licensed under the **MIT License**.
See [`LICENSE`](./LICENSE).
