// Title: Debounce
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/debounce/

var debounce = function(fn, t) {
    let timer = null;
    return function(...args) {
        clearTimeout(timer);
        timer = setTimeout(() => fn(...args), t);
    };
};
