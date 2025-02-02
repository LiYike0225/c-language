/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize-1;
    int tmp = 0;
    while (left < right){
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left ++;
        right --;
    }
}
// @lc code=end

