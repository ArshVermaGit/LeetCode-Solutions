// Title: Minimum Pair Removal to Sort Array II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-ii/

            if (rn != -1 && val[i] > val[rn]) bad++;

            if (lp != -1) pq.push({val[lp] + val[i], lp});
            if (rn != -1) pq.push({val[i] + val[rn], i});

        while (bad > 0) {
            auto [sum, i] = pq.top(); pq.pop();
            int j = next[i];

            if (j == -1 || !alive[i] || !alive[j] || val[i] + 

            int lp = prev[i];
            int rn = next[j];

            if (lp != -1 && isBad(lp)) bad--;
            if (isBad(i)) bad--;
            if (j != -1 && isBad(j)) bad--;

            val[i] += val[j];
            alive[j] = false;

            next[i] = rn;
            if (rn != -1) prev[rn] = i;

            if (lp != -1 && val[lp] > val[i]) bad++;
val[j] != sum) continue;

            ops++;
        }

        return ops;
    }
};
