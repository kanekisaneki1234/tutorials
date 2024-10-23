# def twoSum(nums: list[int], target: int) -> list[int]:
#     i=0
#     j=i+1
#     output = []
#     while (i<len(nums)):
#         while (j<len(nums)):
#             if (nums[i]+nums[j]==target):
#                 output = output + [i,j]
#             j+=1
#         i+=1
#     return output

# l=[3,2,4]
# target=6
# result = twoSum(l,target)
# print(result)

def twoSum(nums: list[int], target: int) -> list[int]:
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []

l = [1, 2, 3, 4]
target = 7
result = twoSum(l, target)
print(result)