# Ride_Fare_Program.cpp

## Overview
This project calculates ride fare based on vehicle type, travel distance, and rush-hour pricing, then applies discount slabs.

## How It Works
- Lets the user select vehicle type: Bike, Auto, or Sedan.
- Validates that vehicle choice is within allowed options.
- Takes travel distance in kilometers and validates it is greater than zero.
- Calculates base fare using vehicle-specific base charge and per-km rate.
- Asks whether rush hour is active and applies a 25% surcharge when selected.
- Applies discount rules:
  - `Rs 50` discount for fare `>= 500`
  - `Rs 20` discount for fare `> 250` and `< 500`
  - No discount otherwise

## Requirements
- C++ compiler (`g++`)
- Terminal

## Compile & Run
```bash
g++ Ride_Fare_Program.cpp -o Ride_Fare_Program
./Ride_Fare_Program
```
