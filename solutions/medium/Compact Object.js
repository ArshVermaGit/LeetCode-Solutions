// Title: Compact Object
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/compact-object/

var compactObject = function(obj) {
    if (Array.isArray(obj)) {
        const result = [];
        
        for (let item of obj) {
            if (Boolean(item)) {
                result.push(compactObject(item));
            }
        }
        
        return result;
    }

    if (obj !== null && typeof obj === "object") {
        const result = {};
        
        for (let key in obj) {
            if (Boolean(obj[key])) {
                result[key] = compactObject(obj[key]);
            }
        }
        
        return result;
    }

    return obj;
};
