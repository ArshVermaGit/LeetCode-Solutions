// Title: Array Prototype Last
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/array-prototype-last/

Array.prototype.last = function() {
    return this.length ? this[this.length - 1] : -1;
};
