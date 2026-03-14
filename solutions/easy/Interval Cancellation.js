// Title: Interval Cancellation
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/interval-cancellation/

var cancellable = function(fn, args, t) {
    fn(...args); // call immediately

    const intervalId = setInterval(() => {
        fn(...args);
    }, t);

    return function cancelFn() {
        clearInterval(intervalId);
    };
};
