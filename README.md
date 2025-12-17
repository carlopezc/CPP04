# 🚀 CPP Module 04

> This module explores subtype polymorphism, abstract classes, and interfaces. It marks the transition to advanced software design, including deep memory management and the implementation of interfaces.

---

## 🎯 Project Goals

The objective of this module is to master **Polymorphism**. We implement a system of Animals and Brains to understand how C++ handles dynamic binding. This module also covers the creation of **Abstract Classes** and **Interfaces**, ensuring that objects are destroyed correctly through virtual destructors and that deep copies are performed to prevent data corruption between instances.

## 🛠️ Technical Details

* **Subtype Polymorphism:** Using virtual functions to allow a base class pointer to execute the correct derived class behavior at runtime.
* **Abstract Classes:** Defining classes that cannot be instantiated and serve only as blueprints for other classes.
* **Interfaces (Pure Virtual Functions):** Implementing the "Bonus" requirements by creating classes with only pure virtual methods, defining a strict contract for derived classes.
* **Deep Copy vs. Shallow Copy:** Implementing the Brain class to ensure that when an Animal is copied, its "thoughts" (data) are duplicated in a new memory address rather than shared.
* **Virtual Destructors:** Understanding why every base class with virtual functions must have a virtual destructor to prevent memory leaks during object deletion.
* **Dynamic Binding:** Exploring how the VTable (Virtual Table) works behind the scenes in C++.

## ⚙️ How to Compile & Run

This project contains a separate `Makefile` inside each exercise directory (e.g., `ex00/`, `ex01/`, `ex03/`).

1.  Clone the repository:
    ```bash
    git clone [https://github.com/carlopezc/CPP04.git](https://github.com/carlopezc/CPP04.git)
    cd CPP04
    ```
2.  To compile and run a specific exercise (including bonus ex03):

    **Example (ex03 - Interfaces & Materia):**
    ```bash
    cd ex03
    make
    ./interface_test
    ```
