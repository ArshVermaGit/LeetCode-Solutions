// Title: Array Wrapper
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/array-wrapper/

var ArrayWrapper = function(nums) {
    this.nums = nums;
};

// For numeric operations like obj1 + obj2
ArrayWrapper.prototype.valueOf = function() {
    return this.nums.reduce((sum, num) => sum + num, 
};

// For String(obj)
ArrayWrapper.prototype.toString = function() {
    return `[${this.nums.join(',')}]`;
};
0);
