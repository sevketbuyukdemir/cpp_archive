/**
 * This is not a lecture note!!!. This is note for remind for also has knowledge for algorithms.
 * This is not a lecture note!!. This is note for remind for also has knowledge for algorithms.
 * This is not a lecture note!. This is note for remind for also has knowledge for algorithms.
 *
 * My main book is : Data Structures Using C++ (2 edition) - D. S. Malik
 *
 * The main objective of a program is to manipulate data and generate results. And algorithms written for
 * better correctness with take up little space for manipulate data or quickly generate results because
 * space (SSD, HDD etc.) and time is money :)
 *
 * But we can't make this in same time when we gain better space complexity our program run slowly and better
 * time complexity mean is use more space. Your algorithm choice is yours. If you have money you can increase
 * space and gain time or give your time for gain space.
 *
 * Basic Sorting Algorithms :
 *      * Selection Sort
 *      * Insertion Sort (in unorderedLinkedList class (unorderedLinkedList.cpp))
 *      * Shellsort (Diminishing-increment sort)
 *      * Quicksort
 *      * Mergesort
 *      * Heapsort
 * In my opinion best websites for algorithm (i will add others in future) :
 *      (i don't add common websites..)
 *      * https://www.bigocheatsheet.com/
 *      * http://bilgisayarkavramlari.sadievrenseker.com/
 */

#include <iostream>
#include "string.h"
#include <vector>
using namespace std;

// For selection sort algorithm
template <typename data_type>
void selection_sort (data_type *array[]);
template <typename data_type>
int smallest_item_index (data_type *array[]);
template <typename data_type>
void swap_items (data_type *array[], int small_item_index, int big_item_index);
int first_index_for_array = 0;
string ex_array[17] = {"Change", "an", "Array", "Element", "To", "change", "the", "value", "of", "a", "specific", "element,", "refer", "to", "the", "index", "number" };
// For selection sort algorithm
// For Shellsort algorithm
void shell_sort (int *p, int size); // From Şadi Evren Şeker - http://bilgisayarkavramlari.sadievrenseker.com/
// For Shellsort algorithm

//For Quicksort algorithm
void quick_sort (int array[]);
void recursive_quick_sort (int array[], int first_index, int last_index);
int partition (int array[], int first_index, int last_index);
void swap (int array[], int first_index, int second_index);
//For Quicksort algorithm

//For Mergesort algorithm

//For Mergesort algorithm

//For Heapsort algorithm
int test_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void heap_sort (int array[]);
void build_heap(int array[]);
void heapify (int array[], int low, int high);
//For Heapsort algorithm

int main() {
    std::cout << "Sorting Algorithms!" << std::endl;
    return 0;
}

// For selection sort algorithm
template <typename data_type>
void selection_sort (data_type *array[]){
    /*
     * Selection sort steps :
     *      1- Find smallest item in data_structure and its index.
     *      2- Swap this item with data_structure's minimum index.
     *      3- Decrease 1 the data_structure length.
     * Time complexity : O(n^2)
     * Space complexity : O(1)
     */
    int index;
    for (int current = 0; current < array->length(); current++){
        index = smallest_item_index(array);
        swap_items(array, current, index);
        first_index_for_array++;
    }
}

template <typename data_type>
int smallest_item_index (data_type *array[]) {
    int index = first_index_for_array;

    for (int i = index +1; i < *array->length(); i++) {
        if (*array[index] > *array[i]) {
            index = i;
        }
    }
    return index;
}

template <typename data_type>
void swap_items (data_type *array[], int small_item_index, int big_item_index) {
    data_type temp;
    temp = array[small_item_index];
    array[small_item_index] = array[big_item_index];
    array[big_item_index] = temp;
}
// For selection sort algorithm

// For Shellsort algorithm
// From http://bilgisayarkavramlari.sadievrenseker.com/2008/12/20/kabuk-siralama-shell-sort/
// https://www.youtube.com/watch?v=pgas4Q-ibiA
// Şadi Evren Şeker - http://bilgisayarkavramlari.sadievrenseker.com/
void shell_sort (int *p, int size)
{
    /*
     * Time complexity :
     *      Best : O(nlogn)
     *      Average : O(n(logn)^2)
     *      Worst : O(n(logn)^2)
     * Space complexity : O(1)
     */
    int   i, j, k, temp;
    for (k = size; k > 1; ) {
        k = (k < 5) ? 1 : ((k * 5 - 1) / 11); // Conditional ternary operator ( ? )
        for (i = k - 1; ++i < size; ) {
            temp = p[i];
            for (j = i; p[j - k] > temp; ) {
                p[j] = p[j - k];
                if ((j -= k) < k)
                    break;
            }
            p[j] = temp;
        }
    }
}
/*
 * The conditional operator evaluates an expression, returning one value if that expression evaluates
 * to true, and a different one if the expression evaluates as false. Its syntax is:
 *
 *  condition ? result1 : result2
 *
 *
 * k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
 * Equal with :
 *      if (k < 5) {
 *          k = 1;
 *      } else {
 *          k = (k * 5 - 1) / 11;
 *      }
 */
