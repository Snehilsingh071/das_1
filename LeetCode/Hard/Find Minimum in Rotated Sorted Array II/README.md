# Find Minimum in Rotated Sorted Array II

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Hard |
| **Language** | cpp |
| **Solved On** | October 10, 2026 |
| **Tags** | Array, Binary Search |
| **Link** | [View Problem](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) |
| **Runtime** | 0 ms |
| **Memory** | 16.1 MB |

## Approach

optimized

## Problem Description

<p>Suppose an array of length <code>n</code> sorted in ascending order is <strong>rotated</strong> between <code>1</code> and <code>n</code> times. For example, the array <code>nums = [0,1,4,4,5,6,7]</code> might become:</p>

<ul>
	<li><code>[4,5,6,7,0,1,4]</code> if it was rotated <code>4</code> times.</li>
	<li><code>[0,1,4,4,5,6,7]</code> if it was rotated <code>7</code> times.</li>
</ul>

<p>Notice that <strong>rotating</strong> an array <code>[a[0], a[1], a[2], ..., a[n-1]]</code> 1 time results in the array <code>[a[n-1], a[0], a[1], a[2], ..., a[n-2]]</code>.</p>

<p>Given the sorted rotated array <code>nums</code> that may contain <strong>duplicates</strong>, return <em>the minimum element of this array</em>.</p>

<p>You must decrease the overall operation steps as much as possible.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,3,5]
<strong>Output:</strong> 1
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,2,0,1]
<strong>Output:</strong> 0
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 5000</code></li>
	<li><code>-5000 &lt;= nums[i] &lt;= 5000</code></li>
	<li><code>nums</code> is sorted and rotated between <code>1</code> and <code>n</code> times.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> This problem is similar to&nbsp;<a href="https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/" target="_blank">Find Minimum in Rotated Sorted Array</a>, but&nbsp;<code>nums</code> may contain <strong>duplicates</strong>. Would this affect the runtime complexity? How and why?</p>

<p>&nbsp;</p>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ binary + linear search
**Author**: [@jianchao-li](https://leetcode.com/jianchao-li/)
**Upvotes**: 33 👍
**Link**: [View Original Post](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/solutions/48883/)

---

> Would allow duplicates affect the run-time complexity? How and why?

Yes, suppose an array `[0,1,1,1,1]` is rotated to `[1,0,1,1,1]` and `[1,1,1,0,1]`. In these two cases, `nums[l] == nums[m] == nums[r]`, but in the first case, the minimum is in the left while in the right in the second case. When all `nums[l]`, `nums[m]` and `nums[r]` are equal, we will have no idea which half to move on. In this case, a linear search from `l` to `r` is necessary and the time complexity becomes `O(n)`.

```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r && nums[l] > nums[r]) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[m + 1]) {
                return nums[m + 1];
            }
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return findMin(nums, l, r);
    }
private:
    int findMin(vector<int>& nums, int l, int r) {
        int mini = nums[l++];
        while (l <= r) {
            mini = min(mini, nums[l++]);
        }
        return mini;
    }
};
```

The above codes can be shortened as shown in [this post](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/discuss/48808/My-pretty-simple-code-to-solve-it).

```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else if (nums[m] < nums[r]) {
                r = m;
            } else {
                r--;
            }
        }
        return nums[l];
    }
};
```

</details>
