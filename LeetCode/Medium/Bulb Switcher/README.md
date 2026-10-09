# Bulb Switcher

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 10, 2026 |
| **Tags** | Math, Brainteaser |
| **Link** | [View Problem](https://leetcode.com/problems/bulb-switcher/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>There are <code>n</code> bulbs that are initially off. You first turn on all the bulbs, then&nbsp;you turn off every second bulb.</p>

<p>On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the <code>i<sup>th</sup></code> round, you toggle every <code>i</code> bulb. For the <code>n<sup>th</sup></code> round, you only toggle the last bulb.</p>

<p>Return <em>the number of bulbs that are on after <code>n</code> rounds</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/bulb.jpg" style="width: 421px; height: 321px;">
<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> 1
<strong>Explanation:</strong> At first, the three bulbs are [off, off, off].
After the first round, the three bulbs are [on, on, on].
After the second round, the three bulbs are [on, off, on].
After the third round, the three bulbs are [on, off, off]. 
So you should return 1 because there is only one bulb is on.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 0
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Image Explanation🏆- [Easiest to Understand - No Clickbait] - C++/Java/Python
**Author**: [@aryan_0077](https://leetcode.com/aryan_0077/)
**Upvotes**: 118 👍
**Link**: [View Original Post](https://leetcode.com/problems/bulb-switcher/solutions/3459106/)

---

# Video Solution (`Aryan Mittal`) - Link in LeetCode Profile
`Bulb Switcher` by `Aryan Mittal`
![lc.png](https://assets.leetcode.com/users/images/a3e889bd-7b40-412e-8e55-5335d872acb8_1682559814.8735898.png)


# Approach & Intution
![image.png](https://assets.leetcode.com/users/images/1fdf1dd6-5f40-40e1-967f-ca3388dc9224_1682559087.0548987.png)
![image.png](https://assets.leetcode.com/users/images/e122b3d2-5f2e-4f7d-997c-16f6650e2393_1682559096.9522943.png)
![image.png](https://assets.leetcode.com/users/images/0a8adb86-2e51-4952-af48-dfd1148ceba6_1682559107.5787735.png)
![image.png](https://assets.leetcode.com/users/images/c64c8eb2-1377-45d3-a64b-7d136286f6d6_1682559119.9725766.png)
![image.png](https://assets.leetcode.com/users/images/a98f0d15-e251-4071-bd46-723cc8e30ba9_1682559130.6620624.png)
![image.png](https://assets.leetcode.com/users/images/917462af-c595-447e-b5e3-e224f742839f_1682559139.1918097.png)
![image.png](https://assets.leetcode.com/users/images/bf90fc30-3208-4f94-badc-db586b8b435c_1682559150.8375518.png)
![image.png](https://assets.leetcode.com/users/images/4a22e1b1-f62e-47c8-ba62-342b59af8458_1682559165.5627007.png)
![image.png](https://assets.leetcode.com/users/images/048337b4-6219-4218-842e-ad690aa7f585_1682559176.4367657.png)
![image.png](https://assets.leetcode.com/users/images/2d651803-a540-43f1-8567-a08ff410abd1_1682559183.7578912.png)
![image.png](https://assets.leetcode.com/users/images/1616acd0-1d4a-430a-b742-be6682e92f16_1682559191.2816284.png)


# Code
```C++ []
class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
```
```Java []
class Solution {
    public int bulbSwitch(int n) {
        return (int)Math.sqrt(n);
    }
}
```
```Python []
import math

class Solution:
    def bulbSwitch(self, n: int) -> int:
        return int(math.sqrt(n))
```


</details>
