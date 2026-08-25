#!/bin/bash

# Create main project directory
mkdir -p "Programming_DSA_Problem_Set"

# Change to the project directory
cd "Programming_DSA_Problem_Set"

# Create main sections
mkdir -p "Section-1_Programming_Fundamentals"
mkdir -p "Section-2_DSA"

# ====== Section 1: Programming Fundamentals ======
cd "Section-1_Programming_Fundamentals"

# A) Input/Output, Basics, Conditionals
mkdir -p "A_IO_Basics_Conditionals"
cd "A_IO_Basics_Conditionals"
for i in {1..25}; do
    case $i in
        1) touch "01_Read_two_integers_and_print_their_sum.cpp" ;;
        2) touch "02_Read_two_integers_and_print_their_difference_and_product.cpp" ;;
        3) touch "03_Read_two_integers_and_print_quotient_and_remainder.cpp" ;;
        4) touch "04_Swap_two_numbers_using_temp_variable.cpp" ;;
        5) touch "05_Swap_two_numbers_without_temp_variable.cpp" ;;
        6) touch "06_Convert_Celsius_to_Fahrenheit.cpp" ;;
        7) touch "07_Convert_Fahrenheit_to_Celsius.cpp" ;;
        8) touch "08_Compute_area_and_perimeter_of_a_rectangle.cpp" ;;
        9) touch "09_Compute_area_and_circumference_of_a_circle.cpp" ;;
        10) touch "10_Compute_area_of_a_triangle_base_height.cpp" ;;
        11) touch "11_Check_if_a_number_is_even_or_odd.cpp" ;;
        12) touch "12_Check_if_a_number_is_positive_negative_or_zero.cpp" ;;
        13) touch "13_Find_the_maximum_of_three_numbers.cpp" ;;
        14) touch "14_Find_the_minimum_of_three_numbers.cpp" ;;
        15) touch "15_Check_if_a_year_is_a_leap_year.cpp" ;;
        16) touch "16_Check_if_a_character_is_vowel_or_consonant.cpp" ;;
        17) touch "17_Check_if_a_character_is_alphabet_digit_special.cpp" ;;
        18) touch "18_Grade_calculation_from_marks.cpp" ;;
        19) touch "19_Simple_calculator_using_switch.cpp" ;;
        20) touch "20_Check_if_a_number_is_divisible_by_5_and_11.cpp" ;;
        21) touch "21_Check_if_a_number_is_divisible_by_3_or_7.cpp" ;;
        22) touch "22_Find_roots_of_a_quadratic_equation.cpp" ;;
        23) touch "23_Check_if_three_sides_form_a_valid_triangle.cpp" ;;
        24) touch "24_Identify_triangle_type_equilateral_isosceles_scalene.cpp" ;;
        25) touch "25_Find_profit_or_loss_given_cost_and_selling_price.cpp" ;;
    esac
done
cd ..

# B) Loops & Patterns
mkdir -p "B_Loops_Patterns"
cd "B_Loops_Patterns"
for i in {26..55}; do
    case $i in
        26) touch "26_Print_numbers_1_to_N.cpp" ;;
        27) touch "27_Print_numbers_N_to_1.cpp" ;;
        28) touch "28_Print_all_even_numbers_up_to_N.cpp" ;;
        29) touch "29_Print_all_odd_numbers_up_to_N.cpp" ;;
        30) touch "30_Sum_of_first_N_natural_numbers.cpp" ;;
        31) touch "31_Sum_of_first_N_even_numbers.cpp" ;;
        32) touch "32_Sum_of_first_N_odd_numbers.cpp" ;;
        33) touch "33_Factorial_of_N_iterative.cpp" ;;
        34) touch "34_Power_compute_ab_loop.cpp" ;;
        35) touch "35_Count_digits_of_a_number.cpp" ;;
        36) touch "36_Sum_of_digits_of_a_number.cpp" ;;
        37) touch "37_Reverse_a_number.cpp" ;;
        38) touch "38_Check_palindrome_number.cpp" ;;
        39) touch "39_Check_Armstrong_number.cpp" ;;
        40) touch "40_Print_Fibonacci_series_up_to_N_terms.cpp" ;;
        41) touch "41_Find_GCD_of_two_numbers_loop_method.cpp" ;;
        42) touch "42_Find_LCM_of_two_numbers.cpp" ;;
        43) touch "43_Check_if_number_is_prime.cpp" ;;
        44) touch "44_Print_all_primes_in_range_Sieve_of_Eratosthenes.cpp" ;;
        45) touch "45_Print_multiplication_table_of_a_number.cpp" ;;
        46) touch "46_Print_all_factors_divisors_of_a_number.cpp" ;;
        47) touch "47_Count_number_of_divisors_of_a_number.cpp" ;;
        48) touch "48_Compute_sum_of_divisors_of_a_number.cpp" ;;
        49) touch "49_Compute_series_sum_using_double.cpp" ;;
        50) touch "50_Count_trailing_zeros_in_factorial_basic_approach.cpp" ;;
        51) touch "51_Pattern_right_triangle_of_star.cpp" ;;
        52) touch "52_Pattern_inverted_triangle_of_star.cpp" ;;
        53) touch "53_Pattern_pyramid_of_star.cpp" ;;
        54) touch "54_Pattern_diamond_of_star.cpp" ;;
        55) touch "55_Pattern_number_triangle.cpp" ;;
    esac
done
cd ..

# C) Arrays Basics
mkdir -p "C_Arrays_Basics"
cd "C_Arrays_Basics"
for i in {56..90}; do
    case $i in
        56) touch "56_Read_an_array_and_print_it.cpp" ;;
        57) touch "57_Find_sum_of_array_elements.cpp" ;;
        58) touch "58_Find_average_of_array_elements.cpp" ;;
        59) touch "59_Find_maximum_element_in_array.cpp" ;;
        60) touch "60_Find_minimum_element_in_array.cpp" ;;
        61) touch "61_Find_second_maximum_element.cpp" ;;
        62) touch "62_Find_second_minimum_element.cpp" ;;
        63) touch "63_Count_even_and_odd_elements.cpp" ;;
        64) touch "64_Count_positive_negative_and_zeros.cpp" ;;
        65) touch "65_Reverse_an_array_in-place.cpp" ;;
        66) touch "66_Rotate_array_left_by_1.cpp" ;;
        67) touch "67_Rotate_array_right_by_1.cpp" ;;
        68) touch "68_Rotate_array_left_by_K.cpp" ;;
        69) touch "69_Rotate_array_right_by_K.cpp" ;;
        70) touch "70_Check_if_array_is_sorted.cpp" ;;
        71) touch "71_Remove_duplicates_from_sorted_array.cpp" ;;
        72) touch "72_Find_frequency_of_each_element_basic.cpp" ;;
        73) touch "73_Find_element_with_highest_frequency.cpp" ;;
        74) touch "74_Find_all_duplicate_elements.cpp" ;;
        75) touch "75_Find_all_missing_numbers_from_1_to_N.cpp" ;;
        76) touch "76_Linear_search_first_occurrence.cpp" ;;
        77) touch "77_Count_occurrences_of_X_in_array.cpp" ;;
        78) touch "78_Find_first_and_last_occurrence_of_X_linear.cpp" ;;
        79) touch "79_Merge_two_arrays_into_one.cpp" ;;
        80) touch "80_Merge_two_sorted_arrays_two_pointer.cpp" ;;
        81) touch "81_Find_intersection_of_two_arrays.cpp" ;;
        82) touch "82_Find_union_of_two_arrays.cpp" ;;
        83) touch "83_Move_all_zeros_to_end.cpp" ;;
        84) touch "84_Move_all_negative_numbers_to_beginning.cpp" ;;
        85) touch "85_Segregate_even_and_odd_numbers.cpp" ;;
        86) touch "86_Find_pair_with_given_sum_On_squared.cpp" ;;
        87) touch "87_Find_pair_with_given_sum_two_sum_using_hash.cpp" ;;
        88) touch "88_Find_triplet_with_given_sum_basic.cpp" ;;
        89) touch "89_Find_subarray_with_given_sum_positive_numbers.cpp" ;;
        90) touch "90_Maximum_subarray_sum_Kadane.cpp" ;;
    esac
