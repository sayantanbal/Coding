---

### **3. Stack & Queue**  

**(i) Definition, operations with algorithms- push, pop, return top elements without removing**  
- **Stack**: A linear data structure following the LIFO (Last In, First Out) principle.  
  - **Push**: Adds an element to the top of the stack.  
  - **Pop**: Removes the top element.  
  - **Peek**: Returns the top element without removing it.  

  **Algorithm for Push**:  
  ```
  Push(stack, element):
    if stack is full:
      throw OverflowError
    else:
      stack[top] = element
      top = top + 1
  ```

  **Algorithm for Pop**:  
  ```
  Pop(stack):
    if stack is empty:
      throw UnderflowError
    else:
      top = top - 1
      return stack[top]
  ```

**Queue**: A linear data structure following the FIFO (First In, First Out) principle.  
  - **Enqueue**: Adds an element to the rear.  
  - **Dequeue**: Removes an element from the front.  

---

**(ii) Prefix, infix, and postfix expression. Why is postfix notation used?**  
- **Prefix**: Operator appears before operands, e.g., \(+AB\).  
- **Infix**: Operator appears between operands, e.g., \(A+B\).  
- **Postfix**: Operator appears after operands, e.g., \(AB+\).  

- **Why Postfix is Used**:  
  1. Simplifies expression evaluation as no parentheses are required.  
  2. Suitable for stack-based evaluation.  

---

**(iii) Write an algorithm to check if parentheses are valid.**  
**Algorithm**:  
```
IsValidParentheses(expression):
  Initialize an empty stack.
  For each character in expression:
    If character is an opening parenthesis:
      Push it onto the stack.
    Else if character is a closing parenthesis:
      If stack is empty or top does not match:
        Return False.
      Else:
        Pop the stack.
  If stack is empty:
    Return True.
  Else:
    Return False.
```

---

**(iv) Explain the LIFO principle and provide two examples where it is practically useful.**  
- **LIFO Principle**: The last element added to the stack is the first to be removed.  
- **Examples**:  
  1. Undo functionality in text editors.  
  2. Function call stack in programming.  

---

**(v) Which data structure would you recommend for implementing an unrestricted FIFO queue? Justify your choice.**  
- **Recommendation**: Linked list.  
  - **Justification**: Efficient for dynamic sizing and allows \(O(1)\) insertion and deletion from the front and rear.  

---

**(vi) What is a deque (double-ended queue), and how is it different from a standard queue?**  
- **Deque**: A double-ended queue allows insertion and deletion from both ends.  
- **Difference**: A standard queue supports operations only at one end (enqueue at rear, dequeue at front).  

---

**(vii) Consider adding the elements 51, 50, 55, 53, and 52 to a queue. What would be the sequence of elements removed from the queue?**  
- **Sequence removed**: 51, 50, 55, 53, 52 (FIFO order).  

---

**(viii) Define stack overflow and describe a scenario in which it might occur.**  
- **Stack Overflow**: Happens when the stack exceeds its memory limit.  
- **Scenario**: Infinite recursion in a function without a proper base case.  

---

**(ix) Explain the working of a circular queue and its advantages over a linear queue.**  
- **Working**: The rear wraps around to the front when it reaches the end, allowing continuous use of all slots.  
- **Advantages**:  
  1. Efficient memory utilization.  
  2. No need for element shifting during operations.  

---

**(x) How can a stack be used to evaluate a postfix expression? Provide the steps involved.**  
**Steps**:  
1. Traverse the expression.  
2. Push operands onto the stack.  
3. For operators, pop the top two operands, perform the operation, and push the result back.  
4. The final value on the stack is the result.  

---

**(xi) Outline a strategy for implementing multiple stacks within a single array. What challenges might arise?**  
**Strategy**: Divide the array into sections for each stack, with separate top pointers.  
**Challenges**:  
1. Inefficient space usage if stacks grow unevenly.  
2. Overlapping stack boundaries in dynamic sizing.  

---

