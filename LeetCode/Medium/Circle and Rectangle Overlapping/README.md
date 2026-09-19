# Circle and Rectangle Overlapping

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | September 19, 2026 |
| **Tags** | Math, Geometry |
| **Link** | [View Problem](https://leetcode.com/problems/circle-and-rectangle-overlapping/) |
| **Runtime** | 0 ms |
| **Memory** | 7.9 MB |

## Problem Description

<p>You are given a circle represented as <code>(radius, xCenter, yCenter)</code> and an axis-aligned rectangle represented as <code>(x1, y1, x2, y2)</code>, where <code>(x1, y1)</code> are the coordinates of the bottom-left corner, and <code>(x2, y2)</code> are the coordinates of the top-right corner of the rectangle.</p>

<p>Return <code>true</code><em> if the circle and rectangle are overlapped otherwise return </em><code>false</code>. In other words, check if there is <strong>any</strong> point <code>(x<sub>i</sub>, y<sub>i</sub>)</code> that belongs to the circle and the rectangle at the same time.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/20/sample_4_1728.png" style="width: 258px; height: 167px;">
<pre><strong>Input:</strong> radius = 1, xCenter = 0, yCenter = 0, x1 = 1, y1 = -1, x2 = 3, y2 = 1
<strong>Output:</strong> true
<strong>Explanation:</strong> Circle and rectangle share the point (1,0).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> radius = 1, xCenter = 1, yCenter = 1, x1 = 1, y1 = -3, x2 = 2, y2 = -1
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/20/sample_2_1728.png" style="width: 150px; height: 135px;">
<pre><strong>Input:</strong> radius = 1, xCenter = 0, yCenter = 0, x1 = -1, y1 = 0, x2 = 0, y2 = 1
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= radius &lt;= 2000</code></li>
	<li><code>-10<sup>4</sup> &lt;= xCenter, yCenter &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= x1 &lt; x2 &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= y1 &lt; y2 &lt;= 10<sup>4</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Circle and Rectangle Overlapping
**Author**: [@prabhatm580](https://leetcode.com/prabhatm580/)
**Upvotes**: 6 👍
**Link**: [View Original Post](https://leetcode.com/problems/circle-and-rectangle-overlapping/solutions/1895200/)

---

```
we know the equation of circle (x-c1)^2+(y-c2)^2=r^2
x1<=i<=x2
y1<=j<=y2
if((i-c1)^2+(j-c2)^2<=r*r)
   -> means that if (i,j) belongs to circle means that it touches or intersects the circle.
```
```
class Solution 
{
 public:
    bool checkOverlap(int r, int x, int y, int x1, int y1, int x2, int y2) 
    {
        for(int i=x1;i<=x2;i++)
        {
           for(int j=y1;j<=y2;j++)
           {
              int c1=i-x;
              int c2=j-y;
              if(c1*c1+c2*c2<=r*r)
                  return 1;
           }
        }
        return 0;
    }
};
```

</details>