done
cd ..

# D) 2D Arrays / Matrices
mkdir -p "D_2D_Arrays_Matrices"
cd "D_2D_Arrays_Matrices"
for i in {91..110}; do
    case $i in
        91) touch "91_Read_and_print_a_matrix.cpp" ;;
        92) touch "92_Sum_of_all_elements_in_matrix.cpp" ;;
        93) touch "93_Print_row-wise_sums.cpp" ;;
        94) touch "94_Print_column-wise_sums.cpp" ;;
        95) touch "95_Find_maximum_element_in_matrix.cpp" ;;
        96) touch "96_Check_if_matrix_is_identity.cpp" ;;
        97) touch "97_Check_if_matrix_is_diagonal.cpp" ;;
        98) touch "98_Transpose_a_matrix.cpp" ;;
        99) touch "99_Rotate_matrix_90_clockwise.cpp" ;;
        100) touch "100_Rotate_matrix_90_anti-clockwise.cpp" ;;
        101) touch "101_Add_two_matrices.cpp" ;;
        102) touch "102_Subtract_two_matrices.cpp" ;;
        103) touch "103_Multiply_two_matrices.cpp" ;;
        104) touch "104_Trace_of_a_square_matrix.cpp" ;;
        105) touch "105_Determinant_of_2x2_and_3x3.cpp" ;;
        106) touch "106_Check_if_matrix_is_symmetric.cpp" ;;
        107) touch "107_Spiral_print_of_matrix.cpp" ;;
        108) touch "108_Zig_zag_wave_traversal.cpp" ;;
        109) touch "109_Search_in_a_row-wise_and_column-wise_sorted_matrix.cpp" ;;
        110) touch "110_Find_largest_row_sum_and_its_row_index.cpp" ;;
    esac
done
cd ..

# E) Strings
mkdir -p "E_Strings"
cd "E_Strings"
for i in {111..140}; do
    case $i in
        111) touch "111_Read_a_string_and_print_length.cpp" ;;
        112) touch "112_Reverse_a_string.cpp" ;;
        113) touch "113_Check_if_string_is_palindrome.cpp" ;;
        114) touch "114_Count_vowels_consonants_digits_spaces.cpp" ;;
        115) touch "115_Convert_to_uppercase.cpp" ;;
        116) touch "116_Convert_to_lowercase.cpp" ;;
        117) touch "117_Toggle_case_of_letters.cpp" ;;
        118) touch "118_Remove_all_spaces_from_a_string.cpp" ;;
        119) touch "119_Replace_spaces_with_dash.cpp" ;;
        120) touch "120_Count_words_in_a_sentence.cpp" ;;
        121) touch "121_Find_frequency_of_each_character.cpp" ;;
        122) touch "122_Find_first_non-repeating_character.cpp" ;;
        123) touch "123_Remove_duplicate_characters_keep_first_occurrences.cpp" ;;
        124) touch "124_Check_if_two_strings_are_anagrams.cpp" ;;
        125) touch "125_Check_if_one_string_is_a_rotation_of_another.cpp" ;;
        126) touch "126_Find_substring_occurrences_naive.cpp" ;;
        127) touch "127_Implement_strcmp-like_comparison.cpp" ;;
        128) touch "128_Implement_strcpy-like_copy.cpp" ;;
        129) touch "129_Longest_common_prefix_among_strings.cpp" ;;
        130) touch "130_Longest_word_in_a_sentence.cpp" ;;
        131) touch "131_Reverse_words_in_a_sentence.cpp" ;;
        132) touch "132_Check_if_string_contains_only_digits.cpp" ;;
        133) touch "133_Validate_a_basic_email_format.cpp" ;;
        134) touch "134_Compress_string_run-length_encoding.cpp" ;;
        135) touch "135_Decompress_run-length_encoded_string.cpp" ;;
        136) touch "136_Smallest_window_containing_all_chars_of_another_string.cpp" ;;
        137) touch "137_Longest_substring_without_repeating_characters.cpp" ;;
        138) touch "138_Longest_palindromic_substring_expand_centers.cpp" ;;
        139) touch "139_Convert_string_to_integer_handle_sign.cpp" ;;
        140) touch "140_Big_integer_addition_using_strings.cpp" ;;
    esac
done
cd ..

# F) Recursion & Backtracking
mkdir -p "F_Recursion_Backtracking"
cd "F_Recursion_Backtracking"
for i in {141..160}; do
    case $i in
        141) touch "141_Factorial_using_recursion.cpp" ;;
        142) touch "142_Fibonacci_using_recursion.cpp" ;;
        143) touch "143_Sum_of_digits_using_recursion.cpp" ;;
        144) touch "144_Reverse_a_number_using_recursion.cpp" ;;
        145) touch "145_Power_ab_using_recursion.cpp" ;;
        146) touch "146_GCD_using_recursion_Euclid.cpp" ;;
        147) touch "147_Print_array_elements_using_recursion.cpp" ;;
        148) touch "148_Check_if_array_is_sorted_using_recursion.cpp" ;;
        149) touch "149_Binary_search_using_recursion.cpp" ;;
        150) touch "150_Generate_all_subsets_of_a_set.cpp" ;;
        151) touch "151_Generate_all_permutations_of_a_string.cpp" ;;
        152) touch "152_Solve_Tower_of_Hanoi.cpp" ;;
        153) touch "153_N-Queens_print_all_solutions_for_N.cpp" ;;
        154) touch "154_Sudoku_solver_9x9.cpp" ;;
        155) touch "155_Rat_in_a_maze_all_paths.cpp" ;;
        156) touch "156_Generate_valid_parentheses_for_N_pairs.cpp" ;;
        157) touch "157_Word_search_in_grid_existence.cpp" ;;
        158) touch "158_Combination_sum_numbers_can_repeat.cpp" ;;
        159) touch "159_Combination_sum_II_numbers_used_once.cpp" ;;
        160) touch "160_K-th_permutation_sequence.cpp" ;;
    esac
