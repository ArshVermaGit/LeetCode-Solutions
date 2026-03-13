// Title: Allow One Function Call
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/allow-one-function-call/

var once = function(fn) {
    let called = false;

    return function(...args) {
        if (called) {
            return undefined;
        }

        called = true;
        return fn(...args);
    };
};
