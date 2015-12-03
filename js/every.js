function isEven(num) {
    return num % 2 == 0;
}

var nums = [2, 4, 7, 6, 8, 10];
var even = nums.every(isEven);
if (even) {
    print("All numbers are even");
}
else {
    print("Not all numbers are even");
}
