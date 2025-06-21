# C++ Modules - Object-Oriented Programming Journey

This repository contains implementations of C++ modules focusing on core object-oriented programming concepts, from basic classes to advanced design patterns.

## 📚 Module Overview

### CPP00 - Introduction to C++
**Concepts Covered:**
- Basic C++ syntax and structure
- Input/output operations
- String manipulation
- Basic class implementation

**Exercises:**
- **ex00**: Simple string manipulation program
- **ex01**: PhoneBook class with contact management
- **ex02**: Account class with banking operations

### CPP01 - Memory Allocation & References
**Concepts Covered:**
- Dynamic memory allocation (`new`/`delete`)
- References vs Pointers
- Memory management best practices
- Stack vs Heap allocation

**Exercises:**
- **ex00**: Zombie class with heap/stack allocation
- **ex01**: Zombie horde creation
- **ex02**: Brain vs brainz - reference usage
- **ex03**: HumanA/HumanB with weapon references
- **ex04**: File replacement utility
- **ex05-06**: Harl logging system

### CPP02 - Operator Overloading & Orthodox Canonical Form
**Concepts Covered:**
- Operator overloading
- Orthodox Canonical Form (Rule of Three)
- Copy constructors and assignment operators
- Fixed-point arithmetic implementation

**Exercises:**
- **ex00**: Basic Fixed class implementation
- **ex01**: Fixed class with conversions
- **ex02**: Complete Fixed class with operators

**Resources:**
- `resources/note.txt`: Detailed explanation of IEEE 754 floating-point representation

### CPP03 - Inheritance
**Concepts Covered:**
- Class inheritance
- Virtual functions and polymorphism
- Constructor/destructor chaining
- Diamond inheritance problem

**Exercises:**
- **ex00**: ClapTrap base class
- **ex01**: ScavTrap inheritance
- **ex02**: FragTrap inheritance
- **ex03**: DiamondTrap multiple inheritance

### CPP04 - Polymorphism & Abstract Classes
**Concepts Covered:**
- Runtime polymorphism vs compile-time binding
- Virtual functions and pure virtual functions
- Abstract classes and interfaces
- Deep vs shallow copying
- Design patterns (Factory, Prototype)
- Correct vs incorrect polymorphism implementation

**Exercises:**
- **ex00**: Animal polymorphism basics + WrongAnimal/WrongCat (demonstrates incorrect polymorphism)
- **ex01**: Deep copy with Brain class
- **ex02**: Abstract Animal class (same main as ex01, but Animal cannot be instantiated)
- **ex03**: Materia system with interfaces

**Resources:**
- `resources/deep_copy_vs_shallow_copy.tldr`: Visual diagram explaining deep vs shallow copying concepts

## 🎯 Key Learning Objectives

### Memory Management
- Understanding stack vs heap allocation
- Proper use of `new` and `delete`
- Avoiding memory leaks and dangling pointers
- Deep copying for classes with pointer members

### Object-Oriented Design
- Encapsulation and data hiding
- Inheritance hierarchies
- Polymorphic behavior through virtual functions
- Interface design with pure virtual functions

### C++ Best Practices
- Orthodox Canonical Form implementation
- RAII (Resource Acquisition Is Initialization)
- Proper constructor/destructor chaining
- Forward declarations to avoid circular dependencies

### Design Patterns
- **Factory Pattern**: MateriaSource creates different materia types
- **Prototype Pattern**: Materia cloning system
- **Interface Segregation**: Pure virtual interfaces

## 🔧 Compilation

Each module includes a Makefile with standard rules:
```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile everything
```

All projects are compiled with:
- C++98 standard compliance
- Wall, Wextra, Werror flags for strict error checking

## 📖 Resources & Documentation

- **CPP02/resources/note.txt**: Comprehensive guide to IEEE 754 floating-point representation
- **CPP04/resources/deep_copy_vs_shallow_copy.tldr**: Visual diagram explaining memory copying concepts

## 🚀 Progressive Complexity

The modules are designed with increasing complexity:

1. **CPP00**: Basic C++ syntax and simple classes
2. **CPP01**: Memory management and references
3. **CPP02**: Operator overloading and canonical form
4. **CPP03**: Inheritance and virtual functions
5. **CPP04**: Advanced polymorphism and design patterns

Each module builds upon concepts from previous modules, creating a comprehensive learning path through C++ object-oriented programming.

## 💡 Key Takeaways

- **Memory Safety**: Proper allocation/deallocation patterns
- **Polymorphism**: Runtime behavior selection through virtual functions
- **Design Patterns**: Reusable solutions to common programming problems
- **C++98 Compliance**: Understanding legacy C++ standards and constraints
- **Code Organization**: Proper header/implementation file separation
- **Error Handling**: Defensive programming with null checks and bounds validation

This repository demonstrates a complete journey from basic C++ concepts to advanced object-oriented design patterns, providing a solid foundation for modern C++ development.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.