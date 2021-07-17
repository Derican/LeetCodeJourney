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
