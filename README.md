# 🚀 DSA Poster Project – Traffic Navigation Problem

This repository is created to **showcase a Data Structures and Algorithms (DSA) project** in the form of an academic **poster**.  
The chosen real-life problem is the **Traffic Navigation Problem**, where we need to find the **shortest and most efficient path** in a road network.  

The project demonstrates how algorithms like **Dijkstra’s Algorithm** can be applied to solve real-world challenges such as **route optimization, logistics, and emergency response navigation**.  
It also includes **C++ code for implementation** and **Python visualizations** for generating performance comparison charts that highlight efficiency across different algorithms.  

---

## 📂 Repository Contents

- **C++ Code** → Implementation of Dijkstra’s Algorithm for solving the shortest path problem.  
- **Python Script** → Generates performance comparison charts and visualizations for the poster.

---

## ⚡ Running the C++ Code

### 1. Navigate to the Project Folder
Go to the directory where your C++ file (e.g., `DSA-Dijkstra-Code.cpp`) is saved:
```bash
cd path/to/project
```

### 2. Compile the Code
Using g++:
```bash
g++ dijkstra.cpp -o dijkstra
```

### 3. Run the Program
- On Linux/macOS:
```bash
./dijkstra
```
- On Windows (MinGW or similar):
```bash
dijkstra.exe
```
The output will show:
- The shortest distance from the source to each node.
- The actual path taken with its total cost.

---

## 🖥️ Running the Python Code

### 1. Create a Virtual Environment
- On Linux/macOS:
```bash
python3 -m venv venv
```

- On Windows:
```bash
python -m venv venv
```

### 2. Activate the Virtual Environment

- On Linux/macOS:
```bash
source venv/bin/activate
```
- On Windows (Command Prompt):
```bash
venv\Scripts\activate
```
- On Windows (PowerShell):
```bash
venv\Scripts\Activate.ps1
```

After activation, you will see `(venv)` at the beginning of your terminal prompt.

### 3. Install Dependencies

Inside the virtual environment, install the required libraries:
```bash
pip install networkx matplotlib
```

### 4. Run the Python Script

To generate the **performance comparison chart**:
- On Linux/macOS:
```bash
python3 DSA-Image-Code.py
```
- On Windows:
```bash
python DSA-Image-Code.py
```
This will create an image file.

---

## Screenshot of the Graph
![graph](/images/image.png)

---