# Rust Coding Dojo

Welcome to the 42sp Rust coding dojo.

``` rust
fn welcome() {
    println!("Hello, 42");
}
```

# Rust

#### Empowering Safe and Efficient Systems Programming

[Rust](https://www.rust-lang.org/) Is a modern systems programming language developed by Mozilla Research and the open-source community. It is designed to provide memory safety, concurrency, and performance.
One of Rust's key differentiators is its focus on memory safety. It guarantees memory safety without sacrificing performance, preventing null pointer dereferences and data races at compile time.

### Features

- Memory Safety: Rust guarantees memory safety at compile time, eliminating null pointer dereferences and data races. It enforces strict ownership, borrowing, and lifetimes, preventing common memory-related bugs.

- Concurrency: Rust provides built-in support for safe concurrent programming. It ensures thread safety through its ownership model and enforces strict rules to prevent data races, allowing developers to write concurrent code without worrying about race conditions.

- Performance: Rust delivers high performance by providing control over low-level details without sacrificing safety. It offers zero-cost abstractions, allowing developers to write code that is close to the metal, making it suitable for systems programming, networking, and other performance-critical applications.

- Expressive Type System: Rust has a powerful and expressive type system that enables strong static typing, pattern matching, and algebraic data types (enums). This facilitates code reuse, error handling, and creating flexible abstractions.

- Traits and Generics: Rust uses traits, similar to interfaces, to achieve code reuse and ad-hoc polymorphism. It supports generics, enabling the creation of reusable functions and data structures.

- Pattern Matching: Rust provides pattern matching, allowing developers to destructure complex data structures and write expressive conditionals. Pattern matching simplifies control flow and data processing, leading to cleaner and more readable code.

- Error Handling: Rust has a built-in error handling mechanism called "Result" and "Option" types. It encourages explicit handling of errors and forces developers to handle all possible error scenarios, improving code reliability.

- Cargo Package Manager: Rust comes with Cargo, a powerful package manager and build system. Cargo streamlines project management, dependency resolution, and building, making it easier to manage and distribute Rust projects.
- Cross-platform Support: Rust supports cross-platform development, allowing developers to write code that runs seamlessly on different operating systems and architectures.

- Interoperability: Rust offers seamless interoperability with other programming languages, particularly C/C++. It provides a Foreign Function Interface (FFI) that enables calling C/C++ libraries and allows developers to leverage existing codebases.

# Challenges

In This Coding Dojo you will implement a set of libft functions and, for those who dare, a special puzzle from [Advent of Code](https://adventofcode.com/) using Rust.

- ft_putstr
- ft_strlen
- ft_strcpy
- ft_strjoin
- ft_split
- [AOC - Day 1, Part1](https://adventofcode.com/2022/day/1)

### Bonus
- Enjoyed AOC? Their challenges can get pretty tough!
- Can you get_next_line?

# Compiling and executing

We are going to use Rust's powerful package manager, Cargo. It is used to install dependecies, compile our crates (Rust packages) and make them distributable. Run `install_rust.sh` to install it.

In the root of the repository, simply run:
```sh
cargo run
```
It will compile, if it is not already compiled, and run the code. Beware! Rust's compiler is as strict as the norm regarding memory safety.

# References

* https://doc.rust-lang.org/stable/reference/index.html - The Rust Reference
* https://doc.rust-lang.org/book/ - The Rust Programming Language
* https://doc.rust-lang.org/stable/rust-by-example/ - Rust by Example

Have fun :)
