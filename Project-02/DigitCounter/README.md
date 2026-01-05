
# Digit Count Program in C

## 📌 Problem Statement
Develop a C program to **count the total number of digits** in a given number.

### 🔹 Example
```

Input : 638
Output: 3 digits

````

---

## 🧠 Logic Used
- Take an integer input from the user
- Divide the number by **10** repeatedly
- Count how many times the loop runs
- Each division removes one digit

---

## 💻 Source Code
```c
#include<stdio.h>

void main(){
    int i, num, count = 0;

    printf("Enter Number to find digits: ");
    scanf("%d", &num);

    for(i = 1; num >= 1; i++){
        num /= 10;
        count++;
    }

    printf("%d", count);
}
````

---

## 📷 Output Screenshot



---

## ✅ Concepts Covered

* `for` loop
* Integer division
* Counting logic
* User input using `scanf()`

---


