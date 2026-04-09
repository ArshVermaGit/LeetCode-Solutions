// Title: XOR After Range Multiplication Queries II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/xor-after-range-multiplication-queries-ii/

            for (int idx=bucket[k]; idx!=-1; 
idx=nxt[idx]) {
                auto& q=queries[idx];
                int l=q[0], r=q[1];
                long long v=q[3], inv=Inv[v];

                pref[l]=(pref[l]*v)%mod;
                r+=k-((r-l)%k);
                if (r<n) {
                    pref[r]=(pref[r]*inv)%mod;
                }
            }

            // Apply the prefix product for 
this k
            for (int i=0; i<n; i++) {
                if (i>=k) pref[i]=(pref[i]*pref
[i-k])%mod;
                if (pref[i]!=1) nums[i]=(nums[i]
*pref[i])%mod;
            }
        }

        return accumulate(nums.begin(), nums.end
(), 0, bit_xor<>());
    }
};
const auto init = []() noexcept {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
