# Pin_Checker.cpp

## Overview
This project simulates a simple ATM PIN verification system with limited attempts.  
It ensures secure access by blocking the card after three failed attempts.

---

## How It Works
- Stores a predefined PIN (`250002`).
- Prompts the user to enter their PIN.
- Compares input with the stored PIN:
  - If correct → prints **Access Granted**.
  - If incorrect → prints **Error: Wrong Password, Attempt Left: X**.
- Allows a maximum of **3 attempts**.
- If all attempts fail → prints **Error: Your Card Has Been Blocked Because Of Security Reasons**.

---

## Requirements
- C++ compiler (`g++`)
- Terminal

---

## Compile & Run
```bash
g++ Pin_Checker.cpp -o Pin_Checker
./Pin_Checker
