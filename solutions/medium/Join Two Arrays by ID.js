// Title: Join Two Arrays by ID
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/join-two-arrays-by-id/

var join = function(arr1, arr2) {
  const map = new Map();

  // Add all elements from arr1
  for (const obj of arr1) {
    map.set(obj.id, obj);
  }

  // Merge / overwrite with arr2
  for (const obj of arr2) {
    if (map.has(obj.id)) {
      map.set(obj.id, { ...map.get(obj.id), ...obj });
    } else {
      map.set(obj.id, obj);
    }
  }

  // Convert to array and sort by id
  return Array.from(map.values()).sort((a, b) => a.id 
- b.id);
};
