// Title: Filter Elements from Array
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/filter-elements-from-array/

var filter = function(arr, fn) {
    let result = [];

    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            result.push(arr[i]);
        }
    }

    return result;
};
