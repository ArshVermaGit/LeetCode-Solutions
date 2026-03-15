// Title: Execute Asynchronous Functions in Parallel
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/execute-asynchronous-functions-in-parallel/

var promiseAll = function(functions) {
    return new Promise((resolve, reject) => {
        let results = new Array(functions.length);
        let completed = 0;

        functions.forEach((fn, i) => {
            fn().then(val => {
                results[i] = val;
                completed++;
                if (completed === functions.length) 
resolve(results);
            }).catch(reject);
        });
    });
};
