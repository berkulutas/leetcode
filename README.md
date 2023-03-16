# my solutions for leetcode problems

| # | title | solution | basic idea |
|---|---|---|---|
| 1 | Two Sum Problem | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1_two_sum.cpp)| use hash table |
| 2 | Add Two Numbers | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2_add_two_numbers.cpp) | go from lower to higher consider nullptrs | 
| 9 | Palindrome Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/9_palindrome_number.cpp) | revert number then return reverted == num. Time O(log(n)) Space O(1). It can be optimized with revert number to its half. |
| 11 | Container With Most Water | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/11_container_with_most_water.cpp) | Two pointers. Set l=0 r=size-1 We calculate the area between the two pointers, and move the pointer pointing to the shorter height towards the other pointer. This ensures that we always explore the maximum possible area. We continue this process until the two pointers meet, and return the maximum area. Time O(n) where n is the length of input arr Space O(1). |
| 14 | Longest Common Prefix | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/14_longest_common_prefix.cpp) | find minimum length for a string. start from to first char that string and compare with others if char is common add it to result. when found not common char return result. |
| 15 | 3Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/15_3sum.cpp) | Sort the input arr and for every distinct element in arr consider target = -1*element. Try to find a pair which sums this target. Since arr is sorted we can use same approach in question Two Sum II (167). Time O(n^2) Space O(1). |
| 21 | Merge Two Sorted Lists | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/21_merge_two_sorted_lists.cpp) | Recursive approach. Time O(n+m) Space O(n+m) where n and m are length of list1 and list2 respectively. |
| 23 | Merge K Sorted Lists | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/23_merge_k_sorted_lists.cpp) | Select two lists and merge them using the idea of problem 21. Do it until there is only one list and return it since it is the merged k lists. Time O(n\*klogk) (not sure!) |
| 26 | Remove Duplicates From Sorted Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/26_remove_duplicates_from_sorted_array.cpp) | two pointers(last, next). initalize last to 0 and next to 1st index. while next < size increment next. when next and last index's val different swap them. there is last+1 swap return. Time O(n) Space O(1) where n is number of elements in array. |
| 28 | Find The Index Of The First Occurrence In A String | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/28_find_the_index_of_the_first_occurrence_in_a_string.cpp) | Use two pointers. traverse haystack from start to len(haystack)-len(needle). Check every char is pair with needle. Time O(n*m) where n = len(haystack), m = len(needle) Space O(1). Solution can be optimized using KMP Time O(n + m) Space O(m).|
| 35 | Search Insert Position | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/35_search_insert_position.cpp) | binary search |
| 36 | Valid Sudoku | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/36_valid_sudoku.cpp) | keep sets for columns, rows and 3x3 grids. For every element in 9x9 grid put it corresponding colum, row and grid position. <br /> If element already exists one of the sets grid is not valid. O(81) = O(1) |
| 49 | Group Anagrams | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/49_group_anagrams.cpp) | use hashmap. add words' sorted version to map to find other words anagram or not |
| 67 | Add Binary | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/67_add_binary.cpp) | go from rightmost to leftmost |
| 69 | Sqrt(x) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/69_sqrt.cpp) | binary search O(logn) |
| 70 | Climbing Stairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/70_climbing_stairs.cpp) | DP Time: O(n), Space O(1). |
| 72 | Edit Distance | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/72_edit_distance.cpp) | DP. M = word1.len(), N = word2.len(). Time O(MxN) Space O(MxN) |
| 100 | Same Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/100_same_tree.cpp) | Recursively check left and right childrens are equal. Time O(n)(since visited every node) Space O(n) (worst case completely unbalanced tree). |
| 101 | Symmetric Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/101_symmetric_tree.cpp) | Recursively check left child's right is equal to right child's left. Time O(n) (since visit every node) Space (logn) (since logn height of binary tree) where n is the number of nodes in the tree. |
| 103 | Binary Tree Zigzag Level Order Traversal | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/103_binary_tree_zigzag_level_order_traversal.cpp) | level order traversal. if level is odd reverse the order. |
| 104 | Maximum Depth of Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/104_maximum_depth_of_binary_tree.cpp) | recursive |
| 105 | Construct Binary Tree From Preorder And Inorder Traversal | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/105_construct_binary_tree_from_preorder_and_inorder_traversal.cpp) | First element of preorder is the always root of tree. Find the index of the root in the inorder traversal. All the elements to the left of the root in the inorder traversal are in the left subtree, and all the elements to the right are in the right subtree. Recursively construct the left and right subtrees using the left and right portions of the inorder traversal, respectively, and the remaining elements of the preorder traversal. Time O(n)(building hashmap) Space O(n)(storing in hashmap) where n is the length of input arr. |
| 108 | Convert Sorted Array To Binary Search Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/108_convert_sorted_array_to_binary_search_tree.cpp) | recursively divide the array in half and use the middle element as the root of the subtree. Time O(n)(since visited every node) Space O(logn)(max height ) where n is the number of nodes.  |
| 109 | Convert Sorted List To Binary Search Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/109_convert_sorted_list_to_binary_search_tree.cpp) | recursively divide the array in half and use the middle element as the root of the subtree. Time O(n)(since visited every node) Space O(logn)(max height ) where n is the number of nodes. |
| 112 | Path Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/112_path_sum.cpp) | Recursive. Traverse tree inorder method add node values to total. When a leaf node check total is equal to target. Time O(N)(since traverse all nodes) Space O(H)(at worst case not binary tree H=N) where N is the number of nodes and H is the height of tree. |
| 121 | Best Time To Buy And Sell Stock | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/121_best_time_to_buy_and_sell_stock.cpp) | while passing array consider minimum element so far and max profit. Time: O(n), Space: O(1).  |
| 125 | Valid Palindrome | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/125_valid_palindrome.cpp) | two pointers. O(n) |
| 128 | Longest Consecutive Sequence | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/128_longest_consecutive_sequence.cpp) | add all numbers to unordered set O(n). <br />For all numbers if it is a start increase currSeq until no more adjacent found. |
| 129 | Sum Root To Leaf Numbers | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/129_sum_root_to_leaf_numbers.cpp) | Recursive dfs to tree create numbers and add numbers to total. Time O(N)(since traverse all nodes) Space O(H)(at worst case not binary tree H=N) where N is the number of nodes and H is the height of tree. |
| 136 | Single Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/136_single_number.cpp) | a^a=0. take xors of all elements to find unique one. Bit manupilation O(n) |
| 141 | Linked List Cycle | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/141_linked_list_cycle.cpp) | Two pointers. slow pointer goes 1 fast pointer goes 2. if they intersect there is cycle. Think like two person running around circular track. One person running faster(2x). Faster one overtakes slower. Time O(n) Space O(1). |
| 142 | Linked List Cycle II | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/142_linked_list_cycle_ii.cpp) | Floyd's Cycle-Finding algorithm. Once cycle found reset slow pointer to head. continue move fast and slow pointer 1 step the node which they meet is the starting node of the cycle. Time O(n) Space O(1). |
| 167 | Two Sum II-Input Array Is Sorted | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/167_two_sum_ii-inpur_array_is_sorted.cpp) | initalize two pointers to start and end while sum < target l++ , sum > target r--. Time O(n) Space O(1). It can be optimized with Binary Search. |
| 168 | Excel Sheet Column Title | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/168_excel_sheet_column_title.cpp) | "ABC" = 26^2\*1 + 26\*2 +3. columnNumber%26 gives last character. Then columnNumber/=26. Consider columnNumber%26 == 0. which means last char 'Z' but 'Z' denoted with 26. |
| 171 | Excel Sheet Column Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/171_excel_sheet_column_number.cpp) | Think of it like a 26 number system. When go next digit multiply current number with 26. consider 35 in 10 number system 35 = 3*10 + 5.Time O(n) Space O(1). |
| 217 | Contains Duplicate | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/217_contains_duplicate.cpp) | for every element check is it in set |
| 238 | Product Of Array Except Self | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/238_product_of_array_except_self.cpp) | needs two pass O(n). First pass go left to right multiply output[i] with leftProducts. <br />Second pass go right to left multiply output[i] with rightProducts. <br /> Time Complexity: O(n) Space Complexity: O(1)|
| 242 | Valid Anagram | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/242_valid_anagram.cpp) | make char freq arr. for chars in s increase freq 1 for chars in t decrease freq 1. <br />Check freq arr all elements 0 or not |
| 347 | Top K Frequent Elements | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/347_top_k_frequent_elements.cpp) | add elements to map with frequency O(n) <br /> add map elements to vector then sort. O(nlogn) |
| 382 | Linked List Random Node | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/382_linked_list_random_node.cpp) | Find length of the linked list(N). Generate number between 1-N. Go from head to this node and return val. It can also be solved more efficent O(n) time with Reservoir Sampling Algorithm. Time O(n) Space O(1) where n is the length of linked list. |
| 427 | Construct Quad Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/427_construct_quad_tree.cpp) | recursively create subtrees. serialize tree and create string from of a it keep them in a hashmap to check how many times it occured in tree. if a string form occured more than once append it to result arr. Time O(n^2logn). |
| 443 | String Compression | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/443_string_compression.cpp) | Use two pointers. One pointer for modify arr and other pointer for count number of occurence for a char. Time O(n) Space O(1) where n is length of input array. |
| 502 | IPO | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/502_ipo.cpp) | greedy problem use priority queue(max heap). Add projects which do not exceed the current capital(w) to pq. Pop the most profitable project(pq.top()), update w, reduce k. And do same while k > 0|
| 530 | Minimum Absolute Difference In BST (same as 783)| [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/530_minimum_absolute_difference_in_BST.cpp) | inorder traversal. keep prev node's val. O(n) |
| 540 | Single Element In A Sorted Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/540_single_element_in_a_sorted_array.cpp) | binary search. O(logn) |
| 606 | Construct String From Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/606_construct_string_from_binary_tree.cpp) | preorder traversal. Time O(n) Space O(h). Where h is the height of binary tree. |
| 652 | Find Duplicate Subtrees | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/652_find_duplicate_subtrees.cpp) | Write a function for make preorder traversal of tree in string form. Store preorder traversal of tree in map if any of subtrees found on tree this means it is duplicate put it on answer. Time O(n) Space O(n) where n number of nodes in the binary tree. |
| 704 | Binary Search | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/704_binary_search.cpp) | simple binary search. Time O(logn) Space O(1) where n is size of the input arr. |
| 746 | Min Cost Climbing Stairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/746_min_cost_climbing_stairs.cpp) | DP. Time O(n). Space O(1) |
| 783 | Minimum Distance Between BST Nodes (same as 530) | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/783_minimum_distance_between_bts_nodes.cpp) | inorder traversal. keep prev node's val. O(n)|
| 875 | Koko Eating Bananas | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/875_koko_eating_bananas.cpp) | Binary search. K lays between 1 and max(input arr). Time O(n) to find max element in input arr Space O(1). |
| 958 | Check Completeness Of A Binary Tree | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/958_check_completeness_of_a_binary_tree.cpp) | BFS. Level order traverse tree with using queue after founding a null if found a not null node tree is not complete. Time O(n) (since visited every node) Space O(n) (worst case need to store all nodes) where n is the number of nodes in the tree. |
| 988 | Smallest String Starting From Leaf | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/988_smallest_string_starting_from_leaf.cpp) | Set result the "{}" since '{' char is bigger than 'z' in ASCII table. Recursively create strings. Update result = min(result, createdString). Time O(N) (since visited every node) Space O(N) (worst case tree like a linked list) (not sure about complexities!!!). |
| 989 | Add to Array-Form of Integer | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/989_add_to_array-form_of_integer.cpp) | add from rightmost digit to leftmost |
| 1011 | Capacity To Ship Packages Within D Days | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1011_capacity_to_ship_packages_within_d_days.cpp) | (monotonic) binary search. find the minimum weight capacity that can transport all the packages in the given number of days by checking if a certain capacity is possible or not. |
| 1345 | Jump Game IV | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1345_jump_game_iv.cpp) | BFS. Time O(n) Space O(nlogm) where n is length of input arr and m is max(inp arr).  |
| 1512 | Number of Good Pairs | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1512_number_of_good_pairs.cpp) | check every pair |
| 1524 | Number of Sub-arrays With Odd Sum | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1524_number_of_subarrays_with_odd_sum.cpp) | check start and end odd |
| 1539 | Kth Missing Positive Number | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1539_kth_missing_positive_number.cpp) | Think of this case, if every element in the array > k , the answer would be k. So, for every element <= k, need to increment k. Time O(n) Space O(1). It can be optimized with BS. |
| 1675 | Minimize Deviation In Array | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/1675_minimize_deviation_in_array.cpp) | double all odd numbers and storing them in a max heap, and then repeatedly divide the maximum element in the heap by 2 and update the minimum element and the deviation until the maximum element becomes odd. O(nlogn)|
| 2187 | Minimum Time To Complete Trips | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2187_minimum_time_to_complete_trips.cpp) | Binary search. Set left = 1 and r = min(time)\*totalTrips. Time O(nlog(m\*k)) Space O(1) |
| 2236 | Root Equals Sum of Children | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2236_root_equals_sum_of_children.cpp) | sum left and right child. check is it equal to root |
| 2444 | Count Subarrays With Fixed Bounds | [c++](https://github.com/berkulutas/leetcode/blob/main/cpp/2444_count_subarrays_with_fixed_bounds.cpp) | two pointers. Time O(n) Space O(1) where n is the length of input arr. |
|---|---|---|---|