**(xii) Write an algorithm to convert an infix expression into a postfix expression using a stack.**  
**Algorithm**:  
```
InfixToPostfix(expression):
  Initialize an empty stack and an output list.
  For each token in expression:
    If token is an operand:
      Append it to output.
    Else if token is an operator:
      While stack is not empty and precedence of token <= precedence of top:
        Append stack top to output.
        Pop stack.
      Push token onto stack.
    Else if token is '(':
      Push onto stack.
    Else if token is ')':
      While stack top is not '(':
        Append stack top to output.
        Pop stack.
      Pop '('.
  While stack is not empty:
    Append stack top to output.
    Pop stack.
  Return output.
```

---

**(xiii) Discuss the advantages of using circular queues over linear queues. Provide a real-life example where a circular queue is more suitable.**  
- **Advantages**: Efficient memory usage and avoidance of shifting elements.  
- **Example**: Printer task scheduling in an operating system.  

---

**(xiv) Queue: Definition, Operations of linear queue, circular queue, and double-ended queue with algorithm. Explain why we need a circular queue.**  
- **Definition**: A queue is a FIFO data structure.  
- **Linear Queue**: Insert at rear, delete at front.  
- **Circular Queue**: Rear wraps to front to reuse memory.  
- **Double-Ended Queue**: Insert and delete from both ends.  
- **Why Circular Queue?**: Avoids memory wastage and the need for shifting elements.  

---

 ### **4. Linked List**

**(i) Compare memory allocation in linked lists with that in arrays. Highlight the differences.**

| **Aspect**         | **Linked List**                                      | **Array**                                        |
|---------------------|-----------------------------------------------------|-------------------------------------------------|
| **Memory Allocation** | Dynamic, allocated during runtime for each node.   | Static or dynamic, allocated as a contiguous block. |
| **Size Flexibility** | Can grow or shrink dynamically without resizing.    | Fixed size, or resizing requires reallocation.   |
| **Access Time**     | Sequential access, \(O(n)\) for random elements.    | Random access, \(O(1)\) for indexed elements.    |
| **Memory Usage**    | Extra space for pointers in each node.              | Compact, no extra memory for pointers.          |

---

**(ii) What are the advantages of using linked lists over arrays? Provide examples.**

1. **Dynamic Sizing**: No need to know size in advance.  
   - Example: Implementing dynamic data structures like stacks and queues.  
2. **Efficient Insertions/Deletions**: No need for shifting elements, \(O(1)\) if the pointer is known.  
   - Example: Managing real-time tasks in OS scheduling.  
3. **Memory Utilization**: Does not require contiguous memory.  

---

**(iii) Differentiate between singly linked lists and doubly linked lists.**

| **Aspect**            | **Singly Linked List**                      | **Doubly Linked List**                      |
|------------------------|---------------------------------------------|---------------------------------------------|
| **Pointers per Node**  | 1 (points to the next node).                | 2 (points to both next and previous nodes). |
| **Traversal**          | Only forward traversal is possible.         | Supports forward and backward traversal.    |
| **Memory Usage**       | Requires less memory for pointers.          | Requires more memory for additional pointer.|
| **Complexity of Operations** | Simpler to implement.                  | More flexible but complex.                  |

---

**(iv) Write a function to reverse a singly linked list. Explain the logic used.**

**Logic**: Reverse the direction of pointers in the list.  
**Algorithm**:  
1. Initialize `prev = NULL`, `curr = head`, `next = NULL`.  
2. While `curr` is not NULL:  
   - Save the next node: `next = curr->next`.  
   - Reverse the pointer: `curr->next = prev`.  
   - Move to the next node: `prev = curr`, `curr = next`.  
3. Set `head = prev`.  

**Example**:  
Input: \(1 \to 2 \to 3 \to NULL\)  
Output: \(3 \to 2 \to 1 \to NULL\)  

---

**(v) Define circular linked lists. Mention one practical use case where they are preferred.**

- **Definition**: In a circular linked list, the last node points to the first node, forming a circle.  
- **Use Case**: Used in round-robin CPU scheduling for continuous task execution.  

---

**(vi) Write an algorithm to delete a node from the middle, beginning, and specific position of a singly linked list. Illustrate the steps with an example.**

**Algorithm**:  
- **Delete at Beginning**:  
  ```
  DeleteBeginning(head):
    if head is NULL:
      return
    temp = head
    head = head->next
    Free(temp)
  ```  
- **Delete at Middle**:  
  ```
  DeleteMiddle(head, position):
    if position == 1:
      Call DeleteBeginning
    Traverse to (position-1) node
    Remove the target node and adjust pointers
  ```
