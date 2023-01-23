# Tower of Hanoi

## Problem 
The Tower of Hanoi is a mathematical puzzle that consists of three rods and a number of disks of different sizes, which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape.

The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:

- Only one disk can be moved at a time.
- Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
- No disk may be placed on top of a smaller disk.
- The minimum number of moves required to solve a Tower of Hanoi puzzle is 2^n - 1, where n is the number of disks.

## Tower of Hanoi Algorithm

1. Identify the three rods: source rod, auxiliary rod, and destination rod.

2. Move the top n-1 disks from the source rod to the auxiliary rod using the destination rod as a temporary storage. This step is a recursive call to the same algorithm with n-1 disks.

3. Move the nth disk (the largest disk) from the source rod to the destination rod.

4. Move the n-1 disks from the auxiliary rod to the destination rod using the source rod as a temporary storage. This step is also a recursive call to the same algorithm with n-1 disks.

5. Repeat the above steps recursively with n-1 disks until the base case of one disk is reached, at which point the disk can be moved directly from the source rod to the destination rod.



## Pesudo Code

```
void hanoi(int n, char source, char intermediate, char destination) {
    if (n == 1) {
        move disk from source to destination
    } else {
        hanoi(n-1, source, destination, intermediate)
        move disk from source to destination
        hanoi(n-1, intermediate, source, destination)
    }
}