// For Shellsort algorithm

// For Quicksort algorithm
/*
 * Pivot : The pivot is used to divide the list into two sublist: the lowerSublist and the upperSublist.
 * The elements in the lowerSublist are smaller than the pivot, and the elements in the upperSublist are
 * greater then the pivot.
 *
 * Steps for Quicksort :
 *      1- Determine the pivot (You can choose any element but common choice is middle index of list).
 *      2- Sort the list according to pivot.
 *      3- Smaller and bigger list enter first step again until lists elements equal 2 (recursive algorithm)
 *      4- Lists are combined. And sorted.
 *
 * Time complexity :
 *      Best : O(nlogn)
 *      Average : O(nlogn)
 *      Worst : O(n^2)
 * Space complexity :
 *      Worst : O(logn)
 *
 */
void quick_sort (int array[]) {
    int array_length = sizeof(array) / sizeof(array[0]);
    recursive_quick_sort(array, 0, array_length - 1);
}

void recursive_quick_sort (int array[], int first_index, int last_index) {
    int pivot;
    if(first_index < last_index) {
        pivot = partition(array, first_index, last_index);
        recursive_quick_sort(array, first_index, pivot - 1);
        recursive_quick_sort(array, pivot + 1, last_index);
    }
}

int partition (int array[], int first_index, int last_index) {
    int pivot;
    int index, small_index;
    swap(array, first_index, ((first_index + last_index) / 2));
    pivot = array[first_index];
    small_index = first_index;
    for (index = first_index + 1; index <= last_index; index++) {
        if (array[index] < pivot) {
            index++;
            swap(array, small_index, index);
        }
    }
    swap(array, first_index, small_index);
    return small_index;
}

void swap (int array[], int first_index, int second_index) {
    int swap_temp;
    swap_temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = swap_temp;
}
// For Quicksort algorithm

//For Mergesort algorithm
/*
 * Merge sort algorithm consists of 2 stages which are Divide and Merge :
 *      1- Divide
 *      2- Merge
 *      This can use another format or recursively but necessary for Mergesort
 * Example : Mergesort steps for linked list (Data Structures Using C++)
 *
 *      if the list is of a size greater than 1 {
 *              1. Divide the list into two sublist.
 *              2. Mergesort the first sublist
 *              3. Mergesort the second sublist
 *              4. Merge the first sublist and the second sublist.
 *      }
 *
 * Time complexity :
 *      Best : O(nlogn)
 *      Average : O(nlogn)
 *      Worst : O(nlogn)
 * Space complexity :
 *      Worst : O(n)
 */

//For Mergesort algorithm

//For Heapsort algorithm
/*
 * *********************************************************************************************************************
 * ... book definition ::
 * Heap : A heap is a list in which each element contains a key, such that the key in the element at
 * position k in the list is at least as large as the key in the element at position 2k+1 (if it exists)
 * and 2k+2 (if it exists).Recall that, in C++ the array index starts at 0. Therefore, the element at position
 * k is in fact the k+1th element of the list.
 * ...
 * ... wikipedia definition ( https://en.wikipedia.org/wiki/Heap_(data_structure) )::
 * In computer science, a heap is a specialized tree-based data structure which is essentially an almost complete[1]
 * tree that satisfies the heap property: in a max heap, for any given node C, if P is a parent node of C, then the
 * key (the value) of P is greater than or equal to the key of C. In a min heap, the key of P is less than or equal
 * to the key of C.[2] The node at the "top" of the heap (with no parents) is called the root node.
 ***********************************************************************************************************************
 * You can implement tree with array, linked list or any data structure this is not a real data structure this is an
 * index operation for easy search operations.
 *
 * Heapsort algorithm can explain in 3 function :
 *      1- Heapify
 *      2- Build heap
 *      3- Heap sort (this is a swap and heapify operation not all algorithm..)
 * Time complexity :
 *      Best : O(nlogn)
 *      Average : O(nlogn)
 *      Worst : O(nlogn)
 * Space complexity :
 *      Worst : O(1)
 *
 */
void heap_sort(int array[]) {
    int length = sizeof(array) / sizeof(array[0]);
    int current;
    build_heap(array);
    for (int last_out_of_order = length - 1; last_out_of_order >= 0; last_out_of_order--) {
        current = array[last_out_of_order];
        array[last_out_of_order] = array[0];
        array[0] = current;
        heapify(array, 0, last_out_of_order - 1);
    }
}

void build_heap(int array[]) {
    int length = sizeof(array) / sizeof(array[0]);
    for (int index = length/2-1; index >= 0; index--) {
        heapify(array, index, length -1);
    }
}

void heapify (int array[], int low, int high) {
    int large_index;
    int current = array[low];
    large_index = 2 * low + 1;
    while (large_index <= high) {
        if (large_index < high) {
            if (array[large_index] < array[large_index + 1]) {
                large_index = large_index + 1;
            }
        }
        if (current > array[large_index]) {
            break;
        } else {
            array[low] = array[large_index];
            low = large_index;
            large_index = 2 * low + 1;
        }
    }
    array[low] = current;
}
//For Heapsort algorithm





















