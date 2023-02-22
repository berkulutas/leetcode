# my solutions for leetcode problems

| # | title | solution | basic idea |
|---|---|---|---|
| 1 | Two Sum Problem | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1_two_sum.cpp)| use hash table |
| 2 | Add Two Numbers | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2_add_two_numbers.cpp) | go from lower to higher consider nullptrs | 
| 35 | Search Insert Position | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/35_search_insert_position.cpp) | binary search |
| 36 | Valid Sudoku | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/36_valid_sudoku.cpp) | keep sets for columns, rows and 3x3 grids. For every element in 9x9 grid put it corresponding colum, row and grid position. <br /> If element already exists one of the sets grid is not valid. O(81) = O(1) |
| 49 | Group Anagrams | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/49_group_anagrams.cpp) | use hashmap. add words' sorted version to map to find other words anagram or not |
| 67 | Add Binary | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/67_add_binary.cpp) | go from rightmost to leftmost |
| 69 | Sqrt(x) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/69_sqrt.cpp) | binary search O(logn) |
| 103 | Binary Tree Zigzag Level Order Traversal | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/103_binary_tree_zigzag_level_order_traversal.cpp) | level order traversal. if level is odd reverse the order. |
| 104 | Maximum Depth of Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/104_maximum_depth_of_binary_tree.cpp) | recursive |
| 128 | Longest Consecutive Sequence | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/128_longest_consecutive_sequence.cpp) | add all numbers to unordered set O(n). <br />For all numbers if it is a start increase currSeq until no more adjacent found. |
| 136 | Single Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/136_single_number.cpp) | a^a=0. take xors of all elements to find unique one. Bit manupilation O(n) |
| 217 | Contains Duplicate | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/217_contains_duplicate.cpp) | for every element check is it in set |
| 238 | Product Of Array Except Self | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/238_product_of_array_except_self.cpp) | needs two pass O(n). First pass go left to right multiply output[i] with leftProducts. <br />Second pass go right to left multiply output[i] with rightProducts. <br /> Time Complexity: O(n) Space Complexity: O(1)|
| 242 | Valid Anagram | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/242_valid_anagram.cpp) | make char freq arr. for chars in s increase freq 1 for chars in t decrease freq 1. <br />Check freq arr all elements 0 or not |
| 347 | Top K Frequent Elements | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/347_top_k_frequent_elements.cpp) | add elements to map with frequency O(n) <br /> add map elements to vector then sort. O(nlogn) |
| 530 | Minimum Absolute Difference In BST (same as 783)| [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/530_minimum_absolute_difference_in_BST.cpp) | inorder traversal. keep prev node's val. O(n) |
| 540 | Single Element In A Sorted Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/540_single_element_in_a_sorted_array.cpp) | binary search. O(logn) |
| 783 | Minimum Distance Between BST Nodes (same as 530) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/783_minimum_distance_between_bts_nodes.cpp) | inorder traversal. keep prev node's val. O(n)|
| 989 | Add to Array-Form of Integer | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/989_add_to_array-form_of_integer.cpp) | add from rightmost digit to leftmost |
| 1011 | Capacity To Ship Packages Within D Days | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1011_capacity_to_ship_packages_within_d_days.cpp) | (monotonic) binary search. find the minimum weight capacity that can transport all the packages in the given number of days<br /> by checking if a certain capacity is possible or not. |
| 1512 | Number of Good Pairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1512_number_of_good_pairs.cpp) | check every pair |
| 1524 | Number of Sub-arrays With Odd Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1524_number_of_subarrays_with_odd_sum.cpp) | check start and end odd |
| 2236 | Root Equals Sum of Children | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2236_root_equals_sum_of_children.cpp) | sum left and right child. check is it equal to root |
|---|---|---|---|