done
cd ..

# G) Math & Number Theory
mkdir -p "G_Math_Number_Theory"
cd "G_Math_Number_Theory"
for i in {161..175}; do
    case $i in
        161) touch "161_Sieve_of_Eratosthenes_up_to_N.cpp" ;;
        162) touch "162_Prime_factorization_of_a_number.cpp" ;;
        163) touch "163_Count_primes_in_1_to_N.cpp" ;;
        164) touch "164_Check_if_number_is_perfect.cpp" ;;
        165) touch "165_Check_if_number_is_a_strong_number.cpp" ;;
        166) touch "166_Compute_nCr_basic.cpp" ;;
        167) touch "167_Compute_nCr_modulo_P_using_factorial_inverse.cpp" ;;
        168) touch "168_Fast_exponentiation_binary_power.cpp" ;;
        169) touch "169_Modular_exponentiation.cpp" ;;
        170) touch "170_Extended_Euclidean_algorithm.cpp" ;;
        171) touch "171_Modular_multiplicative_inverse_when_exists.cpp" ;;
        172) touch "172_Compute_Eulers_Totient_phi_n.cpp" ;;
        173) touch "173_Check_if_number_is_power_of_two.cpp" ;;
        174) touch "174_Find_all_divisors_in_sorted_order_efficient.cpp" ;;
        175) touch "175_Count_trailing_zeros_in_factorial_efficient_method.cpp" ;;
    esac
done
cd ..

# H) Bit Manipulation
mkdir -p "H_Bit_Manipulation"
cd "H_Bit_Manipulation"
for i in {176..185}; do
    case $i in
        176) touch "176_Set_i-th_bit_of_a_number.cpp" ;;
        177) touch "177_Clear_i-th_bit_of_a_number.cpp" ;;
        178) touch "178_Toggle_i-th_bit_of_a_number.cpp" ;;
        179) touch "179_Check_if_i-th_bit_is_set.cpp" ;;
        180) touch "180_Count_set_bits_Brian_Kernighan.cpp" ;;
        181) touch "181_Check_if_a_number_is_odd_using_bitwise.cpp" ;;
        182) touch "182_Find_single_number_where_others_appear_twice_XOR.cpp" ;;
        183) touch "183_Find_two_unique_numbers_where_others_appear_twice.cpp" ;;
        184) touch "184_Find_number_appearing_once_where_others_appear_thrice.cpp" ;;
        185) touch "185_Swap_two_numbers_using_XOR.cpp" ;;
    esac
done
cd ..

# I) STL, Sorting, Searching
mkdir -p "I_STL_Sorting_Searching"
cd "I_STL_Sorting_Searching"
for i in {186..200}; do
    case $i in
        186) touch "186_Implement_bubble_sort.cpp" ;;
        187) touch "187_Implement_selection_sort.cpp" ;;
        188) touch "188_Implement_insertion_sort.cpp" ;;
        189) touch "189_Implement_merge_sort.cpp" ;;
        190) touch "190_Implement_quicksort.cpp" ;;
        191) touch "191_Implement_counting_sort.cpp" ;;
        192) touch "192_Implement_binary_search_iterative.cpp" ;;
        193) touch "193_Find_lower_bound_and_upper_bound_manually.cpp" ;;
        194) touch "194_Sort_a_vector_of_pairs_by_second_then_first.cpp" ;;
        195) touch "195_Top-K_largest_elements_using_heap.cpp" ;;
        196) touch "196_K-th_smallest_element_quickselect_heap.cpp" ;;
        197) touch "197_Sort_an_array_of_0s_1s_2s_Dutch_flag.cpp" ;;
        198) touch "198_Minimum_number_of_platforms_meeting_rooms_intervals.cpp" ;;
        199) touch "199_Check_balanced_parentheses_using_stack.cpp" ;;
        200) touch "200_Evaluate_postfix_expression_using_stack.cpp" ;;
    esac
done
cd ..

# Return to Section-1 root
cd ..

# ====== Section 2: DSA ======
cd "../Section-2_DSA"

# 1. Linked List
mkdir -p "1_Linked_List"
cd "1_Linked_List"

# Singly Linked List
mkdir -p "Singly_Linked_List"
cd "Singly_Linked_List"
for i in {1..15}; do
    case $i in
        1) touch "01_Create_first_node.cpp" ;;
        2) touch "02_Add_node_at_end.cpp" ;;
        3) touch "03_Add_node_at_beginning.cpp" ;;
        4) touch "04_Add_node_at_position.cpp" ;;
        5) touch "05_Delete_first_node.cpp" ;;
        6) touch "06_Delete_last_node.cpp" ;;
        7) touch "07_Delete_node_at_position.cpp" ;;
        8) touch "08_Delete_full_linked_list.cpp" ;;
        9) touch "09_Print_Linked_list.cpp" ;;
        10) touch "10_Count_Node.cpp" ;;
        11) touch "11_Check_ascending_order.cpp" ;;
        12) touch "12_Check_descending_order.cpp" ;;
        13) touch "13_Search_node.cpp" ;;
        14) touch "14_CRUD_operations.cpp" ;;
        15) touch "15_Reverse_linked_list.cpp" ;;
    esac
done
cd ..

# Doubly Linked List
mkdir -p "Doubly_Linked_List"
cd "Doubly_Linked_List"
for i in {16..30}; do
    case $i in
        16) touch "16_Create_first_node_Doubly.cpp" ;;
        17) touch "17_Add_node_at_beginning_Doubly.cpp" ;;
        18) touch "18_Add_node_at_end_Doubly.cpp" ;;
        19) touch "19_Add_node_at_position_Doubly.cpp" ;;
        20) touch "20_Delete_first_node_Doubly.cpp" ;;
        21) touch "21_Delete_last_node_Doubly.cpp" ;;
        22) touch "22_Delete_node_at_position_Doubly.cpp" ;;
        23) touch "23_Delete_full_linked_list_Doubly.cpp" ;;
        24) touch "24_Print_forward_Doubly.cpp" ;;
        25) touch "25_Print_backward_Doubly.cpp" ;;
        26) touch "26_Count_nodes_Doubly.cpp" ;;
        27) touch "27_Search_node_Doubly.cpp" ;;
        28) touch "28_Reverse_linked_list_Doubly.cpp" ;;
        29) touch "29_Check_ascending_order_Doubly.cpp" ;;
        30) touch "30_Check_descending_order_Doubly.cpp" ;;
    esac
done
cd ..

