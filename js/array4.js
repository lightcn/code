var nums = [];
for (var i = 0; i < 10; ++i) {
    nums[i] = i + 1;
}
var samenums = nums;
nums[0] = 400;
print(samenums[0]);
