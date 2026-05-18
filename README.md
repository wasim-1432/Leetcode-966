# Vowel Spellchecker – LeetCode Solution

## 📌 Problem Statement

Implement a spell checker that converts a query word into the correct word based on the following rules:

1. **Exact Match**
   If the query exactly matches a word in the wordlist, return it directly.

2. **Case-Insensitive Match**
   If lowercase versions match, return the first matching word from the wordlist.

3. **Vowel Error Match**
   If replacing vowels (`a, e, i, o, u`) with `*` creates a match, return the first matching word.

4. If no match exists, return an empty string.

---

# 🚀 Approach

To solve this problem efficiently, I used:

* **Hash Tables**
* **String Normalization**
* **Lowercase Conversion**
* **Vowel Masking**

---

# ⚡ Key Idea

## Step 1: Exact Match

Store all original words for direct lookup.

Example:

```text
KiTe → KiTe
```

---

## Step 2: Lowercase Match

Convert every word into lowercase.

Example:

```text
KiTe → kite
HARE → hare
```

Store the first occurrence only.

---

## Step 3: Vowel Normalization

Replace all vowels with `*`.

Example:

```text
KiTe → k*t*
keto → k*t*
```

This helps handle vowel mistakes efficiently.

---

# 🛠 Concepts Used

* Hash Maps (`unordered_map`)
* String Manipulation
* Character Conversion using `tolower()`
* Efficient Lookup Optimization
* Edge Case Handling

---

# 📚 What I Learned

While solving this problem, I faced:

❌ Wrong Answers
❌ Runtime Errors
❌ TLE on multiple testcases

After debugging, I improved my understanding of:

✅ Case Sensitivity
✅ Iterator Handling
✅ String Normalization
✅ Optimizing Repeated Searches
✅ Debugging Complex Edge Cases

---

# 💻 Time Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Preprocessing    | O(N)       |
| Query Processing | O(Q)       |
| Overall          | O(N + Q)   |

Where:

* `N` = size of wordlist
* `Q` = number of queries

---

# 🧠 Example

## Input

```text
wordlist = ["KiTe","kite","hare","Hare"]

queries = ["kite","Kite","KiTe","HARE","keti"]
```

## Output

```text
["kite","KiTe","KiTe","hare","KiTe"]
```

---

# 🔥 Final Thoughts

This problem taught me that even a small mistake in:

* lowercase conversion,
* iterator usage,
* or string comparison

can completely change the output.

Debugging and optimization were the real learning parts of this challenge 🚀

---

# 🏷 Tags

`C++` `Hash Table` `Strings` `LeetCode` `DSA` `Algorithms`


#leetcode #cpp #datastructures #algorithms #coding #programming #softwareengineering #dsa #developers #learning #100DaysOfCode
