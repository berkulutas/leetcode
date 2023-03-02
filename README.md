# my solutions for leetcode problems

| # | title | solution | basic idea |
|---|---|---|---|
| 1 | Two Sum Problem | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1_two_sum.cpp)| use hash table |
| 2 | Add Two Numbers | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2_add_two_numbers.cpp) | go from lower to higher consider nullptrs | 
| 14 | Longest Common Prefix | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/14_longest_common_prefix.cpp) | find minimum length for a string. start from to first char that string and compare with others if char is common add it to result. when found not common char return result. |
| 35 | Search Insert Position | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/35_search_insert_position.cpp) | binary search |
| 36 | Valid Sudoku | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/36_valid_sudoku.cpp) | keep sets for columns, rows and 3x3 grids. For every element in 9x9 grid put it corresponding colum, row and grid position. <br /> If element already exists one of the sets grid is not valid. O(81) = O(1) |
| 49 | Group Anagrams | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/49_group_anagrams.cpp) | use hashmap. add words' sorted version to map to find other words anagram or not |
| 67 | Add Binary | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/67_add_binary.cpp) | go from rightmost to leftmost |
| 69 | Sqrt(x) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/69_sqrt.cpp) | binary search O(logn) |
| 70 | Climbing Stairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/70_climbing_stairs.cpp) | DP Time: O(n), Space O(1). |
| 72 | Edit Distance | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/72_edit_distance.cpp) | DP. M = word1.len(), N = word2.len(). Time O(MxN) Space O(MxN) |
| 103 | Binary Tree Zigzag Level Order Traversal | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/103_binary_tree_zigzag_level_order_traversal.cpp) | level order traversal. if level is odd reverse the order. |
| 104 | Maximum Depth of Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/104_maximum_depth_of_binary_tree.cpp) | recursive |
| 121 | Best Time To Buy And Sell Stock | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/121_best_time_to_buy_and_sell_stock.cpp) | while passing array consider minimum element so far and max profit. Time: O(n), Space: O(1).  |
| 125 | Valid Palindrome | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/125_valid_palindrome.cpp) | two pointers. O(n) |
| 128 | Longest Consecutive Sequence | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/128_longest_consecutive_sequence.cpp) | add all numbers to unordered set O(n). <br />For all numbers if it is a start increase currSeq until no more adjacent found. |
| 136 | Single Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/136_single_number.cpp) | a^a=0. take xors of all elements to find unique one. Bit manupilation O(n) |
| 167 | Two Sum Ii-Inpur Array Is Sorted | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/167_two_sum_ii-inpur_array_is_sorted.cpp) | initalize two pointers to start and end while sum < target l++ , sum > target r--. Time O(n) Space O(1). It can be optimized with Binary Search. |
| 168 | Excel Sheet Column Title | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/168_excel_sheet_column_title.cpp) | "ABC" = 26^2\*1 + 26\*2 +3. columnNumber%26 gives last character. Then columnNumber/=26. Consider columnNumber%26 == 0. which means last char 'Z' but 'Z' denoted with 26. |
| 171 | Excel Sheet Column Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/171_excel_sheet_column_number.cpp) | Think of it like a 26 number system. When go next digit multiply current number with 26. consider 35 in 10 number system 35 = 3*10 + 5.Time O(n) Space O(1). |
| 217 | Contains Duplicate | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/217_contains_duplicate.cpp) | for every element check is it in set |
| 238 | Product Of Array Except Self | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/238_product_of_array_except_self.cpp) | needs two pass O(n). First pass go left to right multiply output[i] with leftProducts. <br />Second pass go right to left multiply output[i] with rightProducts. <br /> Time Complexity: O(n) Space Complexity: O(1)|
| 242 | Valid Anagram | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/242_valid_anagram.cpp) | make char freq arr. for chars in s increase freq 1 for chars in t decrease freq 1. <br />Check freq arr all elements 0 or not |
| 347 | Top K Frequent Elements | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/347_top_k_frequent_elements.cpp) | add elements to map with frequency O(n) <br /> add map elements to vector then sort. O(nlogn) |
| 427 | Construct Quad Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/427_construct_quad_tree.cpp) | recursivevly create subtrees |
| 443 | String Compression | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/443_string_compression.cpp) | Use two pointers. One pointer for modify arr and other pointer for count number of occurence for a char. Time O(n) Space O(1) where n is length of input array. |
| 502 | IPO | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/502_ipo.cpp) | greedy problem use priority queue(max heap). Add projects which do not exceed the current capital(w) to pq. Pop the most profitable project(pq.top()), update w, reduce k. And do same while k > 0|
| 530 | Minimum Absolute Difference In BST (same as 783)| [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/530_minimum_absolute_difference_in_BST.cpp) | inorder traversal. keep prev node's val. O(n) |
| 540 | Single Element In A Sorted Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/540_single_element_in_a_sorted_array.cpp) | binary search. O(logn) |
| 606 | Construct String From Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/606_construct_string_from_binary_tree.cpp) | preorder traversal. Time O(n) Space O(h). Where h is the height of binary tree. |
| 652 | Find Duplicate Subtrees | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/652_find_duplicate_subtrees.cpp) | todo |
| 746 | Min Cost Climbing Stairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/746_min_cost_climbing_stairs.cpp) | DP. Time O(n). Space O(1) |
| 783 | Minimum Distance Between BST Nodes (same as 530) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/783_minimum_distance_between_bts_nodes.cpp) | inorder traversal. keep prev node's val. O(n)|
| 989 | Add to Array-Form of Integer | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/989_add_to_array-form_of_integer.cpp) | add from rightmost digit to leftmost |
| 1011 | Capacity To Ship Packages Within D Days | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1011_capacity_to_ship_packages_within_d_days.cpp) | (monotonic) binary search. find the minimum weight capacity that can transport all the packages in the given number of days by checking if a certain capacity is possible or not. |
| 1512 | Number of Good Pairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1512_number_of_good_pairs.cpp) | check every pair |
| 1524 | Number of Sub-arrays With Odd Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1524_number_of_subarrays_with_odd_sum.cpp) | check start and end odd |
| 1675 | Minimize Deviation In Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1675_minimize_deviation_in_array.cpp) | double all odd numbers and storing them in a max heap, and then repeatedly divide the maximum element in the heap by 2 and update the minimum element and the deviation until the maximum element becomes odd. O(nlogn)|
| 2236 | Root Equals Sum of Children | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2236_root_equals_sum_of_children.cpp) | sum left and right child. check is it equal to root |
|---|---|---|---|