# Circular Linked List
mkdir -p "Circular_Linked_List"
cd "Circular_Linked_List"
for i in {31..45}; do
    case $i in
        31) touch "31_Create_first_node_Circular_SLL.cpp" ;;
        32) touch "32_Add_node_at_beginning_Circular_SLL.cpp" ;;
        33) touch "33_Add_node_at_end_Circular_SLL.cpp" ;;
        34) touch "34_Add_node_at_position_Circular_SLL.cpp" ;;
        35) touch "35_Delete_first_node_Circular_SLL.cpp" ;;
        36) touch "36_Delete_last_node_Circular_SLL.cpp" ;;
        37) touch "37_Delete_node_at_position_Circular_SLL.cpp" ;;
        38) touch "38_Delete_full_linked_list_Circular_SLL.cpp" ;;
        39) touch "39_Print_linked_list_Circular_SLL.cpp" ;;
        40) touch "40_Count_nodes_Circular_SLL.cpp" ;;
        41) touch "41_Search_node_Circular_SLL.cpp" ;;
        42) touch "42_Reverse_linked_list_Circular_SLL.cpp" ;;
        43) touch "43_Check_ascending_order_Circular_SLL.cpp" ;;
        44) touch "44_Check_descending_order_Circular_SLL.cpp" ;;
        45) touch "45_Split_circular_linked_list_into_two_halves.cpp" ;;
    esac
done
cd ..

# Linked List Advanced
mkdir -p "Linked_List_Advanced"
cd "Linked_List_Advanced"
for i in {46..75}; do
    case $i in
        46) touch "46_Reverse_linked_list.cpp" ;;
        47) touch "47_Find_middle_element.cpp" ;;
        48) touch "48_Detect_loop.cpp" ;;
        49) touch "49_Remove_loop.cpp" ;;
        50) touch "50_Find_length_of_loop.cpp" ;;
        51) touch "51_Merge_two_sorted_lists.cpp" ;;
        52) touch "52_Remove_duplicates_sorted.cpp" ;;
        53) touch "53_Remove_duplicates_unsorted.cpp" ;;
        54) touch "54_Nth_node_from_end.cpp" ;;
        55) touch "55_Delete_without_head_pointer.cpp" ;;
        56) touch "56_Reverse_in_groups_of_K.cpp" ;;
        57) touch "57_Check_palindrome_list.cpp" ;;
        58) touch "58_Intersection_point_of_two_lists.cpp" ;;
        59) touch "59_Add_two_numbers_represented_by_lists.cpp" ;;
        60) touch "60_Sort_linked_list.cpp" ;;
        61) touch "61_Rotate_linked_list.cpp" ;;
        62) touch "62_Flatten_linked_list.cpp" ;;
        63) touch "63_Clone_linked_list_with_random_pointer.cpp" ;;
        64) touch "64_Segregate_even_and_odd_nodes.cpp" ;;
        65) touch "65_Swap_nodes_in_pairs.cpp" ;;
        66) touch "66_Merge_K_sorted_lists.cpp" ;;
        67) touch "67_Detect_cycle_start.cpp" ;;
        68) touch "68_Reorder_list.cpp" ;;
        69) touch "69_Split_circular_linked_list.cpp" ;;
        70) touch "70_Convert_binary_number_in_list_to_integer.cpp" ;;
        71) touch "71_Multiply_two_numbers_represented_by_lists.cpp" ;;
        72) touch "72_Reverse_alternate_K_nodes.cpp" ;;
        73) touch "73_Delete_nodes_having_greater_value_on_right.cpp" ;;
        74) touch "74_Remove_zero-sum_sublists.cpp" ;;
        75) touch "75_LRU_cache_DLL_Hash.cpp" ;;
    esac
done
cd ..

cd ..

# 2. Stack & Queue
mkdir -p "2_Stack_Queue"
cd "2_Stack_Queue"

# Stack Operations
mkdir -p "Stack_Operations"
cd "Stack_Operations"
for i in {76..85}; do
    case $i in
        76) touch "76_Implement_stack_using_array.cpp" ;;
        77) touch "77_Stack_using_linked_list.cpp" ;;
        78) touch "78_Reverse_stack.cpp" ;;
        79) touch "79_Sort_stack.cpp" ;;
        80) touch "80_Valid_parentheses.cpp" ;;
        81) touch "81_Min_stack.cpp" ;;
        82) touch "82_Next_greater_element.cpp" ;;
        83) touch "83_Stock_span.cpp" ;;
        84) touch "84_Largest_rectangle_in_histogram.cpp" ;;
        85) touch "85_Infix_to_postfix.cpp" ;;
    esac
done
cd ..

# Queue & Deque
mkdir -p "Queue_Deque"
cd "Queue_Deque"
for i in {86..98}; do
    case $i in
        86) touch "86_Implement_queue_using_array.cpp" ;;
        87) touch "87_Queue_using_linked_list.cpp" ;;
        88) touch "88_Circular_queue.cpp" ;;
        89) touch "89_Queue_using_stacks.cpp" ;;
        90) touch "90_Stack_using_queues.cpp" ;;
        91) touch "91_Sliding_window_maximum.cpp" ;;
        92) touch "92_First_non-repeating_character.cpp" ;;
        93) touch "93_Generate_binary_numbers.cpp" ;;
        94) touch "94_Rotten_oranges.cpp" ;;
        95) touch "95_LRU_cache_queue_approach.cpp" ;;
        96) touch "96_Max_of_all_subarrays_of_size_K.cpp" ;;
        97) touch "97_Sum_of_min_and_max_of_subarrays.cpp" ;;
        98) touch "98_Circular_tour_petrol_pump.cpp" ;;
    esac
done
cd ..

cd ..

# 3. Tree
mkdir -p "3_Tree"
cd "3_Tree"

# Binary Tree Basics
mkdir -p "Binary_Tree_Basics"
cd "Binary_Tree_Basics"
for i in {99..108}; do
    case $i in
        99) touch "99_Inorder_traversal.cpp" ;;
        100) touch "100_Preorder_traversal.cpp" ;;
        101) touch "101_Postorder_traversal.cpp" ;;
        102) touch "102_Level_order_traversal.cpp" ;;
        103) touch "103_Height_of_tree.cpp" ;;
        104) touch "104_Count_nodes.cpp" ;;
        105) touch "105_Count_leaf_nodes.cpp" ;;
        106) touch "106_Mirror_tree.cpp" ;;
        107) touch "107_Check_identical_trees.cpp" ;;
        108) touch "108_Check_symmetric_tree.cpp" ;;
    esac
done
cd ..

