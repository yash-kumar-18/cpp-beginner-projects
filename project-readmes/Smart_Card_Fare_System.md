# Smart_Card_Fare_System.cpp

## Overview
This project calculates metro fare between sectors and checks card balance deduction.

## How It Works
- Starts with fixed smart card balance of 200.
- Accepts departure and destination points (1 to 5).
- Validates points and prevents same entry/exit.
- Calculates fare as distance between points × 10.
- Checks sufficient balance and prints remaining balance.

## Requirements
- C++ compiler (`g++`)
- Terminal

## Compile & Run
```bash
g++ Smart_Card_Fare_System.cpp -o Smart_Card_Fare_System
./Smart_Card_Fare_System
```
