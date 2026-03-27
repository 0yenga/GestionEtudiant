# Gestion Étudiant

A C++ console application for managing a student record and computing academic 
averages.

## Description

The program allows the user to register a student (name, first name, student ID),
enter multiple grades, and instantly receive the student's average and academic 
status. Built using Object-Oriented Programming principles with a separate class 
definition and implementation.

## Features

- Student registration (name, first name, student ID)
- Grade entry (unlimited number of grades)
- Automatic average calculation
- Academic status evaluation based on the average:
  - Below 10 → Insufficient
  - 10–13 → Passable
  - 14–15 → Good
  - 16–17 → Very Good
  - 18–20 → Excellent

## Project Structure
GestionEtudiant/
│
├─ Etudiant.hpp        # Class declaration
├─ Etudiant.cpp        # Class implementation
└─ main.cpp            # Entry point
## Compilation

```bash
g++ -std=c++17 Etudiant.cpp main.cpp -o gestion_etudiant
./gestion_etudiant
Concepts Used
Object-Oriented Programming (OOP)
Classes, constructors, methods
Vectors and standard library (<numeric>)
User input handling
Author
ADJAMBO Espoir Oyénga — Computer Engineering Student
Nizhny Novgorod State Technical University, Russia
GitHub Profile
