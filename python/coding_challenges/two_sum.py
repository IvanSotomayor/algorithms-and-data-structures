def twoSum(nums, target):
    my_dictonary = {}

    for index in range(0, len(nums)):
        if target - nums[index] in my_dictonary:
            return [index,my_dictonary[target - nums[index]]]
        else:
            my_dictonary[nums[index]] = index


