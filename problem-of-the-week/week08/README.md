# Problem of the week #8 - Binary search

This week's problem topic is binary search! Binary search is a super useful algorithm that can find a number in a sorted array in O(logn), or at least that's what it's most famous for. The idea is to start at the middle of the array, check if the target number is above or below the midpoint, then search the half of the array that it would be in. It halves the search space each time, hence the "binary" part of its name and the O(log(base2)n) time complexity. However, there are some other really cool applications for it.

For instance, instead of searching using indices, you can search using values. This week's first problem is: [link](https://leetcode.com/problems/find-the-duplicate-number/).

Another example is if you wanted to search through a 2D array. This week's second problem is: [link](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/). Also this one is pretty tough to do using Binary search, so if you can find another (hint: easier) way of doing it, you should do it that way.

Solution to last week's problem: [link](https://github.com/calgagi/problems/blob/master/comp/codeforces/1041/B.cpp).