# Advanced Binary Tree
mkdir -p "Advanced_Binary_Tree"
cd "Advanced_Binary_Tree"
for i in {109..129}; do
    case $i in
        109) touch "109_Build_tree_from_traversals.cpp" ;;
        110) touch "110_Maximum_path_sum.cpp" ;;
        111) touch "111_Zigzag_traversal.cpp" ;;
        112) touch "112_Boundary_traversal.cpp" ;;
        113) touch "113_Vertical_traversal.cpp" ;;
        114) touch "114_Top_view.cpp" ;;
        115) touch "115_Bottom_view.cpp" ;;
        116) touch "116_Left_view.cpp" ;;
        117) touch "117_Right_view.cpp" ;;
        118) touch "118_Diagonal_traversal.cpp" ;;
        119) touch "119_Lowest_common_ancestor.cpp" ;;
        120) touch "120_Distance_between_two_nodes.cpp" ;;
        121) touch "121_Maximum_width.cpp" ;;
        122) touch "122_Check_balanced_tree.cpp" ;;
        123) touch "123_Diameter_of_tree.cpp" ;;
        124) touch "124_Sum_tree.cpp" ;;
        125) touch "125_Check_subtree.cpp" ;;
        126) touch "126_Duplicate_subtrees.cpp" ;;
        127) touch "127_Nodes_at_distance_K.cpp" ;;
        128) touch "128_Flatten_tree_to_linked_list.cpp" ;;
        129) touch "129_Burn_a_tree.cpp" ;;
    esac
done
cd ..

# Binary Search Tree
mkdir -p "Binary_Search_Tree"
cd "Binary_Search_Tree"
for i in {130..148}; do
    case $i in
        130) touch "130_Insert_in_BST.cpp" ;;
        131) touch "131_Search_in_BST.cpp" ;;
        132) touch "132_Minimum_of_the_tree.cpp" ;;
        133) touch "133_Maximum_of_the_tree.cpp" ;;
        134) touch "134_Delete_from_BST.cpp" ;;
        135) touch "135_Construct_BST_from_Preorder_Array.cpp" ;;
        136) touch "136_Check_BST_is_valid.cpp" ;;
        137) touch "137_Build_BST_from_sorted_array.cpp" ;;
        138) touch "138_Tree_Successor.cpp" ;;
        139) touch "139_Tree_Predecessor.cpp" ;;
        140) touch "140_Construct_all_possible_trees.cpp" ;;
        141) touch "141_Largest_BST_in_Binary_tree.cpp" ;;
        142) touch "142_Restore_BST.cpp" ;;
        143) touch "143_Floor_and_ceil.cpp" ;;
        144) touch "144_Kth_smallest.cpp" ;;
        145) touch "145_Convert_BST_to_DLL.cpp" ;;
        146) touch "146_Lowest_common_ancestor_BST.cpp" ;;
        147) touch "147_Merge_two_BSTs.cpp" ;;
        148) touch "148_Count_BST_nodes_in_range.cpp" ;;
    esac
done
cd ..

cd ..

# 4. Graph
mkdir -p "4_Graph"
cd "4_Graph"

# Basics of Graph Algorithms
mkdir -p "Basics_of_Graph_Algorithms"
cd "Basics_of_Graph_Algorithms"
for i in {149..153}; do
    case $i in
        149) touch "149_BFS_Breadth-First_Search.cpp" ;;
        150) touch "150_DFS_Depth-First_Search.cpp" ;;
        151) touch "151_Graph_representation_Adjacency_matrix_vs_list.cpp" ;;
        152) touch "152_Count_connected_components.cpp" ;;
        153) touch "153_Number_of_islands.cpp" ;;
    esac
done
cd ..

# Cycle Detection
mkdir -p "Cycle_Detection"
cd "Cycle_Detection"
for i in {154..157}; do
    case $i in
        154) touch "154_Check_cycle_in_Undirected_Graph_BFS.cpp" ;;
        155) touch "155_Check_cycle_in_Undirected_Graph_DFS.cpp" ;;
        156) touch "156_Check_cycle_in_Directed_Graph_DFS.cpp" ;;
        157) touch "157_Check_cycle_in_Directed_Graph_BFS_Kahn.cpp" ;;
    esac
done
cd ..

# Topological Sorting
mkdir -p "Topological_Sorting"
cd "Topological_Sorting"
for i in {158..161}; do
    case $i in
        158) touch "158_Topological_Sort_using_DFS.cpp" ;;
        159) touch "159_Topological_Sort_Kahn_Algorithm.cpp" ;;
        160) touch "160_Alien_dictionary.cpp" ;;
        161) touch "161_Course_schedule.cpp" ;;
    esac
done
cd ..

# Shortest Path
mkdir -p "Shortest_Path"
cd "Shortest_Path"
for i in {162..167}; do
    case $i in
        162) touch "162_Shortest_path_in_undirected_graph_BFS.cpp" ;;
        163) touch "163_Shortest_distance_in_undirected_graph_BFS.cpp" ;;
        164) touch "164_Shortest_distance_from_source_to_all_node_weighted_DAG.cpp" ;;
        165) touch "165_Dijkstra_algorithm_Weighted_Graph.cpp" ;;
        166) touch "166_Bellman-Ford_Weighted_Graph_with_negative_edges.cpp" ;;
        167) touch "167_Floyd-Warshall_All_pair_shortest_path.cpp" ;;
    esac
done
cd ..

# Minimum Spanning Tree
mkdir -p "Minimum_Spanning_Tree"
cd "Minimum_Spanning_Tree"
for i in {168..169}; do
    case $i in
        168) touch "168_Minimum_Spanning_Tree_Prim_Algorithm.cpp" ;;
        169) touch "169_Minimum_Spanning_Tree_Kruskal_Algorithm_Disjoint_Set.cpp" ;;
    esac
done
cd ..

# Connectivity & Components
mkdir -p "Connectivity_Components"
cd "Connectivity_Components"
for i in {170..173}; do
    case $i in
        170) touch "170_Finding_Bridges_in_a_graph.cpp" ;;
        171) touch "171_Finding_Articulation_Points_Tarjan_Algorithm.cpp" ;;
        172) touch "172_Number_of_Strongly_Connected_Components_Kosaraju.cpp" ;;
        173) touch "173_Strongly_Connected_Components_List_Kosaraju.cpp" ;;
    esac
done
cd ..

# Grid Problems
mkdir -p "Grid_Problems"
cd "Grid_Problems"
for i in {174..178}; do
    case $i in
        174) touch "174_Flood_fill.cpp" ;;
        175) touch "175_Rotten_oranges.cpp" ;;
        176) touch "176_Shortest_path_in_grid.cpp" ;;
        177) touch "177_Number_of_enclaves.cpp" ;;
        178) touch "178_Surrounded_regions.cpp" ;;
    esac
done
cd ..

# Specialized Problems
mkdir -p "Specialized_Problems"
cd "Specialized_Problems"
for i in {179..181}; do
    case $i in
        179) touch "179_Graph_Coloring_Problem.cpp" ;;
        180) touch "180_Maximum_Flow_Problem.cpp" ;;
        181) touch "181_Word_ladder.cpp" ;;
    esac
