# Problem of the week #6: Complete search


Hope everyone is having an excellent week! Today's problem of the week topic is called complete search. Complete search is the ultimate algorithm - it can be used to solve practically everything that can be represented with a state. This is why graph theory and BFS / DFS is very important: lots of problems can be represented via graphs.

Most complete search problems follow these steps for a solution:
1. Create an initial representation of the state
2. Generate neighbor states and search through those for goal (end) states (Brute force solution)
3. Look for optimizations to do (will normally significantly lower run time!)

An easy example is returning all the permutations of a string using recursion. Let's say we have a string "ABC". We want to create all permutations of it. Complete search is awesome for this. The algorithm could go:

1. Start with initial state "" (empty string).
2. Add one letter (say A), call function recursively with other letters left available.
3. Repeat step 2 until all letters are used, add the result string to the queue.
4. Return one call out. Then, add next letter with step 2.

So: "" -> "A" -> "AB" -> "ABC" -> "AB" -> "A" -> "AC" -> "ACB" -> ... -> "CBA"

Today's problem of the week is another classic problem: The N-Queens problem! Check it out here: [link](https://leetcode.com/problems/n-queens-ii/).

Also, here's my solutions to last week's problems:
[link](https://github.com/osu-acm/problem-of-the-week/tree/master/week5)

Thanks!
