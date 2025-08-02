# MULTITHREADED-FILE-COMPRESSION-TOOL


**COMPANY:** Codtech IT Solutions  
**NAME:** Aradhya Verma  
**INTERN ID:** CT04DZ475  
**DOMAIN:** C++ Programming  
**DURATION:** 4 Weeks  
**MENTOR:** Neela Santhosh  

A high-performance C++ console application that performs **file compression and decompression** using **Run-Length Encoding (RLE)**. The tool compares single-threaded and multithreaded performance to demonstrate optimization using `std::thread`.

---

## 🚀 Overview

This command-line compression tool showcases the power of multithreading in C++. It compresses a text file using **Run-Length Encoding** and then decompresses it in two modes:

- ⚙️ **Multithreaded Decompression**
- 🧵 **Single-threaded Decompression**

The results are written to separate files and performance time is recorded for each operation.

---

## ✨ Key Features

📦 **Compress File** – Encode repeating characters using RLE  
🔄 **Multithreaded Decompression** – Parallel processing of compressed chunks  
🔁 **Single-threaded Decompression** – Linear processing for comparison  
📊 **Performance Timing** – Track execution time in milliseconds  
🧠 **Thread-safe Design** – Prevents race conditions  
📤 **Outputs** – Saves to `compressed.txt`, `output_mt.txt`, and `output_st.txt`  

---

## 🛠️ Technology Stack

**Language:**  
- C++

**Libraries Used:**  
- `<iostream>`  
- `<fstream>`  
- `<vector>`  
- `<string>`  
- `<thread>`  
- `<chrono>`  
- `<mutex>`  

**Tools Used:**  
- `g++` (GNU Compiler Collection)  
- Terminal (macOS/Linux)  
- Visual Studio Code (Recommended)

---

## 📁 Project Structure

Task_2/
├── input.txt # Raw input file (editable)
├── compressed.txt # RLE encoded data
├── output_mt.txt # Decompressed (Multithreaded)
├── output_st.txt # Decompressed (Single-threaded)
├── main2.cpp # Source code
├── main2 # Compiled executable
├── task2_output.png # Screenshot of sample output
└── README.md # Project documentation

---

## ⚙️ Quick Start

### 🔧 Prerequisites

- C++ compiler with C++11 support  
- Terminal or Command Prompt  
- Visual Studio Code (for best editing experience)

---

### ▶️ Compilation

```bash
g++ -std=c++11 -pthread main2.cpp -o main2

<img width="642" height="69" alt="Image" src="https://github.com/user-attachments/assets/e0c86fb2-360a-45bb-a67d-951b0db29457" />

