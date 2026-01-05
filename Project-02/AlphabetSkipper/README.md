
# Alphabet Skipping Program (Do-While Loop)

## 📌 Description
This C program prints alphabets from **A to Z** by **skipping 2 alphabets** each time using a **do-while loop**.

### 🔹 Example Output
```

A E I M Q U Y

````

---

## 🧠 Logic Used
- Start from alphabet **'A'**
- Print the character
- Increase ASCII value by **4** (skip 2 alphabets)
- Repeat using a **do-while loop**

---

## 💻 Source Code
```c
#include<stdio.h>

void main(){
    int i = 1;
    char alpha = 65;   // 'A'

    do{
        printf("%c ", alpha);
        i++;
        alpha += 4;
    }while(i <= 13);
}
````

---

## 📷 Output Screenshot



---

## ✅ Concepts Covered

* `do-while` loop
* ASCII values
* Character manipulation in C

---


