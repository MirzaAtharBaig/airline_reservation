# Airline Reservation System (C++ Retro Project)

A classic console-based Airline Reservation System I developed in C++ as a semester project back in 2012, during my second semester of BS Electrical Engineering. This project manages passenger details, flight selection (Domestic/International), and generates unique reservation passwords for secure ticket retrieval.
## 📸 Overview

This application simulates a terminal-based booking experience where users can:

- View a stylized ASCII welcome screen.
- Input personal details (Name, Address, Email).
- Select between First Class and Economy.
- Choose from a list of Domestic or International flights.
- Automatically generate a secure 8-character password.
- Save reservation data to a local text file named after the password.
- Retrieve and display ticket information using the generated password.

## 🛠 Features

- **File I/O**: Uses `fstream` to create persistent records of bookings.
- **Password Generator**: A custom random string generator to act as a "Unique Booking Reference."
- **Legacy Visuals**: Uses `system("color")` and `system("cls")` for a retro-themed command-line interface.
- **Input Validation**: Basic error handling for menu selections and flight choices.

## 🚀 Getting Started

### Prerequisites

To run this code, you will need a C++ compiler. Because this code uses legacy headers like `<conio.h>` and `process.h`, it is best suited for:

- **Windows**: Dev-C++, Code::Blocks (MinGW), or Visual Studio.

> **Note**: This project is platform-specific to Windows due to the `system("pause")`, `system("cls")`, and `<conio.h>` dependencies.

### Compilation

Using a compiler like `g++`:

```bash
g++ main.cpp -o AirlineSystem.exe
```

### How to Use

1. Launch the program.
2. Select **1: RESERVATION** to book a flight.
3. Fill in your details and take note of the generated password displayed at the end.
4. To see your ticket later, select **2: DISPLAY** and enter that password.
5. Tickets are stored as text files in the same directory as the executable.

## Project Structure

- `main.cpp`: The complete source code containing the reservation class and logic.
- `[Password].txt`: Generated dynamically when a reservation is confirmed.

## Retro Disclaimer

This project was written in 2012. It uses `goto` statements and the `srand(time(NULL))` approach for randomness, which were common in introductory C++ programming at the time. It serves as a great example of early-stage software logic and procedural programming within a class structure.