- **Delete at Specific Position**: Same as deleting in the middle but tailored for any position.  

**Example**: \(1 \to 2 \to 3 \to 4\), delete at position 2 → Result: \(1 \to 3 \to 4\).  

---

**(vii) Write an algorithm to insert a node at the middle, beginning, and specific position of a singly linked list. Illustrate the steps with an example.**

**Algorithm**:  
- **Insert at Beginning**:  
  ```
  InsertBeginning(head, value):
    Create newNode
    newNode->next = head
    head = newNode
  ```  
- **Insert at Middle**:  
  ```
  InsertMiddle(head, value, position):
    Traverse to (position-1) node
    Create newNode
    newNode->next = current->next
    current->next = newNode
  ```  

**Example**: Insert 5 at position 2 in \(1 \to 3\): Result: \(1 \to 5 \to 3\).  

---

**(viii) Discuss the applications of doubly linked lists. Provide an algorithm to insert a node at the end, beginning, and specific position of a doubly linked list.**

**Applications**:  
1. Navigating forward and backward in browsers or multimedia players.  
2. Implementing complex data structures like deque and Fibonacci heap.  

**Algorithm (Insert at End)**:  
```
InsertEnd(head, value):
  Create newNode
  Traverse to the last node
  last->next = newNode
  newNode->prev = last
```  

---

**(ix) Provide an algorithm to delete a node from the end, beginning, and specific position of a doubly linked list.**

**Algorithm (Delete at End)**:  
```
DeleteEnd(head):
  Traverse to the last node
  Remove links to the last node
  Free the last node
```  

---

**(x) Explain the concept of circular linked lists. Write an algorithm to traverse a circular linked list and count its nodes.**

- **Concept**: Circular linked lists form a continuous loop by pointing the last node back to the first node.  
- **Algorithm (Traverse and Count)**:  
  ```
  CountNodes(head):
    if head is NULL:
      return 0
    Initialize count = 1
    Start from head and traverse until you return to head
    Increment count for each node
    Return count
  ```  

---

Here are the answers to the remaining parts of Section 4 from your document:

---

### (xi) Provide an algorithm “Insert Node” for a singly linked list and doubly linked list of integers to ensure sorted order (ascending and descending). Is it possible to apply BST logic in this sorted linked list? Explain.

**Algorithm for Sorted Insertion**:
1. **Singly Linked List**:
   - Create a new node.
   - Traverse the list to find the appropriate position where the value of the node is greater (for ascending) or smaller (for descending).
   - Update the `next` pointer of the new node and the previous node to insert it.

2. **Doubly Linked List**:
   - Similar logic as above, but update both `next` and `prev` pointers of adjacent nodes.

**BST Logic in Sorted Linked List**:
- It is not feasible to apply BST logic directly to a sorted linked list because a BST requires random access to nodes for efficient insertion and search, while linked lists only allow sequential access.

---

### (xii) Provide an algorithm to insert a node at the end, beginning, and specific position of a circular doubly linked list and circular singly linked list.

**Algorithm**:
1. **Circular Singly Linked List**:
   - **Insert at Beginning**:
     - Create a new node and set its `next` pointer to the current head.
     - Traverse to the last node and update its `next` pointer to the new node.
     - Update the head to the new node.
   - **Insert at End**:
     - Traverse to the last node.
     - Update its `next` pointer to the new node.
     - Set the `next` pointer of the new node to the head.
   - **Insert at Specific Position**:
     - Traverse to the node at `(position - 1)`.
     - Update pointers to insert the new node.

2. **Circular Doubly Linked List**:
   - **Insert at Beginning**:
     - Create a new node.
     - Update the `prev` and `next` pointers of the head and the new node.
     - Update the `next` pointer of the tail to the new node.
     - Update the head to the new node.
   - **Insert at End**:
     - Traverse to the last node.
     - Update the `next` and `prev` pointers to insert the new node.
   - **Insert at Specific Position**:
     - Traverse to the `(position - 1)`th node.
     - Update the `prev` and `next` pointers of adjacent nodes to insert the new node.

---

### (xiii) Provide an algorithm to delete a node from the end, beginning, and specific position of a circular doubly linked list and circular singly linked list.

