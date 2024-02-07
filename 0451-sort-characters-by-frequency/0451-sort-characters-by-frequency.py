class Solution:
    def frequencySort(self, s: str) -> str:
        from collections import defaultdict
        ump = defaultdict(int)
        for c in s:
            ump[c] += 1
        str_list = [(value, key) for key, value in ump.items()]
        str_list.sort(reverse = True)
        return "".join([key*key2 for (key, key2) in str_list])
        