done
cd ..

cd ..

# 5. Recursion & Backtracking
mkdir -p "5_Recursion_Backtracking"
cd "5_Recursion_Backtracking"

# General Basics
mkdir -p "General_Basics"
cd "General_Basics"
for i in {182..186}; do
    case $i in
        182) touch "182_Recursive_implementation_of_factorial.cpp" ;;
        183) touch "183_Recursive_power_calculation.cpp" ;;
        184) touch "184_Recursive_nth_Fibonacci_number.cpp" ;;
        185) touch "185_Recursive_palindrome_check.cpp" ;;
        186) touch "186_Recursive_even_numbers_in_range.cpp" ;;
    esac
done
cd ..

# 1D Array Operations
mkdir -p "1D_Array_Operations"
cd "1D_Array_Operations"
for i in {187..197}; do
    case $i in
        187) touch "187_Print_array_in_order.cpp" ;;
        188) touch "188_Print_array_in_reverse_order.cpp" ;;
        189) touch "189_Find_sum_of_array_elements.cpp" ;;
        190) touch "190_Find_product_of_array_elements.cpp" ;;
        191) touch "191_Find_maximum_element.cpp" ;;
        192) touch "192_Find_minimum_element.cpp" ;;
        193) touch "193_Find_average_of_elements.cpp" ;;
        194) touch "194_Print_odd_even_numbers.cpp" ;;
        195) touch "195_Print_prime_numbers.cpp" ;;
        196) touch "196_Count_odd_even_numbers.cpp" ;;
        197) touch "197_Count_prime_numbers.cpp" ;;
    esac
done
cd ..

# 2D Array Operations
mkdir -p "2D_Array_Operations"
cd "2D_Array_Operations"
for i in {198..199}; do
    case $i in
        198) touch "198_Find_maximum_of_2D_array.cpp" ;;
        199) touch "199_Count_prime_numbers_in_2D_array.cpp" ;;
    esac
done
cd ..

# Series & Math
mkdir -p "Series_Math"
cd "Series_Math"
for i in {200..206}; do
    case $i in
        200) touch "200_Sum_1+2+3+...+n.cpp" ;;
        201) touch "201_Sum_1_squared+2_squared+3_squared+...+n_squared.cpp" ;;
        202) touch "202_Sum_1x3+2x5+3x7+...cpp" ;;
        203) touch "203_Sum_2x3+4x5+8x7+...cpp" ;;
        204) touch "204_Sum_2x3x4+4x5x3+8x7x2+...cpp" ;;
        205) touch "205_GCD_of_x_and_y.cpp" ;;
        206) touch "206_LCM_of_x_and_y.cpp" ;;
    esac
done
cd ..

# Digits & Strings
mkdir -p "Digits_Strings"
cd "Digits_Strings"
for i in {207..211}; do
    case $i in
        207) touch "207_Count_digits_of_an_integer.cpp" ;;
        208) touch "208_Sum_of_digits.cpp" ;;
        209) touch "209_Palindrome_integer_check.cpp" ;;
        210) touch "210_Print_all_subsets_of_a_set.cpp" ;;
        211) touch "211_Print_all_subsequences_of_a_string.cpp" ;;
    esac
done
cd ..

# Backtracking & Advanced Recursion
mkdir -p "Backtracking_Advanced_Recursion"
cd "Backtracking_Advanced_Recursion"
for i in {212..227}; do
    case $i in
        212) touch "212_Subsets_with_duplicates.cpp" ;;
        213) touch "213_Permutations.cpp" ;;
        214) touch "214_Permutations_with_duplicates.cpp" ;;
        215) touch "215_Combination_sum.cpp" ;;
        216) touch "216_N-Queens.cpp" ;;
        217) touch "217_Sudoku_solver.cpp" ;;
        218) touch "218_Rat_in_a_maze.cpp" ;;
        219) touch "219_Word_search.cpp" ;;
        220) touch "220_Palindrome_partitioning.cpp" ;;
        221) touch "221_Generate_parentheses.cpp" ;;
        222) touch "222_Letter_combinations_of_phone.cpp" ;;
        223) touch "223_Kth_permutation.cpp" ;;
        224) touch "224_Gray_code.cpp" ;;
        225) touch "225_Expression_add_operators.cpp" ;;
        226) touch "226_Remove_invalid_parentheses.cpp" ;;
        227) touch "227_Beautiful_arrangements.cpp" ;;
    esac
done
cd ..

cd ..

# 6. Dynamic Programming
mkdir -p "6_Dynamic_Programming"
cd "6_Dynamic_Programming"

# 1D DP & Fundamentals
mkdir -p "1D_DP_Fundamentals"
cd "1D_DP_Fundamentals"
for i in {228..243}; do
    case $i in
        228) touch "228_Fibonacci_number_Memo.cpp" ;;
        229) touch "229_Fibonacci_number_Tabulation.cpp" ;;
        230) touch "230_Fibonacci_number_Space_opt.cpp" ;;
        231) touch "231_Min_Cost_Climbing_Stairs_Recursion.cpp" ;;
        232) touch "232_Min_Cost_Climbing_Stairs_Memo.cpp" ;;
        233) touch "233_Min_Cost_Climbing_Stairs_Tabu.cpp" ;;
        234) touch "234_Min_Cost_Climbing_Stairs_Space.cpp" ;;
        235) touch "235_Climbing_Stairs_Standard.cpp" ;;
        236) touch "236_Max_Sum_Non-Adjacent_Recursion.cpp" ;;
        237) touch "237_Max_Sum_Non-Adjacent_Memo.cpp" ;;
        238) touch "238_Max_Sum_Non-Adjacent_Tabu.cpp" ;;
        239) touch "239_Max_Sum_Non-Adjacent_Space.cpp" ;;
        240) touch "240_House_Robber_Recursion.cpp" ;;
        241) touch "241_House_Robber_Memo.cpp" ;;
        242) touch "242_House_Robber_Tabu.cpp" ;;
        243) touch "243_House_Robber_Space.cpp" ;;
    esac
done
cd ..

# Knapsack & Combinations
mkdir -p "Knapsack_Combinations"
cd "Knapsack_Combinations"
for i in {244..261}; do
    case $i in
        244) touch "244_Minimum_Number_of_Coins_Rec.cpp" ;;
        245) touch "245_Minimum_Number_of_Coins_Memo.cpp" ;;
        246) touch "246_Minimum_Number_of_Coins_Tabu.cpp" ;;
        247) touch "247_Cut_Rod_into_Segments_Rec.cpp" ;;
        248) touch "248_Cut_Rod_into_Segments_Memo.cpp" ;;
        249) touch "249_Cut_Rod_into_Segments_Tabu.cpp" ;;
        250) touch "250_Painting_Fence_Algorithm_Rec.cpp" ;;
        251) touch "251_Painting_Fence_Algorithm_Memo.cpp" ;;
        252) touch "252_Painting_Fence_Algorithm_Tabu.cpp" ;;
        253) touch "253_Painting_Fence_Algorithm_Space.cpp" ;;
        254) touch "254_0_1_KnapSack_Problem_Rec.cpp" ;;
        255) touch "255_0_1_KnapSack_Problem_Memo.cpp" ;;
        256) touch "256_0_1_KnapSack_Problem_Tabu.cpp" ;;
        257) touch "257_0_1_KnapSack_Problem_Space.cpp" ;;
        258) touch "258_Combination_Sum_IV_Rec.cpp" ;;
        259) touch "259_Combination_Sum_IV_Memo.cpp" ;;
        260) touch "260_Combination_Sum_IV_Tabu.cpp" ;;
        261) touch "261_Combination_Sum_Standard.cpp" ;;
    esac
