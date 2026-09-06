<h2><a href="https://codeforces.com/contest/2026/problem/A" target="_blank" rel="noopener noreferrer">2026A — Perpendicular Segments</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2026A](https://codeforces.com/contest/2026/problem/A) |

## Topics
`constructive algorithms` `geometry` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Perpendicular Segments</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a coordinate plane and three integers $$$X$$$, $$$Y$$$, and $$$K$$$. Find two line segments $$$AB$$$ and $$$CD$$$ such that </p><ol> <li> the coordinates of points $$$A$$$, $$$B$$$, $$$C$$$, and $$$D$$$ are integers; </li><li> $$$0 \le A_x, B_x, C_x, D_x \le X$$$ and $$$0 \le A_y, B_y, C_y, D_y \le Y$$$; </li><li> the length of segment $$$AB$$$ is at least $$$K$$$; </li><li> the length of segment $$$CD$$$ is at least $$$K$$$; </li><li> segments $$$AB$$$ and $$$CD$$$ are <span class="tex-font-style-it">perpendicular</span>: if you draw lines that contain $$$AB$$$ and $$$CD$$$, they will cross at a right angle. </li></ol><p>Note that it's <span class="tex-font-style-bf">not</span> necessary for segments to intersect. Segments are perpendicular as long as the lines they induce are perpendicular.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases. Next, $$$t$$$ cases follow.</p><p>The first and only line of each test case contains three integers $$$X$$$, $$$Y$$$, and $$$K$$$ ($$$1 \le X, Y \le 1000$$$; $$$1 \le K \le 1414$$$).</p><p><span class="tex-font-style-bf">Additional constraint on the input:</span> the values of $$$X$$$, $$$Y$$$, and $$$K$$$ are chosen in such a way that the answer exists.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two lines. The first line should contain $$$4$$$ integers $$$A_x$$$, $$$A_y$$$, $$$B_x$$$, and $$$B_y$$$ — the coordinates of the first segment.</p><p>The second line should also contain $$$4$$$ integers $$$C_x$$$, $$$C_y$$$, $$$D_x$$$, and $$$D_y$$$ — the coordinates of the second segment.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004084080723100636" id="id004529181780573295" class="input-output-copier">Copy</div></div><pre id="id004084080723100636"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">3 4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4 3 3</div><div class="test-example-line test-example-line-even test-example-line-4">3 4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008218471592236017" id="id0048499491942357864" class="input-output-copier">Copy</div></div><pre id="id008218471592236017">0 0 1 0
0 0 0 1
2 4 2 2
0 1 1 1
0 0 1 3
1 2 4 1
0 1 3 4
0 3 3 0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The answer for the first test case is shown below: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d5fe2c31a23ae8eccc2f396c2b2d8e1ec5eebd93.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center> The answer for the second test case: <center> <img class="tex-graphics" src="https://espresso.codeforces.com/c57eedb8236881a70ddca3c4e233b4a886877032.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center> The answer for the third test case: <center> <img class="tex-graphics" src="https://espresso.codeforces.com/b91bba66905c7ff7f6a0d947cb4cebe847b0641b.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center> The answer for the fourth test case: <center> <img class="tex-graphics" src="https://espresso.codeforces.com/c5c1d7530bc64f4223ed5d98dcb490a215950aaf.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>