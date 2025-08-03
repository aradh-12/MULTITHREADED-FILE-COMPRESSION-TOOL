# 🚀 MULTITHREADED FILE COMPRESSION TOOL

A blazing-fast C++ console app designed to **compress and decompress files** using **Run-Length Encoding (RLE)** — all while showcasing the performance boost achieved through **multithreading**. 🔧⚡

---

## 👨‍💻 Internship Details

**🏢 Company:** Codtech IT Solutions  
**👤 Intern:** Aradhya Verma  
**🆔 Intern ID:** CT04DZ475  
**💻 Domain:** C++ Programming  
**⏳ Duration:** 4 Weeks  
**🧑‍🏫 Mentor:** Neela Santhosh  

---

## 📖 About the Project

This tool is not just a compression utility—it's a practical demonstration of how **multithreaded programming in C++** can dramatically improve performance. It compresses files using **Run-Length Encoding (RLE)** and then decompresses them using:

- 🔄 **Single-threaded mode** for baseline comparison  
- 🚀 **Multithreaded mode** for enhanced speed using `std::thread`  

🔍 The tool also captures and displays precise execution time for each operation, helping you **visualize the speedup**.

---

## 🌟 Features At a Glance

✅ **Compress Files** using efficient RLE  
🧵 **Multithreaded Decompression** — each chunk handled in parallel  
⚙️ **Single-threaded Decompression** for benchmarking  
📈 **Performance Tracking** — shows time in milliseconds  
🧠 **Thread-safe Mechanism** — with `std::mutex` to avoid race conditions  
🗃️ **Clean Output Structure** — outputs stored in `compressed.txt`, `output_mt.txt`, and `output_st.txt`

---

## 🧪 Real-World Use

Need to process large log files, text archives, or repetitive datasets faster? This tool is a hands-on example of how **concurrent processing** can significantly reduce time, especially for I/O-heavy operations.

---

## 💻 Tech Stack

**Programming Language:**  
- C++

**Core Libraries:**  
- `<iostream>`, `<fstream>`, `<vector>`, `<string>`  
- `<thread>`, `<chrono>`, `<mutex>`

**Tools:**  
- `g++` (C++11 and above with pthread support)  
- Terminal (Linux/macOS/Windows)  
- Visual Studio Code (Recommended for dev)

---

## 📁 Project Structure

```

Task\_2/
├── input.txt            # Input text file (editable)
├── compressed.txt       # Output after RLE compression
├── output\_mt.txt        # Output from multithreaded decompression
├── output\_st.txt        # Output from single-threaded decompression
├── main2.cpp            # Core source code
├── main2                # Compiled executable (after build)
├── task2\_output.png     # Sample output screenshot
└── README.md            # Documentation

````

---

## ⚙️ How to Run

### 🔧 Prerequisites

Make sure you have:

- A C++11 compatible compiler (like `g++`)
- A terminal or command prompt
- Visual Studio Code (optional, but great for debugging)

### ▶️ Compile the Code

```bash
g++ -std=c++11 -pthread main2.cpp -o main2
````

### ▶️ Run the Executable

```bash
./main2
```

You’ll see the file being compressed and decompressed, followed by printed execution times for each mode.

---

## 📸 Gallery / Output Preview

Check out the sample output and performance benchmarks here:
📎 [Issue Tracker & Screenshots](https://github.com/aradh-12/MULTITHREADED-FILE-COMPRESSION-TOOL/issues/1)

---

## 🙌 Final Note

This project isn't just about compressing files—it's a showcase of **clean multithreaded architecture** and **real-world system optimization**. Whether you're learning parallel programming or building efficient data tools, this is your starting point.

---

```

Let me know if you'd like a version with badges, visual performance graphs, or Markdown table formats.
```
