// Title: Cache With Time Limit
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/cache-with-time-limit/

var TimeLimitedCache = function() {
    this.map = new Map();
};

TimeLimitedCache.prototype.set = function(key, value, 
    const now = Date.now();
    const exists = this.map.has(key) && this.map.get
    this.map.set(key, { value, expire: now + 
    return exists;
};

TimeLimitedCache.prototype.get = function(key) {
    const now = Date.now();
    if (!this.map.has(key)) return -1;
    const entry = this.map.get(key);
    if (entry.expire <= now) return -1;
    return entry.value;
};

TimeLimitedCache.prototype.count = function() {
    const now = Date.now();
    let c = 0;
    for (const [k, v] of this.map) {
        if (v.expire > now) c++;
    }
    return c;
};
duration) {
(key).expire > now;
duration });
