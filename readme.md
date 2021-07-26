# LeetCode Journey

## 20210713

### #704 binary-search

`while (lo < hi) choose mi or mi + 1`

### #278 first-bad-version

`n + 1 or calculating mi will overflow`

### #35 search-insert-position

search the first rank that is no smaller than the given target

## 20210714

### #977 squares-of-a-sorted-array

`lo++`or`hi--`may overflow

### #189 rotate-array

using normal swap operation, there will be `gcd(n, k)` circles

```
int gcd(int m, int n){
    return n == 0 ? m : gcd(n, m % n);
}
```

Trick: equals to `rotate(nums.rbegin(), nums.rbegin() + k % nums.size(), nums.rend());`

## 20210715

### #283 move-zeroes

Fast-slow bipointers. When the loop ends, those behind slow pointers are all zeroes.

### #167 two-sum-ii-input-array-is-sorted

Small-big bipointers. Or using binary-search in #35.

## 20210716

### #344 reverse-string

Just reverse.

### #557 reverse-words-in-a-string-iii

A pointer to detect space.

### Offer 53 count-in-a-sorted-array

Binary search for the first no smaller than the target and the first bigger than it.

```
e < nums[mi] return lo - 1 // the last no bigger
e <=nums[mi] return hi     // the first no smaller
```

### #1694 reformat-phone-number

## 20210717

### #876 middle-of-the-linked-list

Fast-slow bipointers. Fast goes next of next.

### #19 remove-nth-node-from-end-of-list

Fast-slow bipointers. Fast ahead by n pointers. Remind of deleting the head.\
Recursion Ver.

```
class Solution {
public:
    int cur = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(!head) return nullptr;
       head->next = removeNthFromEnd(head->next, n);
       cur++;
       if(n == cur) return head->next;
       return head;
    }
};
```

PS: Dummyhead can be useful.

## 20210718

### #3 longest-substring-without-repeating-characters

Slide-window. Take a vector or map to restore the last position where the `end` character appears. Remember to check the window size when the loop ends.

### #567 permutation-in-string

Slide-window.\
PS: Update the number of the matched characters.

## 20210719

### #733 flood-fill

BFS.\
PS: Remenber to change the color when it is pushed in queue.

### #695 max-area-of-island

Check every position to conduct a BFS.

## 20210720

### #617 merge-two-binary-trees

Recursive merge.

### #116 populating-next-right-pointers-in-each-node

When coming to the next layer, the next pointers of the last layer are ready. Use those pointers to traverse the last layer.

### #1877 minimize-maximum-pair-sum-in-array

Sorted array is the solution.

## 20210721

### #542 01-matrix

Set all the zero into the queue.

### #994 rotting-oranges

Same.

## 20210722

### #21 merge-two-sorted-lists

Recursion.

### #206 reverse-linked-list

Loop: pre, cur, nxt tri-pointers.\
Recursion: write an independent function `reverse(pre, cur)`.

## 20210723

### #77 combinations

Same.

### #46 permutations

Same.

### #784 letter-case-permutation

PS: Use 2-digit encoding to traverse.

## 20210724

### #70 climing-stairs

Fibnacci.

### #198 house-robber

`dp[i] = max(dp[i - 2] + nums[i], dp[i - 1])`

### #120 triangle

`dp[i] = min(dp[i], dp[i - 1]) + triangle[layer][i]`
PS: Bottom-up will be simple.

## 20210725

### #231 power-of-two

Best solution:
`return n > 0 && (n & (n - 1)) == 0;`

### #191 number-of-1-bits

Same.

## 20210726

### #190 reverse-bits

Trick in java's methods `Integer.reverse` and `Interger.bitCount`. Using the way that count every 2/4/8/16/32 bits.

### #136 single-number

Xor.
PS: `accumulate(vec.begin(), vec.end(), bit_op)`.
