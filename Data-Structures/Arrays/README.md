# Arrays 

    1. Sequential collection of elements of same data type stored in a continuous memory location
    2. Equivalent to fleet of Stairs
    3. Location of the next index depends on the data type of the elements.
    4. Generally it is 0-based indexing (First element index is 0).
    5. Idea of an array is to represent many instances in one variable.

## Advantages:

    1. Random Access to elements.
    2. Have better [Cache locality](https://en.wikipedia.org/wiki/Locality_of_reference)
    3. Helps to maintain Large data by representing multiple data items of same type with same name.
    4. 2 Dimensional arrays - Matrices play a key role in many computations and storing data. 

## Disadvantages:

    1. Array size must be known earlier and also can't be changed because of Static Memory Allocation.
    2. High chances for Memory wastage or Insufficient Memory.
    3. Can't store elements of different data types.
    4. Inserting an element requires moving each element from its original location to the next memory locations within Array.
    5. Deleting an item from an array involves copying every preceding element to fill up the gap left behind by the deleted element.

## Applications:

    1. Used for CPU Scheduling.
    2. Basic data type that can be used to implement Stack, Queue, Linked List etc.,


## Complexity:
<br>

### Insertion at end : O(1)

### Insertion at a given index : O(n)

<br>

### Deletion at end : O(1)

### Deletion at a given index : O(n)

<br>

### Search for Sorted Array : O(logn)

### Search for an Unsorted Array : O(n)
