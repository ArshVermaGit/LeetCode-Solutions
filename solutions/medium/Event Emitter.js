// Title: Event Emitter
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/event-emitter/

    if (!this.events[event]) {
        this.events[event] = [];
    }

    this.events[event].push(cb);
    const idx = this.events[event].length - 1;
    let isActive = true;

    return {
        unsubscribe: () => {
            if (isActive) {
                this.events[event][idx] = null; // 
                isActive = false;
            }
        }
    };
};

EventEmitter.prototype.emit = function(event, args = 
    if (!this.events[event]) return [];

    const result = [];

    for (let cb of this.events[event]) {
mark removed
[]) {
        if (cb !== null) {
            result.push(cb(...args));
        }
    }

    return result;
};