**Algorithm**:
1. **Circular Singly Linked List**:
   - **Delete from Beginning**:
     - Update the head to `head.next`.
     - Traverse to the last node and update its `next` pointer to the new head.
   - **Delete from End**:
     - Traverse to the second last node.
     - Update its `next` pointer to the head.
   - **Delete from Specific Position**:
     - Traverse to the `(position - 1)`th node.
     - Update its `next` pointer to skip the node being deleted.

2. **Circular Doubly Linked List**:
   - **Delete from Beginning**:
     - Update the `next` pointer of the tail and the `prev` pointer of the new head.
     - Update the head to `head.next`.
   - **Delete from End**:
     - Traverse to the second last node.
     - Update its `next` pointer to the head and the `prev` pointer of the head to the second last node.
   - **Delete from Specific Position**:
     - Traverse to the node at the specified position.
     - Update the `prev` and `next` pointers of adjacent nodes to bypass the node.

---

### (xiv) Provide an algorithm for polynomial representation using a linked list.

**Algorithm**:
1. **Node Structure**:
   - Each node contains three fields: coefficient, exponent, and a pointer to the next node.

2. **Steps to Create and Insert**:
   - Initialize the head of the list to `NULL`.
   - For each term in the polynomial:
     - Create a new node with the coefficient and exponent.
     - Traverse the list to maintain terms in descending order of exponent.
     - Insert the new node at the appropriate position.
   - Return the head of the list.

3. **Example Representation**:
   - Polynomial \( 4x^3 + 3x^2 + 2 \) is stored as:
     - Node 1: (4, 3)
     - Node 2: (3, 2)
     - Node 3: (2, 0)

---

The remaining sections of your document (Section 5 onwards) focus on **Trees**, **Graphs**, **Arrays**, and **Searching & Sorting**. Below are detailed answers to those sections:

---

## **Section 5: Tree**

### (i) What is the height of a tree? How does it relate to the levels of the tree? Define internal node, leaf node, path, degree of a node, and degree of a tree. What is an expression tree?

- **Height of a Tree**: 
  The height of a tree is the number of edges on the longest path from the root to a leaf node. If a tree has only one node, its height is 0.

- **Relation to Levels**:
  Levels are counted from the root (level 0). The height of the tree equals the number of levels minus one.

- **Definitions**:
  - **Internal Node**: A node with at least one child.
  - **Leaf Node**: A node with no children.
  - **Path**: A sequence of nodes connected by edges.
  - **Degree of a Node**: The number of children a node has.
  - **Degree of a Tree**: The maximum degree of any node in the tree.

- **Expression Tree**:
  A binary tree used to represent arithmetic expressions. Internal nodes represent operators, and leaf nodes represent operands.

---

### (ii) Explain the significance of in-order traversal in binary search trees.

**Significance**:
In-order traversal visits nodes in ascending order of their values in a Binary Search Tree (BST). This property makes it essential for tasks like sorting, validating a BST, or extracting sorted data from a BST.

---

### (iii) How can the in-order successor of a node in a binary search tree be determined?

**Steps**:
1. If the node has a right child:
   - The in-order successor is the leftmost node in the right subtree.
2. If the node has no right child:
   - Traverse up using parent pointers until you find a node that is the left child of its parent. The parent is the in-order successor.

---

### (iv) What challenges are associated with recursive implementations of BST traversals?

**Challenges**:
1. **Stack Overflow**: Large trees can cause stack overflow due to deep recursion.
2. **Memory Overhead**: Each recursive call uses additional memory for the call stack.
3. **Debugging Complexity**: Recursive functions are harder to debug compared to iterative implementations.

---

### (v) What is an AVL tree? How does it improve upon a standard binary search tree?

**AVL Tree**:
An AVL tree is a self-balancing binary search tree where the height difference (balance factor) between the left and right subtrees of any node is at most 1.

**Improvement**:
AVL trees ensure balanced height, leading to O(log n) time complexity for search, insertion, and deletion operations, unlike unbalanced BSTs that can degrade to O(n).

---

### (vi) Provide the steps for performing a left rotation in an AVL tree.

**Steps**:
1. Let the unbalanced node be `x` and its right child be `y`.
2. Assign `y.left` to `x.right`.
3. Set `x` as the left child of `y`.
4. Update heights of `x` and `y`.
5. Return `y` as the new root.

