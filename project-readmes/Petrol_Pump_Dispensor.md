# Petrol_Pump_Dispensor.cpp

## Overview
This project simulates fuel billing by fuel type and dispensing mode.

## How It Works
- Lets user choose fuel type (Petrol, Diesel, CNG).
- Lets user choose dispensing mode:
  - By amount (Rs)
  - By volume (L)
- Validates fuel type and mode choices.
- Validates entered amount/volume is greater than zero.
- Calculates either fuel quantity from amount or bill amount from volume.

## Requirements
- C++ compiler (`g++`)
- Terminal

## Compile & Run
```bash
g++ Petrol_Pump_Dispensor.cpp -o Petrol_Pump_Dispensor
./Petrol_Pump_Dispensor
```