done
cd ..

# Math & Subsequences
mkdir -p "Math_Subsequences"
cd "Math_Subsequences"
for i in {262..283}; do
    case $i in
        262) touch "262_Count_Derangements_Rec.cpp" ;;
        263) touch "263_Count_Derangements_Memo.cpp" ;;
        264) touch "264_Count_Derangements_Tabu.cpp" ;;
        265) touch "265_Count_Derangements_Space.cpp" ;;
        266) touch "266_Perfect_Squares_Problem_Rec.cpp" ;;
        267) touch "267_Perfect_Squares_Problem_Memo.cpp" ;;
        268) touch "268_Perfect_Squares_Problem_Tabu.cpp" ;;
        269) touch "269_Perfect_Cube_Problem.cpp" ;;
        270) touch "270_Longest_Increasing_Subsequence_Rec.cpp" ;;
        271) touch "271_Longest_Increasing_Subsequence_Memo.cpp" ;;
        272) touch "272_Longest_Increasing_Subsequence_Tabu.cpp" ;;
        273) touch "273_Longest_Increasing_Subsequence_Space.cpp" ;;
        274) touch "274_LIS_DP_Binary_Search.cpp" ;;
        275) touch "275_Increasing_Triplet_Subsequence.cpp" ;;
        276) touch "276_Longest_Arithmetic_Subsequence_Rec.cpp" ;;
        277) touch "277_Longest_Arithmetic_Subsequence_Memo.cpp" ;;
        278) touch "278_Longest_Arithmetic_Subsequence_Tabu.cpp" ;;
        279) touch "279_Longest_Arithmetic_Subsequence_given_diff.cpp" ;;
        280) touch "280_Partition_Equal_Subset_Sum_Rec.cpp" ;;
        281) touch "281_Partition_Equal_Subset_Sum_Memo.cpp" ;;
        282) touch "282_Partition_Equal_Subset_Sum_Tabu.cpp" ;;
        283) touch "283_Partition_Equal_Subset_Sum_Space.cpp" ;;
    esac
done
cd ..

# DP on Strings & Grids
mkdir -p "DP_on_Strings_Grids"
cd "DP_on_Strings_Grids"
for i in {284..305}; do
    case $i in
        284) touch "284_Longest_Common_Subsequence_Rec.cpp" ;;
        285) touch "285_Longest_Common_Subsequence_Memo.cpp" ;;
        286) touch "286_Longest_Common_Subsequence_Tabu.cpp" ;;
        287) touch "287_Longest_Common_Subsequence_Space.cpp" ;;
        288) touch "288_Longest_Palindromic_Subsequence_Rec.cpp" ;;
        289) touch "289_Longest_Palindromic_Subsequence_Memo.cpp" ;;
        290) touch "290_Longest_Palindromic_Subsequence_Tabu.cpp" ;;
        291) touch "291_Longest_Palindromic_Subsequence_Space.cpp" ;;
        292) touch "292_Edit_Distance_Rec.cpp" ;;
        293) touch "293_Edit_Distance_Memo.cpp" ;;
        294) touch "294_Edit_Distance_Tabu.cpp" ;;
        295) touch "295_Edit_Distance_Space.cpp" ;;
        296) touch "296_Largest_Square_area_in_Matrix_Rec.cpp" ;;
        297) touch "297_Largest_Square_area_in_Matrix_Memo.cpp" ;;
        298) touch "298_Largest_Square_area_in_Matrix_Tabu.cpp" ;;
        299) touch "299_Largest_Square_area_in_Matrix_Space.cpp" ;;
        300) touch "300_Minimum_Sideways_Jump_Rec.cpp" ;;
        301) touch "301_Minimum_Sideways_Jump_Memo.cpp" ;;
        302) touch "302_Minimum_Sideways_Jump_Tabu.cpp" ;;
        303) touch "303_Minimum_Sideways_Jump_Space.cpp" ;;
        304) touch "304_Unique_Paths.cpp" ;;
        305) touch "305_Minimum_Path_Sum.cpp" ;;
    esac
done
cd ..

# DP on Stocks
mkdir -p "DP_on_Stocks"
cd "DP_on_Stocks"
for i in {306..316}; do
    case $i in
        306) touch "306_Buy_and_Sell_Stock_I.cpp" ;;
        307) touch "307_Buy_and_Sell_Stock_II_Rec.cpp" ;;
        308) touch "308_Buy_and_Sell_Stock_II_Memo.cpp" ;;
        309) touch "309_Buy_and_Sell_Stock_II_Tabu.cpp" ;;
        310) touch "310_Buy_and_Sell_Stock_II_Space.cpp" ;;
        311) touch "311_Buy_and_Sell_Stock_III_Rec.cpp" ;;
        312) touch "312_Buy_and_Sell_Stock_III_Memo.cpp" ;;
        313) touch "313_Buy_and_Sell_Stock_III_Tabu.cpp" ;;
        314) touch "314_Buy_and_Sell_Stock_III_Space.cpp" ;;
        315) touch "315_Buy_and_Sell_Stock_IV_K-Transactions.cpp" ;;
        316) touch "316_Buy_and_Sell_Stock_with_Transaction_Fee.cpp" ;;
    esac
done
cd ..

