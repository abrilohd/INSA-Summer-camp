# INSA Summer Camp Project

This repository contains one of a small project I built during the INSA Summer Camp. The main focus is learning how encryption works in practice, especially using the RC4 stream cipher and binary file processing in C++.

It is a simple educational project, designed to help understand:

- how encryption and decryption work
- how to read and write binary files
- how a stream cipher uses a key
- how to test if the original data is restored correctly

## Main project

The main code is in the folder:

- `C++/Malware/`

This project includes:

- an encryptor
- a decryptor
- a verification step
- sample files used for testing

## Screenshots

Here are a few screenshots from the TryHackMe:

![Project screenshot 1](Screenshot%202026-08-02%20025001.png)

![Project screenshot 2](Screenshot%202026-08-02%20025300.png)

![Project screenshot 3](Screenshot%202026-08-02%20031203.png)

## Project structure

```text
INSA-Summer-camp/
├── C++/
│   └── Malware/
│       ├── encryptor/
│       ├── decryptor/
│       ├── include/
│       ├── src/
│       ├── test/
│       ├── DOCUMENTATION/
│       ├── CMakeLists.txt
│       └── README.md
├── Reverse Engineering write-up/
├── reverse/
├── screanshot/
├── Screenshot 2026-08-02 025001.png
├── Screenshot 2026-08-02 025300.png
└── Screenshot 2026-08-02 031203.png
```

## Build and run

To build the project:

```bash
cd "C++/Malware"
cmake -S . -B build
cmake --build build
```

To run it:

```bash
./build/encryptor
./build/decryptor
./build/verify
```

## What this project does

The program reads a file, encrypts it using RC4 with a fixed key, and then decrypts it back to check whether the original content is exactly the same.

This is a good example of learning:

- file encryption
- C++ programming
- security basics
- reverse engineering and cybersecurity concepts

## Note

This is a small learning project from the INSA Summer Camp, made for practice and understanding of cybersecurity and C++ programming.

