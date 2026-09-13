# Image Overlap

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | September 13, 2026 |
| **Tags** | Array, Matrix |
| **Link** | [View Problem](https://leetcode.com/problems/image-overlap/) |
| **Runtime** | 51 ms |
| **Memory** | 13 MB |

## Problem Description

<p>You are given two images, <code>img1</code> and <code>img2</code>, represented as binary, square matrices of size <code>n x n</code>. A binary matrix has only <code>0</code>s and <code>1</code>s as values.</p>

<p>We <strong>translate</strong> one image however we choose by sliding all the <code>1</code> bits left, right, up, and/or down any number of units. We then place it on top of the other image. We can then calculate the <strong>overlap</strong> by counting the number of positions that have a <code>1</code> in <strong>both</strong> images.</p>

<p>Note also that a translation does <strong>not</strong> include any kind of rotation. Any <code>1</code> bits that are translated outside of the matrix borders are erased.</p>

<p>Return <em>the largest possible overlap</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap1.jpg" style="width: 450px; height: 231px;">
<pre><strong>Input:</strong> img1 = [[1,1,0],[0,1,0],[0,1,0]], img2 = [[0,0,0],[0,1,1],[0,0,1]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We translate img1 to right by 1 unit and down by 1 unit.
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap_step1.jpg" style="width: 450px; height: 105px;">
The number of positions that have a 1 in both images is 3 (shown in red).
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap_step2.jpg" style="width: 450px; height: 231px;">
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> img1 = [[1]], img2 = [[1]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> img1 = [[0]], img2 = [[0]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == img1.length == img1[i].length</code></li>
	<li><code>n == img2.length == img2[i].length</code></li>
	<li><code>1 &lt;= n &lt;= 30</code></li>
	<li><code>img1[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
	<li><code>img2[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ Solution using Map
**Author**: [@adirocks1309](https://leetcode.com/adirocks1309/)
**Upvotes**: 70 👍
**Link**: [View Original Post](https://leetcode.com/problems/image-overlap/solutions/1778665/)

---

```
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>vec_a;
        vector<pair<int,int>>vec_b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1){
                    vec_a.push_back({i,j});
                }
                if(img2[i][j]==1){
                    vec_b.push_back({i,j});
                }
            }
        }
        int ans=0;
        map<pair<int,int>,int>mp;
        for(auto [i1,j1]:vec_a){
            for(auto [i2,j2]:vec_b){
                mp[{i1-i2,j1-j2}]++;
                ans=max(ans,mp[{i1-i2,j1-j2}]);
            }
        }
        return ans;
    }
};
```
***please upvote if you understood the approach :)***

</details>
