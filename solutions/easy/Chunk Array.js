// Title: Chunk Array
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/chunk-array/

var chunk = function(arr, size) {
    const res = [];
    for (let i = 0; i < arr.length; i += size) {
        res.push(arr.slice(i, i + size));
    }
    return res;
};
