
# Cube of 2D Array Elements Using Pointer in C

## 📌 Problem Statement
Develop a program to find the **cube of all elements of a given 2D array** using **pointer arithmetic** and a **User Defined Function (UDF)** in C.

---

## 🛠️ Concepts Used
- 2D Arrays
- Pointers
- Pointer Arithmetic
- User Defined Function (UDF)
- Nested Loops

---

## 📸 Screenshots
<img width="838" height="671" alt="Screenshot 2026-02-04 120423" src="https://github.com/user-attachments/assets/1186530a-6db8-413c-a573-1094a1e58381" />


---

## 📊 Sample Output

```
Enter elements of 2D array:
1 2 3
4 5 6
7 8 9

Cube of elements:
1 8 27
64 125 216
343 512 729
```

---

## 🧠 Explanation

* The 2D array is passed to the function as a pointer using `&arr[0][0]`
* Pointer arithmetic is used to access elements:

  ```
  *(arr + i*c + j)
  ```
* Each element is cubed and printed inside the UDF

---



