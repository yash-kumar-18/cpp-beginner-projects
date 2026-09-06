# Electricity_Bill_Calculator.cpp

## Overview
This project calculates electricity bill using slab-based per-unit charges.

## How It Works
- Takes total units consumed.
- Applies slab rates:
  - Up to 100 units: 5 per unit
  - 101 to 200 units: 7 per unit
  - 201 to 300 units: 9 per unit
  - Above 300 units: 11 per unit
- Validates units are non-negative.
- Prints final bill amount.

## Requirements
- C++ compiler (`g++`)
- Terminal

## Compile & Run
```bash
g++ Electricity_Bill_Calculator.cpp -o Electricity_Bill_Calculator
./Electricity_Bill_Calculator
```
