// Title: Walking Robot Simulation II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/walking-robot-simulation-ii/

                int maxX = min(x + num, width - 
1); 
                int rem = num - (maxX - x); 
                num = rem; 
                if(rem == 0) {
                    x = maxX, y = ny; 
                } else {
                    x = maxX; 
    void step(int num) {
        num %= (2 * (width - 1) + 2 * (height - 
1));
        if (num == 0) {
            num = (2 * (width - 1) + 2 * 
(height - 1));
        }

        while(num > 0) {
            int nx = x, ny = y; 
            
            if(dir == "East") {
    Robot(int width, int height) {
        x = 0, y = 0, dir = "East";
        this->width = width, this->height = 
height;
    }
    
class Robot {
    int x; 
    int y;
    int width; 
    int height; 
    string dir; 
public:
