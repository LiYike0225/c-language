/*
 * @lc app=leetcode.cn id=191 lang=c
 *
 * [191] 位1的个数
 */

// @lc code=start
int hammingWeight(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);  // 每次消去最低位的 1
        count++;
    }
    return count;
}
// @lc code=end