# Advanced & Game Theory DP
mkdir -p "Advanced_Game_Theory_DP"
cd "Advanced_Game_Theory_DP"
for i in {317..345}; do
    case $i in
        317) touch "317_Minimum_Cost_for_Tickets_Rec.cpp" ;;
        318) touch "318_Minimum_Cost_for_Tickets_Memo.cpp" ;;
        319) touch "319_Minimum_Cost_for_Tickets_Tabu.cpp" ;;
        320) touch "320_Min_Score_Triangulation_of_Polygon_Rec.cpp" ;;
        321) touch "321_Min_Score_Triangulation_of_Polygon_Memo.cpp" ;;
        322) touch "322_Min_Score_Triangulation_of_Polygon_Tabu.cpp" ;;
        323) touch "323_Reducing_Dishes_Rec.cpp" ;;
        324) touch "324_Reducing_Dishes_Memo.cpp" ;;
        325) touch "325_Reducing_Dishes_Tabu.cpp" ;;
        326) touch "326_Reducing_Dishes_Space.cpp" ;;
        327) touch "327_Max_Height_by_Stacking_Cuboids.cpp" ;;
        328) touch "328_Russian_Doll_Envelopes.cpp" ;;
        329) touch "329_Pizza_with_3n_size_Rec.cpp" ;;
        330) touch "330_Pizza_with_3n_size_Memo.cpp" ;;
        331) touch "331_Pizza_with_3n_size_Tabu.cpp" ;;
        332) touch "332_Pizza_with_3n_size_Space.cpp" ;;
        333) touch "333_Number_of_Dice_Rolls_with_Target_Sum_Rec.cpp" ;;
        334) touch "334_Number_of_Dice_Rolls_with_Target_Sum_Memo.cpp" ;;
        335) touch "335_Number_of_Dice_Rolls_with_Target_Sum_Tabu.cpp" ;;
        336) touch "336_Number_of_Dice_Rolls_with_Target_Sum_Space.cpp" ;;
        337) touch "337_Minimum_Swap_to_Make_Sequence_Increasing.cpp" ;;
        338) touch "338_Unique_BSTs_Catalan_Number.cpp" ;;
        339) touch "339_Guess_Number_Higher_or_Lower_II.cpp" ;;
        340) touch "340_Minimum_Cost_Tree_From_Leaf_Values.cpp" ;;
        341) touch "341_Optimal_Binary_Search_Tree.cpp" ;;
        342) touch "342_Matrix_Chain_Multiplication.cpp" ;;
        343) touch "343_Egg_Dropping.cpp" ;;
        344) touch "344_Word_Break.cpp" ;;
        345) touch "345_Palindrome_Partitioning.cpp" ;;
    esac
done
cd ..

cd ..

# 7. Bit Manipulation & Math
mkdir -p "7_Bit_Manipulation_Math"
cd "7_Bit_Manipulation_Math"
for i in {346..365}; do
    case $i in
        346) touch "346_Check_power_of_two.cpp" ;;
        347) touch "347_Count_set_bits.cpp" ;;
        348) touch "348_Single_number.cpp" ;;
        349) touch "349_Two_non-repeating_numbers.cpp" ;;
        350) touch "350_Missing_number.cpp" ;;
        351) touch "351_Subsets_using_bits.cpp" ;;
        352) touch "352_XOR_from_1_to_N.cpp" ;;
        353) touch "353_Fast_exponentiation.cpp" ;;
        354) touch "354_GCD.cpp" ;;
        355) touch "355_LCM.cpp" ;;
        356) touch "356_Sieve_of_Eratosthenes.cpp" ;;
        357) touch "357_Prime_factorization.cpp" ;;
        358) touch "358_Modular_exponentiation.cpp" ;;
        359) touch "359_Modular_inverse.cpp" ;;
        360) touch "360_Trailing_zeros_in_factorial.cpp" ;;
        361) touch "361_Pascal_triangle.cpp" ;;
        362) touch "362_nCr_modulo_p.cpp" ;;
        363) touch "363_Catalan_numbers.cpp" ;;
        364) touch "364_Euler_totient.cpp" ;;
        365) touch "365_Chinese_remainder_theorem.cpp" ;;
    esac
done
cd ..

# 8. Divide and Conquer
mkdir -p "8_Divide_and_Conquer"
cd "8_Divide_and_Conquer"
for i in {366..382}; do
    case $i in
        366) touch "366_Maximum_subarray_sum_Kadane.cpp" ;;
        367) touch "367_Majority_element.cpp" ;;
        368) touch "368_Find_minimum-maximum_in_array.cpp" ;;
        369) touch "369_Kth_largest_element.cpp" ;;
        370) touch "370_Count_even_numbers_in_an_array.cpp" ;;
        371) touch "371_Print_odd_numbers_of_an_array.cpp" ;;
        372) touch "372_Calculate_sum_of_an_array.cpp" ;;
        373) touch "373_Calculate_sum_of_even_numbers.cpp" ;;
        374) touch "374_Calculate_X_to_power_Y.cpp" ;;
        375) touch "375_Binary_search.cpp" ;;
        376) touch "376_Merge_sort.cpp" ;;
        377) touch "377_Quick_sort.cpp" ;;
        378) touch "378_Count_inversions_in_an_array.cpp" ;;
        379) touch "379_Longest_common_prefix_of_N_strings.cpp" ;;
        380) touch "380_Closest_pair_of_points_Euclidean_distance.cpp" ;;
        381) touch "381_Segregate_positive_and_negative_numbers.cpp" ;;
        382) touch "382_Count_occurrences_of_an_element.cpp" ;;
    esac
done
cd ..

# 9. Greedy Algorithm
mkdir -p "9_Greedy_Algorithm"
cd "9_Greedy_Algorithm"
for i in {383..400}; do
    case $i in
        383) touch "383_Greedy_Algorithm_Fundamentals.cpp" ;;
        384) touch "384_Fractional_Knapsack.cpp" ;;
        385) touch "385_Thieves_in_warehouse.cpp" ;;
        386) touch "386_Maximize_your_marks.cpp" ;;
        387) touch "387_Activity_Selection_Problem.cpp" ;;
        388) touch "388_Greedy_Coin_Change.cpp" ;;
        389) touch "389_Finding_Minimum_Stops.cpp" ;;
        390) touch "390_Smallest_set_of_unit-length_intervals.cpp" ;;
        391) touch "391_Huffman_Encoding.cpp" ;;
        392) touch "392_Max_Meeting_in_One_Room.cpp" ;;
        393) touch "393_Shop_candy_problem.cpp" ;;
        394) touch "394_Reverse_word_in_a_given_string.cpp" ;;
        395) touch "395_Survive_on_Island.cpp" ;;
        396) touch "396_Chocolate_distribution_problem.cpp" ;;
        397) touch "397_Min_cost_of_Ropes.cpp" ;;
        398) touch "398_Job_sequencing_problem.cpp" ;;
        399) touch "399_Activity_selection_in_hall_room.cpp" ;;
        400) touch "400_Multiple_Knapsack.cpp" ;;
    esac
done
cd ..

# 10. Sorting Algorithms
mkdir -p "10_Sorting_Algorithms"
cd "10_Sorting_Algorithms"
for i in {401..406}; do
    case $i in
        401) touch "401_Insertion_Sort.cpp" ;;
        402) touch "402_Selection_Sort.cpp" ;;
        403) touch "403_Bubble_Sort.cpp" ;;
        404) touch "404_Count_Sort.cpp" ;;
        405) touch "405_Quick_Sort.cpp" ;;
        406) touch "406_Merge_Sort.cpp" ;;
    esac
done
cd ..

echo "✅ All folders and files have been created successfully!"
echo "📁 Total: 406+ problem files organized in proper structure"