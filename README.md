# CIS_25 - Fall 2025
 Programming Using C++

MODULE 7
This program defines a struct named 'Item' containing two attributes: name (string) and id (int). 
The program dynamically allocates an array called "items", with the size of 100 elements in the array.
Each item in the array is given a name and concatenated with an integer number corresponding to the item's index in the array. In this case, each item is named Name_00 where the two zeros are replaced with the next integer number for the next item in the array.
The named items are sorted. Then for each element in the array, each item is populated dynamically nd given a name and ID number. 

The user is asked to enter an ID to search through the array. That ID becomes a parameter in a binary search function (with items and size as the other parameters). 
A completed binary search would return an integer value, or if that ID is not in the array it will return -1.
An output of the Item ID and it's corresponding name is displayed if the user's target ID is in the array. Otherwise an "Item ID not found" message is displayed.

Finally, the memory is deleted to clear the array from the memory.

