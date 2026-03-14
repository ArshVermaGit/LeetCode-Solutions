// Title: Sleep
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/sleep/

async function sleep(millis) {
    return new Promise(resolve => setTimeout(resolve, 
millis));
}
