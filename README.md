# Binary Tree - Data Structure and Algorithms in C

## Learning Objectives:
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## What is a binary tree?
A tree is a non-linear abstract data type with a hierarchy-based structure. It consists of nodes (where the data is stored) that are connected via links. The tree data structure stems from a single node called a root node and has subtrees connected to the root.

![tree_data_structure](https://www.tutorialspoint.com/data_structures_algorithms/images/tree_data_structure.jpg)

## What is the difference between a binary tree and a Binary Search Tree?

### Binary Trees
Binary Trees are general trees in which the root node can only hold up to maximum 2 subtrees: left subtree and right subtree. Based on the number of children, binary trees are divided into three types.

#### Full Binary Tree

A full binary tree is a binary tree type where every node has either 0 or 2 child nodes.

#### Complete Binary Tree

A complete binary tree is a binary tree type where all the leaf nodes must be on the same level. However, root and internal nodes in a complete binary tree can either have 0, 1 or 2 child nodes.

#### Perfect Binary Tree

A perfect binary tree is a binary tree type where all the leaf nodes are on the same level and every node except leaf nodes have 2 children.

### Binary Search Trees

Binary Search Trees possess all the properties of Binary Trees including some extra properties of their own, based on some constraints, making them more efficient than binary trees.

The data in the Binary Search Trees (BST) is always stored in such a way that the values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node, i.e. left subtree < root node ≤ right subtree.

![binary_search_tress](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_serach_tree.jpg)

## What is the possible gain in terms of time complexity compared to linked lists?

Linked lists has the following time complexity:
| **Operations** | **BigO** |
|----------------|----------|
| `Search` | O(n) |
| `Insert` | O(1) |
| `Remove` | O(n) |

Binary Search Trees has benefits in terms of time complexity:
| **Operations** | **BigO** |
|----------------|----------|
| `Search` | O(log n) |
| `Insert` | O(log n) |
| `Remove` | O(log n) |

**We will explore that in future topics**

## What are the depth, the height, the size of a binary tree?

The height of a binary tree is defined by the total number of edges from the root node to the furthest leaf node. At the same time, the height is also equivalent to the depth of that node, as depth of a node in a binary tree is the total number of edges from the root node to the target node.

![tree_data_structure](https://www.tutorialspoint.com/data_structures_algorithms/images/tree_data_structure.jpg)

The image above shows that the binary tree has a height of 3.

## What are the different traversal methods to go through a binary tree

### In-order Traversal

In this traversal method, the left subtree is visited first, then the root and later the right sub-tree. We should always remember that every node may represent a subtree itself.

If a binary tree is traversed in-order, the output will produce sorted key values in an ascending order.

![In-order traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/In-order_Traversal.jpg)

We start from A, and following in-order traversal, we move to its left subtree B.B is also traversed in-order. The process goes on until all the nodes are visited. The output of in-order traversal of this tree will be −

D → B → E → A → F → C → G

### Pre-order Traversal

In this traversal method, the root node is visited first, then the left subtree and finally the right subtree.

![pre-order-traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/Pre-order_Traversal.jpg)

We start from A, and following pre-order traversal, we first visit A itself and then move to its left subtree B. B is also traversed pre-order. The process goes on until all the nodes are visited. The output of pre-order traversal of this tree will be −

A → B → D → E → C → F → G

### Post-order Traversal

In this traversal method, the root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.

![post-order-traversal](https://www.tutorialspoint.com/data_structures_algorithms/images/Post-order_Traversal.jpg)

We start from A, and following pre-order traversal, we first visit the left subtree B. B is also traversed post-order. The process goes on until all the nodes are visited. The output of post-order traversal of this tree will be −

D → E → B → F → G → C → A

## What is a complete, a full, a perfect, a balanced binary tree?

Consider a Binary Search Tree with ‘m’ as the height of the left subtree and ‘n’ as the height of the right subtree. If the value of (m-n) is equal to 0,1 or -1, the tree is said to be a Balanced Binary Search Tree.

The trees are designed in a way that they self-balance once the height difference exceeds 1. Binary Search Trees use rotations as self-balancing algorithms. There are four different types of rotations: Left Left, Right Right, Left Right, Right Left.

![binary_search_tress](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_serach_tree.jpg)

