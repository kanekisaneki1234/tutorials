
def lengthOfLongestSubstring(s: str) -> int:
    longest = 0
    # counter = 0
    left = 0
    right = 0
    set = []
    while right<(len(s)):
        if s[right] in set:
            left+=1
            set = set[(set.index(s[right])+1):]
            # set.remove(s[right])
        else:
            set.append(s[right])
            right+=1
        if (len(set)>longest):longest=len(set)
        print(set)
        # print(longest)

    return longest

s = "pwwkew"
print(lengthOfLongestSubstring(s))