---

### (vii) When is rebalancing necessary in an AVL tree? Describe the conditions that trigger it.

**Rebalancing**:
Rebalancing is required when the balance factor of any node becomes greater than 1 or less than -1 after insertion or deletion.

**Conditions**:
1. Left-heavy (balance factor > 1): Perform rotations based on the left child.
2. Right-heavy (balance factor < -1): Perform rotations based on the right child.

---

Here are the answers to the remaining questions in **Section 5: Tree**:

---

### (viii) How do AVL trees maintain balance and ensure efficient operations?

**Balance Maintenance**:
- AVL trees maintain a balance factor (difference in heights of left and right subtrees) for every node.
- After every insertion or deletion, the balance factor is checked.
- If the balance factor exceeds 1 or -1, rotations (single or double) are performed to restore balance.

**Efficiency**:
- By keeping the tree balanced, AVL trees ensure that the height of the tree remains \(O(\log n)\), which guarantees efficient operations for search, insertion, and deletion.

---

### (ix) List and explain the types of rotations used to restore balance in an AVL tree.

**Types of Rotations**:
1. **Left Rotation**:
   - Applied when a node becomes right-heavy (balance factor < -1) and the imbalance is caused by the right child’s right subtree.

2. **Right Rotation**:
   - Applied when a node becomes left-heavy (balance factor > 1) and the imbalance is caused by the left child’s left subtree.

3. **Left-Right Rotation**:
   - Applied when a node becomes left-heavy, but the imbalance is caused by the left child’s right subtree.
   - First, perform a left rotation on the left child, followed by a right rotation on the unbalanced node.

4. **Right-Left Rotation**:
   - Applied when a node becomes right-heavy, but the imbalance is caused by the right child’s left subtree.
   - First, perform a right rotation on the right child, followed by a left rotation on the unbalanced node.

---

### (x) Explain the properties of binary search trees (BSTs). Write an algorithm to search, insert, and delete an element in a BST.

**Properties**:
1. The left subtree of a node contains only nodes with keys less than the node’s key.
2. The right subtree of a node contains only nodes with keys greater than the node’s key.
3. Both the left and right subtrees must also be binary search trees.

**Algorithms**:
1. **Search**:
   ```python
   def searchBST(root, key):
       if root is None or root.key == key:
           return root
       if key < root.key:
           return searchBST(root.left, key)
       else:
           return searchBST(root.right, key)
   ```

2. **Insert**:
   ```python
   def insertBST(root, key):
       if root is None:
           return Node(key)
       if key < root.key:
           root.left = insertBST(root.left, key)
       else:
           root.right = insertBST(root.right, key)
       return root
   ```

3. **Delete**:
   ```python
   def deleteBST(root, key):
       if root is None:
           return root
       if key < root.key:
           root.left = deleteBST(root.left, key)
       elif key > root.key:
           root.right = deleteBST(root.right, key)
       else:
           if root.left is None:
               return root.right
           elif root.right is None:
               return root.left
           min_larger_node = findMin(root.right)
           root.key = min_larger_node.key
           root.right = deleteBST(root.right, min_larger_node.key)
       return root
   ```

---

### (xi) Write an algorithm to construct a binary tree from its pre-order and in-order traversals. Explain the process with an example.

**Algorithm**:
1. Identify the root node from the first element of the pre-order traversal.
2. Locate the root node in the in-order traversal to divide it into left and right subtrees.
3. Recursively apply the same process for the left and right subtrees.

**Example**:
Pre-order: [A, B, D, E, C, F]  
In-order: [D, B, E, A, F, C]

**Steps**:
1. Root = A (from pre-order).
2. Split in-order into left ([D, B, E]) and right ([F, C]).
3. Recursively build:
   - Left subtree with pre-order [B, D, E] and in-order [D, B, E].
   - Right subtree with pre-order [C, F] and in-order [F, C].

---

### (xii) Discuss the importance of rotations in AVL trees. Explain the steps for performing a left-right rotation.

**Importance of Rotations**:
- Rotations restore the balance of an AVL tree after insertions or deletions that cause imbalance.
- They ensure the height remains \(O(\log n)\), maintaining efficiency for all operations.

**Steps for Left-Right Rotation**:
1. Perform a **left rotation** on the left child of the unbalanced node.
2. Perform a **right rotation** on the unbalanced node.

