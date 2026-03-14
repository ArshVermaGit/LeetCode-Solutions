// Title: Add Two Promises
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/add-two-promises/

var addTwoPromises = async function(promise1, promise2) 
{
    const [value1, value2] = await Promise.all
([promise1, promise2]);
    return value1 + value2;
};
