// Title: To Be Or Not To Be
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/to-be-or-not-to-be/

var expect = function(val) {
    return {
        toBe: function(value) {
            if (val === value) {
                return true;
            }
            throw new Error("Not Equal");
        },
        notToBe: function(value) {
            if (val !== value) {
                return true;
            }
            throw new Error("Equal");
        }
    };
};
