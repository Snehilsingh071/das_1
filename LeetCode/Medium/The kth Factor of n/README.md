# The kth Factor of n

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 12, 2026 |
| **Tags** | Math, Number Theory, Prime Factorization |
| **Link** | [View Problem](https://leetcode.com/problems/the-kth-factor-of-n/) |
| **Runtime** | 0 ms |
| **Memory** | 8 MB |

## Problem Description

<p>You are given two positive integers <code>n</code> and <code>k</code>. A factor of an integer <code>n</code> is defined as an integer <code>i</code> where <code>n % i == 0</code>.</p>

<p>Consider a list of all factors of <code>n</code> sorted in <strong>ascending order</strong>, return <em>the </em><code>k<sup>th</sup></code><em> factor</em> in this list or return <code>-1</code> if <code>n</code> has less than <code>k</code> factors.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 12, k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> Factors list is [1, 2, 3, 4, 6, 12], the 3<sup>rd</sup> factor is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 7, k = 2
<strong>Output:</strong> 7
<strong>Explanation:</strong> Factors list is [1, 7], the 2<sup>nd</sup> factor is 7.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 4, k = 4
<strong>Output:</strong> -1
<strong>Explanation:</strong> Factors list is [1, 2, 4], there is only 3 factors. We should return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= n &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<p>Could you solve this problem in less than O(n) complexity?</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy ,Beginner friendly & Dry Run || Iteration || Time O(n) and Space O(1) || Gits ✅✅✅😎😎
**Author**: [@GiteshSK_12](https://leetcode.com/GiteshSK_12/)
**Upvotes**: 21 👍
**Link**: [View Original Post](https://leetcode.com/problems/the-kth-factor-of-n/solutions/4684663/)

---

![Screenshot 2024-02-06 102644.png](https://assets.leetcode.com/users/images/d568a8d0-bc05-40f0-9833-e1b2ddec2f95_1707195410.6441343.png)

# Intuition \uD83D\uDC48
The question is very simple. It is given nnn and kkk, where we have to find the factors of the number n and we have to return the kth factor of n. For example, n=12 and k=3,the factors of 12 are 1, 2, 3, 4, 6, and 12. The 3rd factor is 3, so we will return 3.

# Approach \uD83D\uDC48
We will simply iterate from 1 to n and maintain a count. The count will tally the number of factors. As soon as the count matches k, we will return i. If there is no match or there are no factors, we will return -1. 

# Code Expalnation \uD83D\uDC48

*   **Variable Initialization**: A variable `count` is initialized to `0`. This variable is used to keep track of the number of factors encountered so far.
    
*   **Loop through 1 to n**: The method iterates through all integers from `1` to `n` inclusive, using a `for` loop with `i` as the loop variable. This is because all factors of `n` will be in this range.
    
*   **Check for a factor**: Inside the loop, the code checks if `n` is divisible by `i` using the modulo operator (`n % i == 0`). If `n % i == 0`, it means `i` is a factor of `n`.
    
*   **Increment count and check position**: When a factor is found, `count` is incremented. Then, it checks if the current count equals `k`. If so, this means the kthk^{th}kth factor has been found, and `i` (the current factor) is immediately returned.
    
*   **Completion of the loop or return -1**: If the loop completes without finding the kthk^{th}kth factor (i.e., without returning from inside the loop), the method returns `-1`. This indicates that there are fewer than `k` factors of `n`, and thus, the kthk^{th}kth factor does not exist.

# Complexity \uD83D\uDC48
- Time complexity: O(n)

- Space complexity: O(1)

# Code
```C []
int kthFactor(int n, int k) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (count == k)return i;
        }
    }
    return -1;
}
```
```C++ []
class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
                if (count == k)return i;
            }
        }
        return -1;
    }
};
```
```Java []
class Solution {
    public int kthFactor(int n, int k) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
                if (count == k)return i;
            }
        }
        return -1;
    }
}
```
```javascript []
/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function(n, k) {
    let count = 0;
    for (let i= 1; i <= n; i++) {
        if (n % i == 0) {
                count++;
            if (count == k)return i;
        }
    }
    return -1;
};
```
```C# []
public class Solution {
    public int KthFactor(int n, int k) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
                if (count == k)return i;
            }
        }
        return -1;
    }
}
```
```python []
class Solution(object):
    def kthFactor(self, n, k):
        count = 0
        for i in range(1,n+1):
            if n % i == 0 :
                count+=1
                if count == k: return i
        return -1
        
```
```ruby []
# @param {Integer} n
# @param {Integer} k
# @return {Integer}
def kth_factor(n, k)
    count = 0
    for i in 1..n do
        if n % i == 0
            count+=1
            if count == k
                return i
            end
        end
    end
    return -1
end
```
# Dry Run \uD83D\uDC48

1.  **Initialization**: `count = 0`
2.  **Iteration starts**: `for (int i = 1; i <= 12; i++)`

*   **Iteration 1**: `i = 1`
    
    *   `12 % 1 == 0`, so it\'s a factor.
    *   `count` is incremented to `1`.
    *   `count` is not equal to `k` (3), so continue.
*   **Iteration 2**: `i = 2`
    
    *   `12 % 2 == 0`, so it\'s a factor.
    *   `count` is incremented to `2`.
    *   `count` is not equal to `k` (3), so continue.
*   **Iteration 3**: `i = 3`
    
    *   `12 % 3 == 0`, so it\'s a factor.
    *   `count` is incremented to `3`.
    *   `count` equals `k` (3), so `i` (which is `3` at this moment) is returned as the output.
    
# Hey Guys if the solution and explanation is help full then upvate me.\u2764\uFE0F\u2764\uFE0F

![Screenshot 2024-01-28 214252.png](https://assets.leetcode.com/users/images/47120199-360b-44d5-9c85-06be2cef3a30_1707195292.9704316.png)


</details>
