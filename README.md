# my solutions for leetcode problems

| # | title | solution | basic idea |
|---|---|---|---|
| 1 | Two Sum Problem | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1_two_sum.cpp)| use hash table |
| 2 | Add Two Numbers | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2_add_two_numbers.cpp) | go from lower to higher consider nullptrs | 
| 35 | Search Insert Position | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/35_search_insert_position.cpp) | binary search |
| 49 | Group Anagrams | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/49_group_anagrams.cpp) | use hashmap. add words' sorted version to map to find other words anagram or not |
| 67 | Add Binary | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/67_add_binary.cpp) | go from rightmost to leftmost |
| 69 | Sqrt(x) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/69_sqrt.cpp) | binary search O(logn) |
| 103 | Binary Tree Zigzag Level Order Traversal | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/103_binary_tree_zigzag_level_order_traversal.cpp) | level order traversal. if level is odd reverse the order. |
| 104 | Maximum Depth of Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/104_maximum_depth_of_binary_tree.cpp) | recursive |
| 217 | Contains Duplicate | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/217_contains_duplicate.cpp) | for every element check is it in set |
| 238 | Product Of Array Except Self | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/238_product_of_array_except_self.cpp) | compute leftProduct and rightProduct for every element in arr O(n). <br />ans[i] = leftProcut[i]*rightProduct[i] O(n) |
| 242 | Valid Anagram | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/242_valid_anagram.cpp) | make char freq arr. for chars in s increase freq 1 for chars in t decrease freq 1. <br />Check freq arr all elements 0 or not |
| 347 | Top K Frequent Elements | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/347_top_k_frequent_elements.cpp) | add elements to map with frequency O(n) <br /> add map elements to vector then sort. O(nlogn) |
| 783 | Minimum Distance Between BST Nodes (same as 530) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/783_minimum_distance_between_bts_nodes.cpp) | inorder traversal. keep prev node's val. O(n)|
| 989 | Add to Array-Form of Integer | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/989_add_to_array-form_of_integer.cpp) | add from rightmost digit to leftmost |
| 1512 | Number of Good Pairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1512_number_of_good_pairs.cpp) | check every pair |
| 1524 | Number of Sub-arrays With Odd Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1524_number_of_subarrays_with_odd_sum.cpp) | check start and end odd |
| 2236 | Root Equals Sum of Children | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2236_root_equals_sum_of_children.cpp) | sum left and right child. check is it equal to root |
|---|---|---|---|
