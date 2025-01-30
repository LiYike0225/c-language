/*
 * @lc app=leetcode.cn id=509 lang=c
 *
 * [509] 斐波那契数
 */

// @lc code=start
int memo[31] = {0};
int fib(int n) {
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    if (memo[n] != 0){
        return memo[n]; 
    }
    return memo[n] = fib(n-1)+fib(n-2);
}
// @lc code=end

