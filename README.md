# ASCII Pyramid Pattern Generator

This project is an algorithmic implementation in C designed to render geometric patterns (specifically right-angled pyramids) on the console output. It demonstrates the mastery of **Nested Control Structures** and coordinate logic.

## 📐 Mathematical Logic

The algorithm constructs the pattern based on an arithmetic progression of odd numbers.
For each row $i$:
* The number of stars ($*$) follows the formula: $Count = 2i - 1$

### Iteration Analysis:
* **Row 1 ($i=1$):** $j < 2(1) \rightarrow 1$ Star  `*`
* **Row 2 ($i=2$):** $j < 2(2) \rightarrow 3$ Stars `***`
* **Row 3 ($i=3$):** $j < 2(3) \rightarrow 5$ Stars `*****`
* **Row 4 ($i=4$):** $j < 2(4) \rightarrow 7$ Stars `*******`
* **Row 5 ($i=5$):** $j < 2(5) \rightarrow 9$ Stars `*********`

## ⚙️ Code Structure

* **Outer Loop:** Controls the vertical axis (rows).
* **Inner Loop:** Controls the horizontal axis (columns/stars), dependent on the current state of the outer loop.

## 🚀 Usage

1.  Compile the source code:
    ```bash
    gcc main.c -o pattern_gen
    ```
2.  Run the executable:
    ```bash
    ./pattern_gen
    ```

---
*This repository demonstrates visual data construction using loops in C.*
