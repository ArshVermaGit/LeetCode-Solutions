// Title: Function Composition
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/function-composition/

var compose = function(functions) {
    return function(x) {
        let result = x;

        for (let i = functions.length - 1; i >= 0; 
            result = functions[i](result);
        }

        return result;
    };
};
i--) {
