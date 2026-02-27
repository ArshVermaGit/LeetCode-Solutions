// Title: Minimum Operations to Equalize Binary String
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-equalize-binary-string/

            q.pop();

            // Range of zeros we can end up with after 
flipping k elements:
            // Max zeros we can flip: min(i, k)
            // Min zeros we can flip: max(0, k - (n - i))
            // If we flip j zeros, next count is: i - j 
+ (k - j) = i + k - 2j
            
            int low = i + k - 2 * min(i, k);
            int high = i + k - 2 * max(0, k - (n - i));
            
            // All reachable states from 'i' have the 
same parity as 'low' (or 'high')
            int p = low % 2;
            auto it = unvisited[p].lower_bound(low);
            
            while (it != unvisited[p].end() && *it <= 
high) {
                int next_zeros = *it;
                dist[next_zeros] = dist[i] + 1;
                if (next_zeros == 0) return dist
[next_zeros];
                
                q.push(next_zeros);
                it = unvisited[p].erase(it); // Erase 
returns the next iterator
            }
        }

        return dist[0];
    }
};
