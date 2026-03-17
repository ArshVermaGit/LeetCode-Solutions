// Title: Group By
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/group-by/

Array.prototype.groupBy = function(fn) {
  const result = {};

  for (const item of this) {
    const key = fn(item);

    if (!result[key]) {
      result[key] = [];
    }

    result[key].push(item);
  }

  return result;
};