**Example**:
Before Rotation:
```
    10
   /
  5
   \
    8
```

- Left rotation on 5:
```
    10
   /
  8
 /
5
```

- Right rotation on 10:
```
    8
   / \
  5  10
```

---

### (xiii) From the following post-order sequence of a BST, construct the visual representation of the tree.  
Post-order sequence: [D, E, B, C, A]

**Steps**:
1. The last element in post-order is the root: A.
2. Split the sequence into left ([D, E, B]) and right ([C]) subtrees.
3. Recursively build:
   - Left subtree with post-order [D, E, B].
   - Right subtree with post-order [C].

**Resulting Tree**:
```
      A
     / \
    B   C
   / \
  D   E
```

---

Let me know if you need further assistance or clarifications!

## **Section 6: Graph**

### (i) Distinguish between Depth First Search (DFS) and Breadth First Search (BFS) in graph traversal.

- **DFS**:
  - Explores as far as possible along a branch before backtracking.
  - Uses a stack (implicit or explicit).
  - Suitable for solving connectivity and pathfinding problems.

- **BFS**:
  - Explores all neighbors at the current depth before moving deeper.
  - Uses a queue.
  - Suitable for finding the shortest path in unweighted graphs.

---

### (ii) How is a graph represented using an adjacency list? Provide an example.

**Representation**:
An adjacency list represents a graph as an array of lists. Each list contains the neighbors of a vertex.

**Example**:
For a graph with edges (1-2), (1-3), and (2-4):
```
1: [2, 3]
2: [1, 4]
3: [1]
4: [2]
```

---

#### (iii) When would you opt for an adjacency matrix instead of an adjacency list for graph representation?

**Use Cases for Adjacency Matrix**:

1. **Dense Graphs**: If the graph has many edges, the adjacency matrix is efficient because it provides  access for edge existence checks.
2. **Memory Availability**: Adjacency matrices require  space, so they are suitable when memory is not a constraint.
3. **Frequent Edge Queries**: When edge existence or weights need to be queried frequently.

---

#### (iv) Write pseudo code for the DFS algorithm.

**DFS Pseudo Code**:

```python
def DFS(graph, start):
    visited = set()  # To keep track of visited nodes
    stack = [start]  # Use a stack for DFS

    while stack:
        node = stack.pop()  # Get the top element
        if node not in visited:
            print(node)  # Process the node
            visited.add(node)
            for neighbor in graph[node]:  # Add unvisited neighbors to the stack
                if neighbor not in visited:
                    stack.append(neighbor)
```

---

#### (v) What are the real-world applications of BFS? Explain with examples such as shortest path finding or web crawling.

**Applications of BFS**:

1. **Shortest Path in Unweighted Graphs**:

   - BFS ensures that the shortest path is found in terms of the number of edges.
   - **Example**: Finding the shortest route in a road network.

2. **Web Crawling**:

   - BFS is used to explore all the links on a webpage, level by level.
   - **Example**: Search engines use BFS to index web pages.

3. **Social Networks**:

   - BFS is used to find the shortest connection path between two users.
   - **Example**: Finding mutual friends or degrees of separation on platforms like Facebook.

4. **Broadcasting in Networks**:

   - BFS helps in spreading information across nodes in a network efficiently.

---

#### (vi) Write pseudo code for Breadth-First Search (BFS).

**BFS Pseudo Code**:

```python
def BFS(graph, start):
    visited = set()  # To keep track of visited nodes
    queue = [start]  # Use a queue for BFS

    while queue:
        node = queue.pop(0)  # Dequeue the front element
        if node not in visited:
            print(node)  # Process the node
            visited.add(node)
            for neighbor in graph[node]:  # Add unvisited neighbors to the queue
                if neighbor not in visited:
                    queue.append(neighbor)
```

---

#### (vii) Tell me the reason where you will choose an adjacency matrix representation to store a graph in a computer program and when you will go for an adjacency list representation.

**Adjacency Matrix**:

1. When the graph is dense (many edges).
2. When edge existence needs to be checked frequently.
3. When working with weighted graphs where edge weights are queried often.

**Adjacency List**:

1. When the graph is sparse (few edges).
2. When memory usage is a concern.
3. When traversing all neighbors of a node frequently.

