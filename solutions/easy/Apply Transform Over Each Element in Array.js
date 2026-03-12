// Title: Apply Transform Over Each Element in Array
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/apply-transform-over-each-element-in-array/

var map = function(arr, fn) {
    let result = [];
    
    for (let i = 0; i < arr.length; i++) {
        result[i] = fn(arr[i], i);
    }
    
    return result;
};
