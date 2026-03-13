// Title: Memoize
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/memoize/

var memoize = function(fn) {
    const cache = {};

    return function(...args) {
        const key = JSON.stringify(args);

        if (key in cache) {
            return cache[key];
        }

        const result = fn(...args);
        cache[key] = result;
        return result;
    };
};
