// Title: Calculator with Method Chaining
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/calculator-with-method-chaining/


Calculator.prototype.add = function(value) {
    this.result += value;
    return this;
};

Calculator.prototype.subtract = function(value) {
    this.result -= value;
    return this;
};

Calculator.prototype.multiply = function(value) {
    this.result *= value;
    return this;
};

Calculator.prototype.divide = function(value) {
    if (value === 0) {
        throw new Error("Division by zero is not 
    }
    this.result /= value;
    return this;
};

Calculator.prototype.power = function(value) {
    this.result = Math.pow(this.result, value);
    return this;
};

allowed");
};
    this.result = value;
var Calculator = function(value) {
