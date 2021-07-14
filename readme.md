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