---

#### (viii) Under what conditions is an adjacency matrix a better choice than an adjacency list for graph representation?

**Conditions Favoring Adjacency Matrix**:

1. **Dense Graphs**: A high number of edges relative to vertices.
2. **Frequent Edge Queries**: Need for  edge existence checks.
3. **Static Graphs**: The graph structure does not change often, as adding/removing edges in a matrix is costly.
4. **Small Graphs**: Memory overhead is not significant for small graphs.

---


## **Section 7: Array**

### (i) Calculate the memory address for a 1D array.

**Formula**:
For an array `A` with base address `BA`, element size `s`, and index `i`:
```
Address = BA + (i * s)
```

---

### (ii) Calculate the memory address for a 2D matrix for row-major and column-major order.

- **Row-Major**:
  ```
  Address = BA + [(i * n) + j] * s
  ```
  Where `i` is the row index, `j` is the column index, `n` is the number of columns, and `s` is the size of an element.

- **Column-Major**:
  ```
  Address = BA + [(j * m) + i] * s
  ```
  Where `m` is the number of rows.

---

#### (iii) Operations of 1D Array

1. **Insertion**:
   - Adding a new element to the array.
   - **Algorithm**:
     1. Identify the index where the element needs to be inserted.
     2. Shift all elements to the right from the index to create space.
     3. Place the new element at the index.
   - **Time Complexity**: \(O(n)\) in the worst case (if insertion is at the beginning).

   **C Code**:
   ```c
   void insertElement(int arr[], int *size, int index, int element) {
       for (int i = *size; i > index; i--) {
           arr[i] = arr[i - 1];
       }
       arr[index] = element;
       (*size)++;
   }
   ```

2. **Deletion**:
   - Removing an element from the array.
   - **Algorithm**:
     1. Identify the index of the element to be deleted.
     2. Shift all elements to the left from the index to fill the gap.
   - **Time Complexity**: \(O(n)\) in the worst case (if deletion is at the beginning).

   **C Code**:
   ```c
   void deleteElement(int arr[], int *size, int index) {
       for (int i = index; i < *size - 1; i++) {
           arr[i] = arr[i + 1];
       }
       (*size)--;
   }
   ```

3. **Traversal**:
   - Accessing each element of the array sequentially.
   - **Algorithm**:
     1. Start from the first element.
     2. Access and process each element until the end of the array.
   - **Time Complexity**: \(O(n)\).

   **C Code**:
   ```c
   void traverseArray(int arr[], int size) {
       for (int i = 0; i < size; i++) {
           printf("%d ", arr[i]);
       }
       printf("\n");
   }
   ```

4. **Search**:
   - Finding an element in the array.
   - **Types**:
     - **Linear Search**: Traverse the array to find the element (\(O(n)\)).
     - **Binary Search**: Applicable only for sorted arrays (\(O(\log n)\)).

   **C Code for Linear Search**:
   ```c
   int linearSearch(int arr[], int size, int element) {
       for (int i = 0; i < size; i++) {
           if (arr[i] == element) {
               return i;
           }
       }
       return -1; // Element not found
   }
   ```

   **C Code for Binary Search**:
   ```c
   int binarySearch(int arr[], int size, int element) {
       int low = 0, high = size - 1;
       while (low <= high) {
           int mid = (low + high) / 2;
           if (arr[mid] == element) {
               return mid;
           } else if (arr[mid] < element) {
               low = mid + 1;
           } else {
               high = mid - 1;
           }
       }
       return -1; // Element not found
   }
   ```

5. **Update**:
   - Modifying the value of an element at a specific index.
   - **Algorithm**:
     1. Access the index directly.
     2. Update the value.
   - **Time Complexity**: \(O(1)\).

   **C Code**:
   ```c
   void updateElement(int arr[], int index, int newValue) {
       arr[index] = newValue;
   }
   ```



## **Section 8: Searching & Sorting**

### (i) Write pseudo code for Selection Sort and sort the array [8, 3, 1, 6, 2].

**Pseudo Code**:
```python
for i = 0 to n-1:
    min_index = i
    for j = i+1 to n-1:
        if array[j] < array[min_index]:
            min_index = j
    swap(array[i], array[min_index])
```

**Sorted Array**: [1, 2, 3, 6, 8]

---

