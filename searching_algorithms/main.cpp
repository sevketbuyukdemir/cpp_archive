/**
 * This is not a lecture note!!!. This is note for remind for also has knowledge for algorithms.
 * This is not a lecture note!!. This is note for remind for also has knowledge for algorithms.
 * This is not a lecture note!. This is note for remind for also has knowledge for algorithms.
 *
 * The main objective of a program is to manipulate data and generate results. And algorithms written for
 * better correctness with take up little space for manipulate data or quickly generate results because
 * space (SSD, HDD etc.) and time is money :)
 *
 * But we can't make this in same time when we gain better space complexity our program run slowly and better
 * time complexity mean is use more space. Your algorithm choice is yours. If you have money you can increase
 * space and gain time or give your time for gain space.
 *
 * Some words for search algorithms :
 *      * key, uniquely identify
 *      * space complexity, time complexity, Big O notation, ANALYSIS OF ALGORITHMS (i will only give Big O's but if
 * you learn algorithm analysis you will calculate it yourself)
 *      * Ordered list vs. Unordered list
 *      * Recursive Search Algorithms
 *      * Comparison based search algorithms
 *      * Sequential search
 *      * Binary search - divide and conquer
 *      * Hashing (hashing, hash table, hash function, synonyms, overflow, collision, open addressing(closed hashing),
 * open hashing(chaining), linear probing, probe sequence, clustering, primary clustering, random probing, rehashing,
 * quadratic probing, secondary clustering, double hashing, hashing analysis, ..)
 *      * Tree
 *      * Binary tree
 *      * B-tree
 */
#include <iostream>
#include "string.h"

using namespace std;

int main() {
    std::cout << "Search Algorithms!" << std::endl;
    return 0;
}

/*
 *      * Sequential and Binary search algorithms search the list by comparing the target element with
 * the data structure elements and then these algorithms are called comparison based search algorithms.
 *
 * Tips : C++ compare strings with alphabetical order. [if ('Z' > 'A') {} -> condition is always true.]
 */

int sequential_search(string search_array[], string item) {
    /*
     * Time complexity :
     *      Best case = O(1)
     *      Average case = O(n)
     *      Worst case = O(n)
     * Space complexity :
     *      O(1) // don't need extra space
     */
    int index;
    bool found = false;
    for (index = 0; index < search_array->length(); index++) {
        if (search_array[index] == item) {
            found = true;
        }
    }
    if (found) {
        return index;
    } else {
        return -1;
    }
}

int binary_search(string search_array[], string item) {
    /*
     * !!! you must use sorted data structure for binary search algorithm !!!
     * Time complexity :
     *      Best case = O(1)
     *      Average case = O(log(n))
     *      Worst case = O(log(n))
     * Space complexity :
     *      O(1) // don't need extra space
     */
    int first_index = 0;
    int middle_index = search_array->length() -1;
    int last_index;
    bool found = false;
    while (first_index <= last_index && !found) {
        middle_index = (first_index + last_index) / 2;
        if (search_array[middle_index] == item) {
            found = true;
        } else if (search_array[middle_index] > item) {
            last_index = middle_index - 1;
        } else {
            first_index = middle_index +1;
        }
    }
    if (found) {
        return middle_index;
    } else {
        return -1;
    }
}

/**
 * Key : uniquely identifier for data, data address
 * Hashing : special data organization.
 * Hash table : table which show hashing, keep data addresses with their keys
 * Hash function : A function for take data from hash table with its key. hash_function(data_address)
 * Synonyms = Two keys(data_address) are not equal (X1 != X2) but their value is equal (hash_function(X1) = hash_function(X2))
 * Overflow = Let X be a data address hash_function(X) = bucket. If bucket(hash table row) is full, this is called overflow.
 * Collision = This is a problem for us we should solve this with our hash function choice.
 * If hash_function(X1) = hash_function(X2) this is called collision.
 *
 * Hash function choice criteria :
 *      * Easy to compute
 *      * Minimize the number of collisions
 *
 * Collision Resolution
 *      * Open addressing (Closed hashing)
 *          -> Data is stored within hash table.
 *      * Chaining (Open hashing)
 *          -> Data is organized in linked lists and the hash table is an array of pointers to the linked lists.
 *                  - linked lists first pointers in array -
 *
 * Common Open Addressing Implementations :
 *      * Linear probing
 *      * Random probing
 *      * Rehashing
 *      * Quadratic probing
 *
 * Book description for reminder..You should learn from book :
 *
 * Linear Probing :
 *      ....
 *      In linear probing, we assume that the array is circular so that if the lower portion of the array
 *      is full, we can continue the search in the top portion of the array. This can be accomplished by
 *      using the mod operator (%). That is, starting at t, we check the array locations t, (t+1) % HTSize,
 *      ... , (t+j) % HTSize. This is called the probe sequence.
 *      ....
 *      Primary clustering means that if there is a cluster and the initial position of a new record would
 *      fall anywhere in the cluster the cluster size increases. Linear probing leads to this type of clustering.
 *
 * Random Probing :
 *      ....
 *      This method is uses a random number generator to find the next available slot. The ith slot in the
 *      probe sequence ..
 *      ....
 *
 * Rehashing :
 *      ....
 *      In this method, if a collision occurs with the hash function h, we use a series of hash functions,
 *      h1, h2, ..., hs. That is, if the collision occurs at h(X), the array slots h1(X), 1 <= hi(X) <= s
 *      are examined.
 *      ....
 *
 * Quadratic Probing :
 *      ....
 *      Suppose that an item with key X is hashed at t, that is, h(X) 1⁄4 t and 0  t  HTSize – 1.
 *      Further suppose that position t is already occupied. In quadratic probing, starting at position
 *      t, we linearly search the array at locations (t + 1) % HTSize, (t + 2 2 ) % HTSize 1⁄4 (t + 4) %
 *      HTSize, (t + 3 2 ) % HTSize 1⁄4 (t + 9) % HTSize, . . ., (t + i 2 ) % HTSize. That is, the probe
 *      sequence is: t, (t + 1) % HTSize (t + 2 2 ) % HTSize, (t + 3 2 ) % HTSize, . . ., (t + i 2 ) % HTSize.
 *      ....
 */


